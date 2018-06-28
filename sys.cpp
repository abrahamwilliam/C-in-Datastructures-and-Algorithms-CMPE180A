	#include<iostream>
	using namespace std;
	
	int digitsInCommon(int m, int n)
	{    
	int count,totalcount, h;
			 int temp,digit,digit2;
			 
			 h=n;
			 while (m >= 0 ){
			      digit = m % 10;
			    
			      m= m/ 10;
			     //count= compare(digit, m);
			     
			     //int i=0,count1;	
				while (n > 0 )  
			  {
			    digit2 = n % 10;
			     
			   //  cout<<"digits2 are"<<digit2<<endl;
			     if(digit==digit2){
			     	count++;
			     	//cout<<"digits are"<<digit<<endl;
			    break;
			     	
				 }
				
				 	 n = n / 10;
				 //	 cout<<"digits  2 are"<<n<<endl;	 	 
				
			}
			 n=h;
			
			     			   
			  }  
			
			return count;
			}
			
	

