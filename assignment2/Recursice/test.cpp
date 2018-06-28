#include<string>
#include<iostream>
using namespace std;
string shuffle(string a, string b);

int main(){
	string a="abramah";
		string b="willyy";
	string f=	shuffle(a,b);
	cout<<f<<endl;
}

//add(char s, char b, int i)

string shuffle(string a, string b){
	string s,a1,b1,final;
	if(a.size()!=0 && b.size()!=0){
	
	a1=a[0];
	b1=b[0];
	s=a1+""+b1;
		return s + shuffle(a.substr(1),b.substr(1));

	}else if(a.size()==0 && b.size()>=0){
		b1=b;
		s=b1;
		return s;
	}else if(a.size()>=0 && b.size()==0){
		a1=a;
		s=a1;
		return s;
	}
}
