#include<iostream>
using namespace std;
void selectionsort(int);
void swap1(int &a,int &b);

void selectionsort(int a[]){
	
	int s;
	int n=sizeof(a)/sizeof(*a);
	for(int i=0;i<n;i++){
		s=a[i];
		for(int j=i+1;j<n;j++){
			if(s>a[j]){
				s=a[j];
			}
		}
		swap1(a[i],s);
	}
	
}

void swap1(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}

int main(){
	
	int a[]={17,12,13,11,15};
  selectionsort(a);
	int n=sizeof(a)/sizeof(*a);
	cout<<"array size is"<<n<<endl;
	for(int i=0;i<n;i++){
		 cout<<a[i]<<endl;
	}
	
}



