#include<iostream>
using namespace std;
double decimal_time(int hours, int minutes, int seconds, bool pm);

int main(){
	
	bool pm=1;
double derivedTime=decimal_time(7,56,14,1);

cout<<"the new time is"<<derivedTime<<endl;

}

//0.01 * decimal minutes + 0.0001 *decimal seconds
	double decimal_time(int hours, int minutes, int seconds, bool pm)
{
	if(hours<=12 && minutes<=60 && seconds<=60 && pm<=1){
	
double hours_derived=(static_cast<double>(hours *60*60)/(100*100));
double minutes_derived=(static_cast<double>(minutes*100)/60);
double seconds_derived=(static_cast<double>(seconds*100)/60);
	
	cout<<"hours_new1="<<hours_derived<<endl;
		cout<<"minutes_new1="<<minutes_derived<<endl;
			cout<<"seconds_new1="<<seconds_derived<<endl;
			
			return ((hours_derived)+(0.01*minutes_derived)+(0.0001 *seconds_derived));
		}else{
			return -1;
		}
		
}
