#include <string>
#include<iostream>
using namespace std;
bool someDifferent(string str);
/**
   Return true if the given string contains at least two
   different characters. Use recursion. Do not use loops.   
   Hint: If str[0] is not the same as str[1], you have 
   your answer. Otherwise, look at str.substr(1) (the substring of str
   from position 1 to the end).
*/

int main(){
 string s="aa";
 
	bool ss=someDifferent(s);
	cout<<ss<<endl;
}


bool someDifferent(string str)
{
	if(str.size()<=1){
		cout<<str<<endl;
		return false;
	}
	
	
if(str[0]!=str[1]){
		cout<<str<<endl;
	return true;
}	else{
	return someDifferent(str.substr(1));
}
}
