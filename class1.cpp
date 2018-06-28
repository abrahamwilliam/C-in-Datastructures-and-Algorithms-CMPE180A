#include<iostream>
using namespace std;

class test{
	
	private:
		int a1,b1;
		string h;
		
	public:
		int c;
		void add(int, int ,int &i);	
		void print();
		void show(){
			cout<<"value of c inside the program is "<<c<<endl;
		}
		
		
};

void test::add(int a, int b, int &c){

c=a+b+c	;
a1=a;
b1=b;

}

void test::print(){
			
			cout<<"the value of the a1 is ="<<a1<<endl;
			cout<<"the value of the b1 is ="<<b1<<endl;
			cout<<"the value of the i as referce is ="<<c<<endl;
			cout<<"helo this is my first program"<<endl;
		}

//Main function is taking the h declared here below bu not the a, b, c declared in the class scope
int h;
int main(){
	test t;
	int f;
	cout<<"enter the value of the c is" <<endl;
	cin>>f;
	 t.add(1,2,f);
cout<<"the value of the fnal k is "<<f<<endl;
t.print();
t.show();
}




