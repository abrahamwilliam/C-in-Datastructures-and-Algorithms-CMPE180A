#include<iostream>
using namespace std;

int main(){
	
	int a=100;
	int *b;
	b=&a;
	cout<<"the pointer value before change "<<*b<<endl;
	
	*b=150;
	cout<<"the new single pointer value after change is"<<*b<<endl;
	
	int **h;
	h=&b;
	cout<<"the double pointer value is **h is "<<**h<<endl;
	
	**h=250;

		cout<<"the double pointer value is **h is "<<**h<<endl;
		
		int f=10001;
		
		*h=&f;
			cout<<"the double pointer value is **h is "<<**h<<endl;
		
}
