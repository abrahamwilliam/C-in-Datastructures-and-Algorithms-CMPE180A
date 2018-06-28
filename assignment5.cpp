	#include<iostream>
	#include<cstdlib>
	using namespace std;
	double inside_quarter_circle(double radius, int tries);
	double rand_double();
	
	int main(){
	
	   srand(42);
	   cout << inside_quarter_circle(1, 1000) << endl;
	   cout << inside_quarter_circle(20, 1000) << endl;
	   // Approximating pi
	   cout << 4 * inside_quarter_circle(1, 10000000) << endl;
	}
	
	double rand_double()
	{
	   return rand() * 1.0 / RAND_MAX;
	}
	
	
	double inside_quarter_circle(double radius, int tries)
	{
	
		int hitCount=0;
	double x,y;
	
	double hitRatio;
	
	
	for(int i=0;i<tries;i++){
	x=radius*rand_double();
	 y=radius*rand_double();
	
	if((radius*radius)>=((x*x)+(y*y)))	{
		hitCount++;
	
	}
	}
		
	hitRatio=((static_cast<double>(hitCount))/(static_cast<double>(tries)));
	
	return hitRatio;
	}
	
	

