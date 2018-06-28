#include<iostream>
using namespace std;

class a{
	
static int a1;
	public:
	//	int a;
		void add(int aa){
			a1=aa;
		}
		
		void display(){
			cout<<"value of a is "<<a1<<endl;
		}
};

class b:public a{
	
	
};


int a::a1;
int main(){
	b b1;
	b1.add(222);
	b1.display();
	a a2;
	a2.display();
}
