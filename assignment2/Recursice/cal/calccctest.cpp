
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>

using namespace std;

struct Tokeniser {
    char type;
    double value;
    string name;
    Tokeniser(char ch) :type(ch), value(0) { }
    Tokeniser(char ch, double val) :type(ch), value(val) { }
    Tokeniser(char ch, string n) :type(ch), name(n) { }
};
class Stream {
    bool full;
    Tokeniser buffer;
public:
    Stream() :full(0), buffer(0) { }
    Tokeniser get();
    void unget(Tokeniser t) {
        buffer=t;
        full=true;
    }
    void ignore(char);
};
const char letter = 'L';
const char name = 'a';
int bracesCount=0;

//get function for reading characters
Tokeniser Stream::get()
{
    if (full) {
        full=false;
        return buffer;
    }
    char ch;
    cin >> ch;
    switch (ch) {
    case '(':    case ')':    case '+':    case '-':    case '*':    case '/':  case '=': case '%': case '^':{
		if(ch=='('){
			bracesCount=bracesCount+1;
		} else if(ch==')'){
			bracesCount=bracesCount-1;
		} else if(ch=='='){
			if(bracesCount>0){
				throw "***** Missing )";
			}
		} else if(ch=='%'){
			throw "***** Unexpected %";
		}
		if(bracesCount<0){
			throw "***** Unexpected )";
		}
        return Tokeniser(ch);
	}
    case '.':    case '0':    case '1':    case '2':    case '3':    case '4':    case '5':    case '6':    case '7':    case '8':    case '9':{
		if(!full && ch=='.'){
			throw "Done!";
		}
        cin.unget();
        double val;
        cin >> val;
        return Tokeniser('0',val);
    }
    default:
        if (isalpha(ch)) {
            string s;
            s += ch;
            while(cin.get(ch) && (isalpha(ch) || isdigit(ch))) s+=ch;
            cin.unget();
            if (s == "letter") return Tokeniser(letter);
            if (s == ".") {
				throw "Done!";
				return Tokeniser('.');
			}
            return Tokeniser(name,s);
        }
    }
}
void Stream::ignore(char c){
	if (full && c==buffer.type) {
		full = false;
		return;
	}
}
struct Variable {
    string name;
    double value;
    bool var;
    Variable(string n, double v, bool va=true) :name(n), value(v), var(va) { }
};
vector<Variable> names;
double get_value(string s)
{
    for (int i = 0; i<names.size(); ++i)
        if (names[i].name == s) return names[i].value;
}
Stream ts;
double expression();

// factor fucntion that calls expression again to achieve recusrion
double factor()
{
    Tokeniser t = ts.get();
    switch (t.type) {
    case '(':
    {   double d = expression();
        t = ts.get();
        return d;
    }
    case '-':
        return - factor();
    case '0':
        return t.value;
    case name:
        return get_value(t.name);
    }
}

// term fucntion that calls factor
double term()
{
    double left = factor();
    while(true) {
        Tokeniser t = ts.get();
        switch(t.type) {
        case '*':
            left *= factor();
            break;
        case '/':
        {   double d = factor();
			if (d==0){
				cout<<"***** Division by zero";
			}
            left /= d;
            break;
        }
        case '^':
        {
            left = pow (left, factor());
            break;
        }
        default:
            ts.unget(t);
            return left;
        }
    }
}

// expression fucntion that calls term
double expression()
{
    double left = term();
    while(true) {
        Tokeniser t = ts.get();
        switch(t.type) {
        case '+':
            left += term();
            break;
        case '-':
            left -= term();
            break;
        case '^':
            left = pow(left,term());
            break;
        default:
            ts.unget(t);
            return left;
        }
    }
}

// declaration function to get names vector
double declaration()
{
    Tokeniser t = ts.get();
    string name = t.name;
    Tokeniser t2 = ts.get();
    double d = expression();
    names.push_back(Variable(name,d));
    return d;
}

// statement function to decide to call declaration or expression
double statement()
{
    Tokeniser t = ts.get();
    switch(t.type) {
    case letter:
        return declaration();
    default:
        ts.unget(t);
        return expression();
    }
}

// main calculate class
class calculate {
	public:
		calculate() {
			while(true){
				try{
					Tokeniser t = ts.get();
					while (t.type == '=') {
						t=ts.get();
					}
					if (t.type == '.') {
						throw "Done!";
						return;
					}
					ts.unget(t);
					cout << statement() << endl;
					cout<<"Expression? ";
				}
				catch(const char* msg) {
					cout << msg << endl;
					if(msg=="Done!"){
						return;
					} else {
						cout<<"Expression? ";
						ts.ignore('=');
					}
				}
			}
		}
};
int main()
{
	try {
		cout<<"Expression? ";
		calculate();
		return 1;
	}
	catch(const char* msg) {
	  cerr << msg << endl;
	  return 1;
	}
}


