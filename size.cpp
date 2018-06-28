#include <iostream>
#include <cstring>
/*
  Repeats a string n times and places it into a buffer, filling
  it up as much as possible, and providing a terminating 0. 
  Use strncpy. 
  @param str a string
  @param n an integer
  @param result a character array to hold the result
  @param sz the size of result
*/

using namespace std;

void repeat(const char* str, int n, char result[], int sz);

int main()
{
   char results[28];
   char* r2 = results;
   char* r1 = results + 10;
   char* r4 = results + 21;
   char* r3 = results + 22;
   char* r5 = results + 26;
 repeat("Hello", 2, r1, 11);
   repeat("Goodbye", 3, r2, 10);
 /*  strcpy(r5, "x");
  
   repeat("Goodbye", 3, r2, 10);
   repeat("Goodbye", 3, r3, 4);
   repeat("HI", 10, r4, 1);
   cout << r1 << endl;
   cout << "Expected: HelloHello" << endl;   
   cout << r2 << endl;
   cout << "Expected: GoodbyeGo" << endl;
   cout << r3 << endl;
   cout << "Expected: Goo" << endl;
   cout << "\"" << r4 << "\"" << endl;
   cout << "Expected: \"\"" << endl;
   cout << "\"" << r5 << "\"" << endl;
   cout << "Expected: \"x\"" << endl;
   return 0;
   */
}

void repeat(const char* str, int n, char result[], int sz){
	
int	sizeOfIS=(sizeof(str)/sizeof(str[1]))-1;
int k=strlen(str);
 sz=sz-1;
cout<<"sizeOfIS"<<k<<endl;
cout<<"sz"<<sz<<endl;
	int newSize=0;
	if(sizeOfIS<sz){
		strncpy ( result, str, sizeof(str) );
	//	cout<<"result 1 is "<<result<<endl;
		newSize=sz-sizeOfIS;
	//	strncpy ( result, str, newSize );
//	cout<<"newSize is "<<newSize<<endl;

	int j=0;
	for(int i=sizeOfIS;i<sz;i++){
		
	result[i] =str[j++]	;
	}
	
	result[sz+1]='\0';
	
		}
//	cout<<"result is "<<result<<endl;
	
}
