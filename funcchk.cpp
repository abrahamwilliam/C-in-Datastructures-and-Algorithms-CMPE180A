#include<iostream>
using namespace std;
int add(int, int);
int main(){
	
	int h=10;
	int i=11;
	int g=add(h,i);
	cout<<"after returning " << g<<endl;

}

inline	int add(int a, int b){
		
		int f=a+b;
		cout<<"the value is f "<< f<<endl;
		
		return f;
	}
