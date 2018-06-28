#include <string>
#include<iostream>
using namespace std;
string digits(string str);

int main(){
	string a="abramah";
		string b="wi55llyy9";
	string f=	digits(b);
	cout<<f<<endl;
}


string digits(string str)
{  string s;
	if(str.size()!=0){
 //cout<<str[0]<<endl;
 int x = 0;
 str[0]>>x;
   if(x==5){
   	cout<<"iside int "<<x<<endl;
      return s+digits(str.substr(1));
   }else{
      return digits(str.substr(1));
   }
}else{
	return s;
}
}
