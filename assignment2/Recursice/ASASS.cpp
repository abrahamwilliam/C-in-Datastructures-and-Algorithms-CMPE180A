#include <string>
#include <vector>
#include<iostream>

using namespace std;
int altSumHelper(vector<int> v,int k);
int altSum(vector<int> v);

int main(){

	vector<int> v={1, 1, 2, 3, 5, 8, 13, 21 };
	

	
	int g=altSum(v);
	cout<<g<<endl;
}


int altSumHelper(vector<int> v,int k)
{
   int v2;
  if(v.size()!=0){
  
  	 v2=v.at(0);
     if(((k)%2)!=0){
        
       cout<<" inside v2  0 "<<v2<<endl;
       vector<int>::iterator it = v.begin() ;
     v.erase(it);
       k++;
        return v2-altSumHelper(v,k);
     }else{
     	 vector<int>::iterator it = v.begin() ;
     	v.erase(it);
     	k++;
     	cout<<" inside v2  1 "<<v2<<endl;
     
     	    return  v2+altSumHelper(v,k); 
	 }
     
  }else{
    return  v2; 
  }


}


/**
   Given a vector of integers, return the alternating sum 
   v[0] - v[1] + v[2] - v[3] + ...
   If the vector is empty, the alternating sum is zero.
   Use a recursive helper method. Do not use loops.

*/
int altSum(vector<int> v)
{
   return altSumHelper(v, 0);
}
