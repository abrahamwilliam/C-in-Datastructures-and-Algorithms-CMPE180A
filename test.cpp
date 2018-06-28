	#include <string>
	#include<iostream>
	#include<cstring>
	using namespace std;
	string intertwine(string a, string b);
	
	int main(){
		string a="abraham";
		string b="william";
		
		string c=intertwine("alice", "ruth");
		cout<<"tjhe final string is " <<c<<endl;
	}
	
	/**
	   Return a string that mixes the characters in the string a 
	   with the characters in b reversed. For example,
	   intertwine("Fred", "Mary") yields "FyrreadM".
	
	   If one string is longer than the other, append the unused
	   characters (in reverse order if the second string is longer).
	   intertwine("Sue", "Peggy") yields "SyugegeP".
	*/
	string intertwine(string a, string b)
	{
	
	
	int n=a.size();
	
	char ac[n]={};
	
	cout<<"a.c_str()"<<a.c_str()<<endl;
	strcpy(ac,a.c_str());
	
	for (int i=0; i<n; i++)
	      cout <<"the value of the string 1 is  is"<< ac[i]<<endl;
	
	
	////for second string
	int nb=b.size();
	
	char ab[nb]={};
	
	char final[n+nb]={};
	
	strcpy(ab,b.c_str());
	
	for (int i=0; i<nb; i++)
	      cout <<"the value of the string is"<< ab[i]<<endl;
	
	int i=0,k=n+nb;
	
	cout<<"k value is " <<k<<endl;
	int j=nb-1, l=0;
	
	cout<<"j value is " <<j<<endl;
	
	while(i<k){
	
	if(l<n)	{
		final[i]=ac[l];
	//	cout <<"the final  is"<<final[i]<<endl;
	i++;
	l++;
	
	}
		if(j>=0){
			final[i]=ab[j];
	//	cout <<"the final 2  is"<<final[i]<< " j is "<<endl; 
		i++;
		j--;
		}
	
		
	}
	
	for (int i=0; i<(k+1); i++)
	      cout <<"the final value of the string is"<< final[i]<<endl;
	
		string s(final);
		
		cout<<"final is "<<s<<endl;
	
		return s;
	}
