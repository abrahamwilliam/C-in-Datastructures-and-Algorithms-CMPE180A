#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> r;
	vector<int> :: iterator i;
	vector<int> :: reverse_iterator ri;
	
	r.emplace_back()
	
	for(int i1=0;i1<=5;i1++){
		r[i1]=i1;
		r.at(i1);
	}
	
	for(i=r.begin();i!=r.end();++i){
	//	cout<<*i<<endl;
//	int h=r.pop_back();
//	cout<<r.at(i)<<endl;
	}
	
	for(ri=r.rend(); ri!=r.rbegin();++ri)
	{
//		cout<<r.at(ri)<<endl;
	}
}
