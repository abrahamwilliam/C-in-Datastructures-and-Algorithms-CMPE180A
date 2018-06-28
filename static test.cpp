#include<iostream>
using namespace std;

int h;
class statictest{
	static int a;
	//int h;
	
	public:
		void increment(int &h){
		
	h=	a++;
			cout<<"the h is first "<<h <<endl;
		}
		
		static void show(){
			
			cout<<"the h is show "<<h <<endl;
			cout<<"the value of the a as a static int is "<< a<<endl;
			
		}
		
		//unary operator overloading
		void operator +();
		
};

int statictest::a;

//unary operator overloading
 void statictest::operator +(){
			
			a=-a*a;
		}

int main(){
	
	statictest s1, s2;
	s1.increment(h);
		statictest::show();
	s2.increment(h);
	

	//unary operator overloading
	+s2;
	
	statictest::show();
}
