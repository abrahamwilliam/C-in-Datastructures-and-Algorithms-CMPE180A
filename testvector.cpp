#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int*> s;
	s.reserve(4);
	//0x6dfe74
	cout<<&s<<endl;
	
	for(int i=0;i<3;i++){
	//	cout<<"the value is "<<s.at(i)<<endl;
	int c=i;
		s.push_back(&c);
	}
	
	for(int i=0;i<3;i++){
		cout<<"the value is "<<s.at(i)<<endl;
	//	s[i]=i;
	}
}
