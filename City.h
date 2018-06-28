#ifndef CITY_H_
#define CITY_H_

#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdlib>


#include "Coordinate.h"

using namespace std;

/**
 * City data.
 */
class City
{
public:
    
    City();
    City(string name1,string state1,Coordinate c);
    /***** Complete this class. *****/

    /**
     * Overloaded input stream operator to read a city
     * from an input stream.
     * @param ins the input stream.
     * @param city the city to read.
     * @return the input stream.
     */
     Coordinate getcoordinate();
     
     string getName();
     
    friend istream& operator>>(istream& ins, City& city);

    /**
     * Overloaded output stream operator to output a city
     * to an output stream.
     * @param outs the output stream.
     * @param city the city to output.
     * @return the output stream.
     */
      string name;
    string state;
    Coordinate coordinate;
    friend ostream& operator<<(ostream& outs, const City& city);
 //Coordinate coordinate;
private:
   
};

#endif /* CITY_H_ */
