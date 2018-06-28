#include<iostream>
using namespace std;
int min(int, int, int ,int);
int max(int, int, int ,int);
double middle(int, int, int ,int);

int main(){
	
	int k=min(11,14,9,61);
	cout<<"the smallest is "<<k<<endl;
	
	int l=max(11,144,91,61);
		cout<<"the largest is "<<l<<endl;
		
		double m=middle(11,14,9,61);
		cout<<"the mddle is "<<m<<endl;
}



int min(int a, int b, int c, int d)
{
   int result = a;
   if (b < result) result = b;
   if (c < result) result = c;
   if (d < result) result = d;
   return result;
}

int max(int a, int b, int c, int d){
int result = a;
   if (b > result) result = b;
   if (c > result) result = c;
   if (d > result) result = d;
   return result;	
	
	
}


double middle(int a, int b, int c, int d)
{
	int mn=min(11,14,9,61);
	int mx=max(11,14,9,61);

	
	double mid=(static_cast<double>((a+b+c+d)-(mn+mx)))/2;
/*	
	if(a>mn && a<mx){
		mid1=a;
	} else if(b>mn && b<mx){
		mid1=b;
	}else if (c>mn && c<mx){
	mid1=c;
}
else if(d>mn && d<mx){
	mid1=d;
}else{
}

	cout<<"the mid1 is"<<mid1<<endl;
	
		if(a>mn && a<mx && a!=mid1){
		mid2=a;
	} else if(b>mn && b<mx && b!=mid1){
		mid2=b;
	}else if (c>mn && c<mx && c!=mid1){
	mid2=c;
}
else if(d>mn && d<mx && d!=mid1){
	mid2=d;
}else{
}
	
	cout<<"the mid2 is"<<mid2<<endl;
	*/
	
return mid;
}
