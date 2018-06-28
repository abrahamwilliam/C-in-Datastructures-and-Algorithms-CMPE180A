#include <cstring>
#include<iostream>
using namespace std;
const char* nthrep(const char* str, int n);

int main(){
	
	char  c[]="occurrence";
	int n=2;
const char *t;
	t=nthrep(c,n);
	cout<<"t is"<<t<<endl;
	
}


/*
  Return a pointer to the nth occurrence of a repeated character
  in the given string. For example, if str is "occurrence" and n is 2,
  return a pointer to the first r.
*/
const char* nthrep(const char* str, int n)
{
 const char *t1;
 char t;
int count=0;
int size=sizeof(str)/sizeof(str[0]);
while(*str!='\0'){
	if(*str==*(str+1) && count!=n){
		str++;
		count++
	}
	
}

	
}
