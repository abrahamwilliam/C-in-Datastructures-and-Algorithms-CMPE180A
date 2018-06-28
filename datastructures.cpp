#include<iostream>
#include<vector>
using namespace std;

int main(){

vector <int> v;
//v.emplace_back(11);
v.push_back(11);
v.push_back(12);
v.push_back(13);
v.push_back(14);

for(int i=0; i<v.size();i++){
cout<<"v.at["<<i<<"]"<<v.at(i)<<endl;	
}


vector<int> ::iterator it=v.begin();

int h=v.front()

cout<<v.front()<<endl;
cout<<v.end()<<endl;

/*
while(it!=NULL){
	cout<<*it<<endl;
it++;

}
*/

}
