#include<iostream>
using namespace std;

class friendfunctest{
	
	int a,b,c;
	
	public:
		friendfunctest(){
			
		}
	
	friendfunctest(int a1, int b1, int c1){
		a=a1;
		b=b1;
		c=c1;
		
	}
	
	friend void add(friendfunctest);
};

void add(friendfunctest s){
	
	int h;
	h=s.a + s.b +s.c;
	cout<<"the value of h is "<<h<<endl;
	
	
}

int main(){
	
	friendfunctest f(11,12,13);
	add(f);
	
	
}
