#include<iostream>
using namespace std;
int h=12;
void add(int &x);
int main(){
	
	int d=10;
	add(d);
	int h=1211;
	cout<<"the value of the d after the change is "<<d<<endl;
	cout<<"the gobal variabel h is  "<<::h<<endl;
	
}

void add(int &d){
	
	cout<<"the value of d is "<<d<<endl;
	
	int a,b;
	cout<<"enter the value t o be added"<<endl;
	cin>>a>>b;
	
	d=a+b+h;
}
