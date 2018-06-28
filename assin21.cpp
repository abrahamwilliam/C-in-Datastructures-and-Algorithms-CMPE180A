#include<iostream>
using namespace std;
double nnavg(int a[], int alen);



int main(){
	
	int a[]={1,-2,-3,-5,2,3};
	int alen=sizeof(a)/sizeof(a[0]);
	double s= nnavg(a,alen);
	cout<<" average of negative is "<<s<<endl;
}



double nnavg(int a[], int alen)
{
	double k=0.0;
double  j=0.0;
for(int i=0;i<alen;i++){
  	if(a[i]>=0){
  		 // cout<<"the a[i] is "<<a[i]<<endl;
  		k+=a[i];
  		j++;
	  }
  }
//  cout<<"the k is "<<k<<endl;
  if(j>0){
  	 return k/j;
  }else{
  	return o;
  }
 


}
