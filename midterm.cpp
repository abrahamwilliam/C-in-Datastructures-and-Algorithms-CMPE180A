#include<iostream>
#include<vector>
using namespace std;



int main(){
int n;
cout<<"Enter the value of the size"<<endl;
cin>>n;

int* j;
j= new int[n];
for(int i=1;i<n+1;i++){
	j[i]=i*10;
}
for(int i=1;i<n+1;i++){
	cout<<j[i]<<endl;
}

vector<int*> i;
for(int k=0;k<n;k++){
	
i.push_back(j);
j++;

}



/*
i.push_back(10);
i.push_back(20);
i.push_back(30);

*/
for(int j=1;j<n+1;j++){
	
	cout<<*(i.at(j))<<endl;
}	
	
}
