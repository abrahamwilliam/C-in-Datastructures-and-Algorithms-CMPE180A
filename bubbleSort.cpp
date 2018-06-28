#include<iostream>
#include<string>
using namespace std;
void BuubleSort(int a[],int size);
void swap(int a[],int j,int i);

int main(){
	
	int a[]={11,1,34,45};
	int siz=sizeof(a)/sizeof(a[0]);
	BuubleSort(a,siz);
	for(int i=0;i<siz;i++){
		cout<< "the elements are "<<a[i]<<endl;
	}
}


void BuubleSort(int a[],int size){

int j;
for(int i=0;i<size;i++){
	j=i+1;
	while(j<=size){
		if(a[j]<a[j-1]){
			swap(a,j,j-1);
		}
		j++;
	}
	
}
	
}



void swap(int a[], int j, int i){	
	int temp;
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	
}

