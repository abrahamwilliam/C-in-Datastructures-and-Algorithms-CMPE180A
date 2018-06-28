#include<iostream>
using namespace std;
int main(){
	int k=10;
	int *p;

	p=&k;
	cout<<"p address is1 "<<p<<endl;
	cout<<"*p value is is 1 "<<*p<<endl; // thi
	int h=1111;
	p=&h;

	cout<<"p is "<<p<<endl;
	cout<<"*p is "<<*p<<endl;
	cout<<"k  address is "<<&k<<endl;
	cout<<"k  value is "<<k<<endl;
	cout<<"h address is "<<&h<<endl;
	cout<<"h  value is "<<h<<endl;
	return 0;
}
