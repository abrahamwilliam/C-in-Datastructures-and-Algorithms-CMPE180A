	#include<iostream>
	#include <cstdlib>
	using namespace std;
	int game2(int iterations);
	int game1(int iterations);
		int die_toss();
		int game1_wins(int a, int b, int c, int d);
			int game2_wins(int a, int b, int c, int d, int e, int f);
	
	int main(){
		 srand(42);
	   cout << game1(1000) << endl;
	   cout << game2(1000) << endl;
	   cout << game1(10000) << endl;
	   cout << game2(10000) << endl;
	   cout << game1(100000) << endl;
	   cout << game2(100000) << endl;
	   cout << game1(1000000) << endl;
	   cout << game2(1000000) << endl;  
		
	}
	
	
/*
  Return true if you got four 6s.
*/
	int game2_wins(int a, int b, int c, int d, int e, int f)
{
	int count=0;
if(a==6) count++;
if(b==6) count++;
if(c==6) count++;
if(d==6) count++;
if(e==6) count++;
if(f==6) count++;

if(count>=4){
	return 1;
}else{
	return 0;
}


	
}
	
	
	int game2(int iterations)
	{
		int a,b,c,d,e,f,Count,winCount=0;
	for(int i=0;i<=iterations;i++){
	 a=die_toss();
	 b=die_toss();
	 c=die_toss();
	 d=die_toss();
	  e=die_toss();
	 f=die_toss();	
	 Count=game2_wins(a,b,c,d,e,f);
	 if(Count==1){
	 	winCount++;
	 }else{	
	 }
	}
	return winCount;
	}
	
	/*
	  Play game 1 for the given number of iterations and return the
	  number of wins.
	*/
	int game1(int iterations)
	{
	int a,b,c,d,Count,winCount=0;
	for(int i=0;i<=iterations;i++){
	 a=die_toss();
	 b=die_toss();
	 c=die_toss();
	 d=die_toss();	
	 Count=game1_wins(a,b,c,d);
	 if(Count==1){
	 	winCount++;
	 }else{	
	 }
	}
	return winCount;
	}
	
	
	/*
	  Return a random number between 1 and 6.
	*/
	int die_toss()
	{
	   return 1 + rand() % 6;
	}
	
	/*
	  Return true if you got a pair of 5s and 6s.
	*/
	int game1_wins(int a, int b, int c, int d)
	{
	if((a==5 && b==5 || a==5 && c==5 || a==5 && d==5  || b==5 && c==5 || b==5 && d==5 || c==5 && d==5) && (a==6 && b==6 || a==6 && c==6 || a==6 && d==6  || b==6 && c==6 || b==6 && d==6 || c==6 && d==6 ) ){
	return 1;	
	}else{
		return 0;
	}
	
	}
	
	

