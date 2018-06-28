#include<iostream>
using namespace std;
#include<climits>

int* addSub(int , int, int (*c)(int, int));
int compare(int , int);

int main(){
	
const int mx=INT_MAX;

cout<<"MAX_INTEGER"<<mx<<endl;
	
	int a=101;
	int b=11;
	
	//return type as a function pointer
	int *c=addSub(a,b,compare);
	cout<<"the value is after addition is "<<*c<<endl;
}


int* addSub(int a, int b, int (*com)(int, int)){
	int c;	
	if(com(a,b)==b){
	c=a+b;	
	}else{
			c=a-b;
	}

	
	return &c;
}

int compare(int a, int b){
	if(a>b) return a;
	else return b;
	
}

//function pointers

