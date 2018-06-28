#include<iostream>
#include<string>
using namespace std;
void selectionSort(int a[],int size);
void swap(int a[],int j,int i);

int main(){
	
	int a[]={11,1,34,45,23};
	int siz=sizeof(a)/sizeof(a[0]);
	selectionSort(a,siz);
	for(int i=0;i<siz;i++){
		cout<< "the elements are "<<a[i]<<endl;
	}

	
}


void selectionSort(int a[],int siz){
	
	int min;
int t=0;
for(int i=0;i<siz;i++){
	min=a[i];
	for(int j=i+1;j<siz-i;j++){
		if(min>a[j]){
			min=a[j];
		}
	t=j;	
	}
	swap(a,t,i);
}
	
}


void swap(int a[], int j, int i){	
	int temp;
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	
}


