#include<iostream>
#include<vector>
using namespace std;


int main(){
	
	int *a;int n;
	/*
	cout<<"enter the size of the arrray "<<endl;
	cin>>n;
	
	a= new int[n];
	
	for(int i=0;i<n;i++){
		a[i]=i*10;
	}
	
	cout<<"the values are "<<*a+1<<endl;
	
	cout<<"the values are "<<*(a+10)<<endl;
	
	int *a2;
	
	a2=a;
	
	cout<<"the values are in a2 is "<<*(a2+5)<<endl;
	*/
	vector<int*> v;
	
	int *f;
	*f=10;
	v.push_back(f);
	v.push_back(f+1);
	v.push_back(f+2);
	
	cout<<"the vector is "<<v.at(1)<<endl;
	
}
