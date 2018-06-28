#include <iostream>
#include <vector>
using namespace std;
void swap3last(vector<int>& a);
void print(const vector<int>& v);


void swap3last(vector<int>& a){
	
	int temp1=0,temp2 =0;
	int count=(a.size()-1);
	for(int i=0;i<a.size();i++){
		 
		if(i==2){
			temp1=a[i];
		a[i]=0;
		}
		
			if(i==count){
		temp2=a[i];
		a[i]=temp1;
	}
		
	}
	
int c=a.size();
	for(int i=a.size();i>0;i--){
			if(i==2){
			a[i]=temp2;
		}
		
	}
	

	
	
}

void print(const vector<int>& v)
{
   cout << "{";
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i];
      if (i < v.size() - 1) cout << ", "; 
   }
   cout << "}" << endl;
}

int main()
{
   vector<int> values; //= { 3, 1, 4, 1, 5, 9, 2, 6 };
   values.push_back(3);
    values.push_back(1);
     values.push_back(4);
      values.push_back(1);
       values.push_back(5);
        values.push_back(9);
         values.push_back(2);
          values.push_back(6);
   swap3last(values);
   print(values);
   cout << "Expected: {3, 1, 6, 1, 5, 9, 2, 4}" << endl;
/*
   vector<int> values2 = { 1, -2, 3, -4, 5, -6 };
   swap3last(values2);
   print(values2);
   cout << "Expected: {1, -2, -6, -4, 5, 3}" << endl;

   vector<int> values3 = { 1, 2, 3, 4 };
   swap3last(values3);
   print(values3);
   cout << "Expected: {1, 2, 4, 3}" << endl;

   vector<int> values4 = { 1, 2, 3 };
   swap3last(values4);
   print(values4);
   cout << "Expected: {1, 2, 3}" << endl;
   
   vector<int> values5 = { 1 };
   swap3last(values5);
   print(values5);
   cout << "Expected: {1}" << endl;

   vector<int> values6 = {};
   swap3last(values6);
   print(values6);
   cout << "Expected: {}" << endl;
*/
   return 0;
}
