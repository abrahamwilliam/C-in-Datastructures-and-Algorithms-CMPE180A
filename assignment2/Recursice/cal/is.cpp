#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <inputStream.cpp>

using namespace std;
const char letter = 'L';
const char name = 'a';
int brace=0;


struct Variable {
    string name;
    double value;
    bool var;
    Variable(string n, double v, bool va=true) :name(n), value(v), var(va) { }
};

vector<Variable> names;

struct input {
    char type;
    double value;
    string name;
    input(char ch) :type(ch), value(0) { }
    input(char ch, double val) :type(ch), value(val) { }
    input(char ch, string n) :type(ch), name(n) { }
};

//taken is tonext classs

inputStream is;
double expression();

input inputStream::getOutput()
{
    if (filledUp) {
        filledUp=false;
        return inp;
    }
    char c;
    cin >> c;
    switch (c) {
    case '(':  
	  case ')': 
	     case '+': 
		    case '-': 
			   case '*':    
			   case '/':  
			   case '=': 
			   case '%':
			    case '^':{
		if(c=='('){
			brace=brace+1;
		} else if(c==')'){
			brace=brace-1;
		} else if(c=='='){
			if(brace>0){
				throw "***** Missing )";
			}
		}else if(c=='%'){
			throw "***** Unexpected %";
		} 
		if(brace<0){
			throw "***** Unexpected )";
		}
        return input(c);
	}
    case '.': 
	   case '0': 
	      case '1': 
		     case '2':    case '3':    case '4':    case '5':    case '6':    case '7':    case '8':    case '9':{
		if(!filledUp && c=='.'){
			throw "Done!";
		}
        cin.unget();
        double val;
        cin >> val;
        return input('0',val);
    }
    default:
        if (isalpha(c)) {
            string s;
            s =s+ c;
            while(  (isalpha(c) || isdigit(c)) && cin.get(c) ){
            	 s=s+c;
			}
            cin.unget();
            if (s == "letter") return input(letter);
            if (s == ".") {
				throw "Done!";
				return input('.');
			}
            return input(name,s);
        }
    }
}


void inputStream::ignore(char c){
	if (filledUp && c==inp.type) {
		filledUp = false;
		return;
	}
}




double get_value(string s)
{
    for (int i = 0; i<names.size(); ++i)
        if (names[i].name == s) return names[i].value;
}



double factor()
{
    input t = is.getOutput();
    switch (t.type) {
    case '(':
    {   double d = expression();
        t = is.getOutput();
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
        input t = is.getOutput();
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
            is.unget(t);
            return left;
        }
    }
}

// expression fucntion that calls term
double expression()
{
    double left = term();
    while(true) {
        input t = is.getOutput();
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
            is.unget(t);
            return left;
        }
    }
}

// declaration function to getOutput names vector
double declaration()
{
    input t = is.getOutput();
    string name = t.name;
    input t2 = is.getOutput();
    double d = expression();
    names.push_back(Variable(name,d));
    return d;
}

// statement function to decide to call declaration or expression
double statement()
{
    input t = is.getOutput();
    switch(t.type) {
    case letter:
        return declaration();
    default:
        is.unget(t);
        return expression();
    }
}

// main calculator class
class calculator {
       	public:
		calculator() {
			while(true){
				try{
					input t = is.getOutput();
					while (t.type == '=') {
						t=is.getOutput();
					}
					if (t.type == '.') {
						throw "Done!";
						return;
					}
					is.unget(t);
					cout << statement() << endl;
					cout<<"Expression? ";
				}
				catch(const char* errormsg) {
					cout << errormsg << endl;
					if(errormsg=="Done!"){
						return;
					} else {
						cout<<"Expression? ";
						is.ignore('=');
					}
				}
			}
		}
};
int main()
{
	try {
		cout<<"Expression? ";
		calculator();
		return 1;
	}
	catch(const char* errormsg) {
	  cerr << errormsg << endl;
	  return 1;
	}
}
