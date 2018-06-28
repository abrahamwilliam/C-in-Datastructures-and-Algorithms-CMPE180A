#include<iostream>
using namespace std;
double decimal_time(int, int , int, int);

int main(){
	
	bool pm=1;
double derivedTime=decimal_time(7,56,14,0);

cout<<"the new time is"<<derivedTime<<endl;

}

double decimal_time(int hours, int minutes , int seconds, int pm){
	
	double	hours1,minutes1,seconds1;
	if(pm==true && hours!=12){
		hours=hours+12;
	
	hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
		
	//	cout<<"seconds ="<<seconds<<endl;	
		
	}else if(pm==true && hours==12){
		hours=hours+12;
		
	hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
		
		
	}
	
	else if(d=false && hours!=12){
		hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
		
 
	
	
		
	}else if(d=false && hours==12){
		hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
		
 
	}
	
	return ((hours1)+(0.01*minutes1)+(0.0001 *seconds1));
	
}
