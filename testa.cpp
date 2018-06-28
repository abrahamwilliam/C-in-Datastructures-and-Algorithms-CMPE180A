#include<iostream>
using namespace std;


class book{
	private:
		int a;
	int b;
	void add(int a, int b);
	
	public:
	void subtract(int a, int b);	
	
};

void book::add(int a, int b){
	cout<<"the addded pn "<<a+b<<endl;
}

void book::subtract(int a, int b){
	this->add(a,b);
	cout<<"the subtract pn "<<a-b<<endl;
}

int main(){
	
	
	int *c;
//	c= new int[n];
	
	book b;
	b.subtract(51,6);
}
