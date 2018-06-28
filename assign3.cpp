#include<iostream>
using namespace std;

void precedingsum(double a[], int n);

/**
   Replaces each element in an array with the sum of itself and the
   elements preceding it. 
    
   For example { 1, 2, 3, 4 } turns into { 1, 3, 6, 10 }

   Do not declare any arrays or vectors.
   @param a an array
   @param n the length of the array
*/

int main(){

double a[]={1, -2, 3, -4, 5, -6};
//output is (1,3,6,10)
int n=sizeof(a)/sizeof(a[0]);
	precedingsum(a,n);
}

void precedingsum(double a[], int n)
{
	double f[n]={};
//	double c[n]={};
	double s=0;
	for(int i=0;i<n;i++){
		s=s+a[i];
	f[i]=s;	
	}
	
	a=f;
/*
for(int i=0;i<n;i++){
	c[i]=s-a[i];
}
*/
for(int i=0;i<n;i++){
	cout<<"i is "<<a[i]<<endl; 
}


}
