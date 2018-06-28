#include<iostream>
using namespace std;
int main()
{
	unsigned int a=-10;
	int a1 [10]={1,2,3,4,4,5,5,6,6,6};
	int x=1011;
	int y=a*x;
	int *p;
	int *k;
	k=&x;
	void *pt;
	pt=&x;
	p=(int*)pt;
		cout<<"pointer value first "<<*k<<endl;
	/*	
		k=&a1[5];
		cout<<"pointer value second "<<*k<<endl; 
		*/
			
	p=&y;
	cout<<"pointer value world"<<*p<<endl;	
	string s="assasasasssa";
	int first,second;
	cout<<"hello world"<<"y is "<<y<<s<<endl;
		cout<<"Enter two numbers"<<endl;
		cin>>first>>second;
		
		if(first>second){
			cout<<"the greater number is first "<<first<<endl;
		}else{
			cout<<"the greater number is second "<<second<<endl;
		}
	cout<<a1[1]<<endl;
	return 0;
}
