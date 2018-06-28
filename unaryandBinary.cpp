#include<iostream>
using namespace std;

class binarytest{
	
	int a,b,c,d, e;
	
	public:
		
		binarytest(){}
		binarytest(int k){
			
				a=1;
		b=2;
		c=4;
		d=3;
			e=k;
		}
		
		void setdata(int aa, int ba, int ca, int da){
		a=aa;
		b=ba;
		c=ca;
		d=da;	
			
		}
		
		void display(){
			cout<<"aa is "<<a<<endl;
				cout<<"ba is "<<b<<endl;
					cout<<"ca is "<<c<<endl;
						cout<<"da is "<<d<<endl;
							cout<<"the constructor object  is "<<e<<endl;
			
		}
		
		binarytest operator *(binarytest b);
		binarytest operator+(binarytest b);
		
		//friend function
		friend void friendfunc(binarytest);
};


binarytest binarytest::operator+(binarytest h){
binarytest f;
	f.a=a*a+h.a+1000;
		f.b=b*a+h.b+1000;
			f.c=a*c+h.c+1000;
				f.d=a*d+h.d+1000;
	return f;
}
binarytest binarytest::operator*(binarytest h){
	
	binarytest f;
	f.a=a*a+h.a+100;
		f.b=b*a+h.b+100;
			f.c=a*c+h.c+100;
				f.d=a*d+h.d+100;
	return f;
}

int main(){
binarytest b1,b2,b3,b4,b5,b6,b7(999),b8(10000),b9(b8);//,b8(27778999);
b1.setdata(1,2,3,4);
b2.setdata(5,6,7,8);
b3.setdata(11,12,13,14);
b4.setdata(15,16,17,18);
b5=b1*b2;
b5.display();

b6=b3*b4;
b6.display();

b7=b5+b6;
b7.display();
b8.display();
b9.display();

//copy constructor(b9 and b8 are also copy constructors)
binarytest b10(100),b11;
b11=b10;
b11.display();
b10.display();

binarytest b13(10001);
binarytest b12=b13;
b12.display();
b13.display();

binarytest b15(122);
//friend function

b15.binarytest(222);
friendfunc(b15);
return 0;
	
}
