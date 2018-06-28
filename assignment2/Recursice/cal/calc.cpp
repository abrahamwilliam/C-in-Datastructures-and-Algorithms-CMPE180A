#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;



int main(){
	
	 stringstream ss; 
	string n,temp;
	int found;
	cout<<"Expression? ";
	cin>> n;
	ss<< n;
	while(!ss.eof()){
		ss>>temp;
		if(stringstream(temp)>>found)
		cout<<found<<" ";
		cout<<temp<<" ";
	}
	
}


class calculator{
	
	
	
};
