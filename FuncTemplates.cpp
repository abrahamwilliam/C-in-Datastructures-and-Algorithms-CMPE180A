#include<iostream>
using namespace std;

template<class a,class b>
void add(a as, b bs){
	cout<<"the added value is "<<as+bs<<endl;
	
}

template<class a, class b>
void sub(a aq, b bq){
	
		cout<<"the added value is "<<aq+bq<<endl;
		
}

int main(){
	int a, b;
	
	string a("california");
	cout<<"th string is "<<a<<endl;
	
	cout<<"enter the two numbers to add"<<endl;
	cin>>a>>b;
	
	int c;
	cout<<"entert the operation to carry on"<<endl;
	cin>>c;
	
	switch(c){
		case 1: add(a,b);
		break;
		case 2:sub(a,b);
		break;
		default: cout<<"enter the correct option"<<endl;
		
	}
	

	
}
