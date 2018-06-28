#include <cstring>
#include<iostream>
using namespace std;
const char* nthrep(const char* str, int n);

/*
  Return a pointer to the nth occurrence of a repeated character
  in the given string. For example, if str is "occurrence" and n is 2,
  return a pointer to the first r.
*/


int main(){
	
const char *a="occurrence";
int n=2;

const char *c=nthrep(a,n);

cout<<*c<<endl;
}


const char* nthrep(const char* str, int n)
{
	int sizeOfArray = sizeof(str) / sizeof(str[0]);
	for(int i=0;i<sizeOfArray;i++){
		cout<<str[i]<<endl;
	}
char *f=(char*)str[n];

return f;
	
}
