#include<iostream>
using namespace std;
int *reverse(int a[]);


int *reverse(int a[]){
	
	
	int k=(sizeof(a)/sizeof(a[0]))+1;
	
	int *b;
//	b=new int[k];
	int d[]= new int[k];
	int j;
	for(int i=k;i>=0;i--){
		j=0;
		b[j]=a[i];
		cout<<"the reverse element is unique  "<<i<<"=="<<b[j]<<endl;
		j++;
	}
	
	
	return b;
}


int main(){
	
	int *t,*r;
	cout<<"enter the dynamice array size"<<endl;
	int f;
	cin>>f;
	
	t=new int[f];
	for(int i=0;i<=f;i++){
		t[i]=i;
		cout<<"before reverse"<<t[i]<<endl;
	}
	
	r=reverse(t);
	
	for(int i=0;i<=f;i++){
		cout<<"r"<<"["<<i<<"]== reversed array ==8"<<r[i]<<endl;
	}
}
