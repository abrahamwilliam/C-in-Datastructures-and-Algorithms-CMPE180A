		#include<iostream>
		using namespace std;
		int digitsInCommon(int m, int n);
		int compare(int, int);
		
		
		int main(){
			int x=31332224;
			int y=112358;
			int d=digitsInCommon(x,y);
			cout<<"digits in commmon are"<<d<<endl;
		}
		
		// Add any helper functions  here
		int digitsInCommon(int m, int n)
		{ 	int count,totalcount;
		 int temp,digit,digit2;
		 int tempn=n;
		 int temp1=0;
		 int digitNxt=0;
		 int swCount1,swCount2,swCount3,swCount4,swCount5,swCount6,swCount7,swCount8,swCount9;
		 int h=0;
		 
	 while (m > 0 ){
		      digit = m % 10;
		    digitNxt=m%100;
		    
		    h++;
		    
		    switch(digit){
		    	
		    	case 1: swCount1++;
		    	break;
		    	case 2: swCount2++;
		    	break;
		    	case 3: swCount3++;
		    	break;
		    	case 4: swCount4++;
		    	break;
		    	case 5: swCount5++;
		    	break;
		    	case 6: swCount6++;
		    	break;
		    	case 7: swCount7++;
		    	break;
		    	case 8: swCount8++;
		    	break;
		    	case 9: swCount9++;
		    	break;
			}
		    
		    // cout<<"digit "<<digit<<endl;
		   // cout<<"digitnxt ="<<digitNxt<<endl;
		     
		   
		     //count= compare(digit, m);
		     
		     //int i=0,count1;	
			while (n > 0 && swCount1<=1 && swCount2<=1 && swCount3<=1 && swCount4<=1 && swCount5<=1 && swCount6<=1 && swCount7<=1 && swCount8<=1  && swCount9<=1)  
		      {
		    digit2 = n % 10;
		    
		     
		     //cout<<"digits2 are"<<digit2<<endl;
		     if(digit==digit2 && temp1!=digit2){
		     	count++;
		     	temp1=digit;
		     	cout<<"digits are"<<digit<<endl;
		    break;
		     	
			 }
			 	 n = n / 10;
			 //	 cout<<"digits  2 are"<<n<<endl;
			 	 
			
		        } 
		     	n=tempn;
		     	
		     	m=m/10;
		    
		   
		  }  
		
		return count;
		}
		
		
		
		

