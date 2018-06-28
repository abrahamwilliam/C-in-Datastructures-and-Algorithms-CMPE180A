#include<iostream>
using namespace std;
int myfunction(int a[], int n);

int main(){
	
	int a[] = {1, 2, 3, 4, 5, 6};
int n = 6;
int f=myfunction(a,n);

cout<<" result is "<<f<<endl;
}



int myfunction(int a[], int n)
{

   if (n == 1) { return a[0]; }

   int m = myfunction(a, n - 1);

 cout<<" m is "<<m<<endl;

   if (a[n] > m) { 
   
    cout<<"(a[n] is "<<a[n]<<endl;
   return a[n - 1]; }

   else { return m; }

}
