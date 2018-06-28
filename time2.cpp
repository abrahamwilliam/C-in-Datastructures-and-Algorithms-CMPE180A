#include<iostream>
using namespace std;
double decimal_time(int, int , int, bool);

int main(){
	
	bool pm=1;
double derivedTime=decimal_time(9,10,10,false);

cout<<"the new time is"<<derivedTime<<endl;

}





double decimal_time(int hours, int minutes, int seconds, bool pm)
{		
	double	hours1,minutes1,seconds1;
	if(pm==true && hours<12){
		hours=hours+12;
	
	hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
			cout<<"hours1 ="<<hours1<<endl;
				cout<<"minutes1 ="<<minutes1<<endl;
		cout<<"seconds ="<<seconds1<<endl;
	//	cout<<"seconds ="<<seconds<<endl;	
		
	}else if(pm==true && hours==12){
		hours=hours+12;
		
	hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
		
			cout<<"hours1 ="<<hours1<<endl;
				cout<<"minutes1 ="<<minutes1<<endl;
		cout<<"seconds ="<<seconds1<<endl;
	
	}else if(pm=false && hours<12){
		cout<<"hours ="<<hours<<endl;
		
		hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;
			cout<<"hours1 ="<<hours1<<endl;
				cout<<"minutes1 ="<<minutes1<<endl;
		cout<<"seconds ="<<seconds1<<endl;
 
	
	
		
	}else if(pm=false && hours==12){
		hours1=(static_cast<double>(hours))*(10.0/24.0);
	 minutes1=(static_cast<double>(minutes))*(100.0/60.0);
 seconds1=(static_cast<double>(seconds))*0.864;

	cout<<"hours1 ="<<hours1<<endl;
				cout<<"minutes1 ="<<minutes1<<endl;
		cout<<"seconds ="<<seconds1<<endl;		
 
	}else{
		
	}
	return ((hours1)+(0.01*minutes1)+(0.0001 *seconds1));
}
