#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<stack>

int main(){

vector <int> v(4);
int a[]={1,2,3,4,5};

stack<int> s;


for(int i=0;i<5;++i){
	s.push(a[i]);

}

//dynamic array
int *a1;
int n=5;
a1=new int[n];     

for(int i=0;i<5;++i){
//a1[i]=s.pop();
cout<<"s.top"<<a1[i]<<endl;
	
}

while(!s.empty()){
	cout<<"the reverse"<<s.top()<<endl;
	s.pop();
}

//for




v[1]=1;
v[2]=2;
v[3]=3;
v[0]=0;
v.pop_back();
v.push_back(5);

reverse(v.begin(),v.end());
for(int i=0;i<4;++i){
	cout<<v.at(i)<<endl;
}

}
