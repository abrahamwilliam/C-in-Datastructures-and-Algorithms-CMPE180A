#include "City.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdlib>

#include "Coordinate.h"
#include<iostream>

#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdlib>

using namespace std;

/***** Complete this class. *****/

City::City(){
string	name="";
string	state="";
Coordinate c;
coordinate=c;
//	this->City(name,state,c);
}

City::City(string name1,string state1,Coordinate c1){
	
	coordinate=c1;
	
	 	coordinate.latitude=c1.latitude;
  	coordinate.longitude=c1.longitude;
  	name=name1;
 state=state1;
	 
	
//	 cout<<"city object is created "<<endl;
}

Coordinate City::getcoordinate( ){
	
	return this->coordinate;
}

istream& operator>>(istream& ins, City& city){
	
	string s;
string s2;
getline(ins,city.name,',');
getline(ins,city.state,',');
getline(ins,s,',');
getline(ins,s2,'\n');
//atof(Temperature.c_str());
city.coordinate.latitude=atof(s.c_str());
//c.latitude=atof(s.c_str());
//stod(s);
 //cout<<"coordinate is"<<city.coordinate.latitude<<endl;
city.coordinate.longitude=atof(s2.c_str());
		return ins;
}

ostream& operator<<(ostream& outs, const City& city){
	
	outs<<"*"<<city.name << "city.name"<<" "<<city.state;
	
	return outs;
	
}
	
	string City::getName(){
		return this->name;
	}
	
