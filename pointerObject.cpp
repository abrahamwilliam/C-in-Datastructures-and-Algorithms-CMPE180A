#include<iostream>
using namespace std;

class pointertest{
	
	int a;
	
	public:
		pointertest(){
			
			cout<<"the pointer memory has be created and allocated"<<endl;
		}
      pointertest(int p){
      	a=p;
      	
      		cout<<"the pointer memory has be created and allocated with an additional variable a ="<<  a<<endl;
}

};

int main(){
	pointertest *p;
	p=new pointertest;
	
	int *a;
	a=new int;
	*a=10;
	cout<<"the variable a is "<<*a<<endl;
	
	//to delete a pointer value
	delete a;
	
	cout<<"the variable after the deletion of pointer a "<<*a<<endl;
	
	int c=0;
	
	int *b;
	b=new int[10];
	for(int i=0;i<11;i++){
		b[i]=c++;
		cout<<"the value of hte arrray poiters is  is "<<b[i]<<endl;
	}
	
	delete []b;
	for(int i=0;i<11;i++){
	//	b[i]=c++;
		cout<<"the value of hte arrray poiters is  is "<<b[i]<<endl;
	}
	
	pointertest *p1;
	p1=new pointertest(10);
	//*p1=11;
//	cout<<"the pointer with the constructor"<<*p1<<endl;
	
	
	
	
	
}

