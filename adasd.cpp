#include<iostream>
using namespace std;
int myfunction(int a[], int n);

int main(){
int a[] = {1, 2, 3, 4, 5, 6} ;
int n = 6;
int k=myfunction(a,n);
cout<<k<<endl;
}


int myfunction(int a[], int n)

{

   if (n == 1) { return a[0]; }

   int m = myfunction(a, n - 1);

 

   if (a[n] > m) { return a[n - 1]; }

   else { return m; }

}

