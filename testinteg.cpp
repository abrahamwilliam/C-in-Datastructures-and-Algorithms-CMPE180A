#include <iostream>
#include <sstream>
#include<vector>
using namespace std;
 
int main()
{
    string s = "12-345";
 
    // object from the class stringstream
    stringstream geek(s);
 
    // The object has the value 12345 and stream
    // it to the integer x
    string x = "12-345";
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    int j=v.size();
    int k=3;
    
    
    string s1 = "scott>=tiger";
string delimiter = ">=";
string token = s1.substr(7, s1.find(delimiter));
    
      cout<<"token "<< token<<endl;
    
     cout<<"elements in vector before delting are"<<endl;
for(int i=0;i<j;i++){
    	cout<<"the vALUES bbb ARE  "<<v.at(i)<<endl;
	}
    
    	v.erase (v.begin()+3);
    	int j2=v.size();
    for(int i=0;i<j2;i++){
    	cout<<"the vALUES bbb ARE==  "<<v.at(i)<<endl;
	}	
    
    for(int i=0;i<j;i++){
    	if(k==v.at(i)){
    	v.erase (v.begin()+i);	
		}
	}
    int j1=v.size();
    cout<<"elements in vector are "<<endl;
for(int i=0;i<j1;i++){
    	cout<<"the vALUES ARE  =="<<v.at(i)<<endl;
	}

    
    if(x==s){
    	cout<<"the true"<<endl;
	}
    geek >> x;
 
    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;
 
    return 0;
}
