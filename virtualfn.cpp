#include<iostream>
using namespace std;

class a{
	
	public :
	virtual	void display(){
			
			cout<<"hi in a"<<endl;
		}
};

class b:public a{
	
	public :
		void display(){
			
			cout<<"hi in b"<<endl;
		}
};

int main(){
	
	a *a1;
	b b1;
	a1=&b1;
	a1->display();
	
}

