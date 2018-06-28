#include "Coordinate.h"
#include<iostream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdlib>

using namespace std;
/**
 * Maximum latitude and minimum longitude for this app's input data.
 */
const double Coordinate::MAX_LATITUDE  =   49.373112;
const double Coordinate::MIN_LONGITUDE = -124.769867;

/***** Complete this class. *****/

Coordinate::Coordinate(){
latitude=0.0;
	longitude=0.0;
}

 Coordinate::Coordinate(double latitude1 ,double longitude1){
 	if(latitude1==0.00 &&longitude1==0.00) {
 	latitude=0.0;
 longitude=0.0;	
	 }else{
	 	latitude=latitude1;
  	longitude=longitude1;
	 }
  	
  }
  
istream& operator>>(istream& ins, Coordinate& c){
//ins.get();
string s;
string s2;
getline(ins,s,',');
getline(ins,s2,'\n');
//atof(Temperature.c_str());
c.latitude=atof(s.c_str());
//stod(s);

c.longitude=atof(s2.c_str());

return ins;
  }


double Coordinate::get_latitude() const{
	
	return latitude;
}

double Coordinate::get_longitude() const{
    
	return longitude;	
	}
