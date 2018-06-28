#include<vector>
#include<iostream>
using namespace std;

int main(){
	
	vector<int> v;
	
	for(int i=1;i<7;i++){
		v.push_back(i);
	}
	
	vector<int>::iterator i=v.begin();
	vector<int>::iterator t=i;
	
	for(i;i!=v.end();i++){
		cout<<*i<<endl;
	}
	
	
		for(t;t!=v.end();t++){
		cout<<*t<<endl;
	}
	cout<<"the second is "<<endl;
	
	vector<int> v1;
	for(int i=1;i<7;i++){
		v1.push_back(i);
	}
		vector<int>::reverse_iterator i1=v1.rbegin();
		
		for(i1;i1!=v1.rend();i1++){
			cout<<*i1<<endl;
		}
	
}
