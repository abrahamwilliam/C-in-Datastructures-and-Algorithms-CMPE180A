#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
Stream ts;
double expression();


struct Tokeniser {
    char type;
    double value;
    string name;
    Tokeniser(char ch) :type(ch), value(0) { }
    Tokeniser(char ch, double val) :type(ch), value(val) { }
    Tokeniser(char ch, string n) :type(ch), name(n) { }
};



int main(){
	
	try{
		cout<<" Expression? ";
		calculator();
		
	}catch{
		
	}
	
}
