#include<iostream>
using namespace std;

class complex{
	int a1, b1;
	
	public:
	void getdata(int a, int b){
		a1=a;
		b1=b;
		
	}
	
	complex add(complex c){
		
		complex t;
	t.a1=c.a1+a1;
		t.b1=c.b1+b1;
		return t;
		
	}
	
	void show(){
		cout<<"a1 ="<<a1<< " b1 ="<< b1<<endl;
	}
};

int main(){
	complex c1, c2, c3;
	
	c1.getdata(12,13);
	c2.getdata(14,15);
	
	c3=c1.add(c2);
	
	c3.show();
}

