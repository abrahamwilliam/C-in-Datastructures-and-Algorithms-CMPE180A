#include<iostream>
using namespace std;
int* dupefirstlast(int numbers[], int size);

/**
   Duplicate the beginning and the end of the given array
   numbers. You are given the number of elements of the array.

   For example, 1 2 4 8 should turn into 1 1 2 4 8 8.

   Allocate a new array and place all numbers into it (that is,
   the duplicates at the beginning and the end, and all numbers
   in between). 

   If the array is empty, return an array holding two zeroes.

   Use the C++ style new operator.

   Return a pointer to the new array. Do not modify the original array.
*/

int main(){
	int a[]={ 1, 0 };
	//{1,2,4,8,9,10};
	int size=sizeof(a)/sizeof(a[0]);
	int *b;
	b=dupefirstlast(a,size);
 for(int i=0;i<size+2 ;i++){
  	 cout<<"the numbers are smallest "<< b[i]<<endl;
  }
}

int* dupefirstlast(int numbers[], int size)
{
  int *c;int j;

  if(size==0) {
  	*c=0;
  	c++;
  	*c=0;
  }
  else{
  	c= new int[size+2];
  int temp1=numbers[0];
  int temp2=numbers[size-1];
 // cout<<"the numbers are smallest "<< temp1<<"  the numbers are smallest "<<  temp2<<endl;
  c[0]=temp1;
  c[size+1]=temp2;
  	j=0;
  for(int i=1;i<size+1;i++){
 	c[i]=numbers[j];
 //	cout<<"j is"<<j<<endl;
  	j++;
  }
  return c;
  }
  
}
