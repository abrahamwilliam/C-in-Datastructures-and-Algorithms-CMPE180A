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
    Tokeniser(char ch){
		type=ch;
		value=0;
	}		
    Tokeniser(char ch, double val){
		type=ch;
		value=val;
	}		
    Tokeniser(char ch, string nam){
		type=ch;
		name=nam;
		
	}		
};

class Stream {
    bool full;
    Tokeniser buffer;
public:
    Stream(){
		full=0;
		buffer=0;
	}		
    Tokeniser get();
    void unget(Tokeniser token) {
        buffer=token;
        full=true;
    }
    void ignore(char);
};


Stream s;
double expression();

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

class calculator{
	public:
	void calculator(){
	while(true){
		try{
			Tokeniser t=s.get();
			while(t.type == '='){
			t=s.get();
			}if(t.type== '.'){
				throw "Done !";
				return;
			}
			ts.unget(t);
				cout << statement() << endl;
					cout<<"Expression? ";
			
		}catch(const char* m){
			cout<<m<<endl;
			if(m=="Done !"){
			return;
			}else {
			cout<<"Expression ?";
			s.ignore('=');
			}
		}
	}
	
}
};



int main(){
	
	try{
		cout<<" Expression? ";
		calculator();
		
	}catch{
		
	}
	
}
