#ifndef COORDINATE_H_
#define COORDINATE_H_

#include <iostream>
#include <string>
using namespace std;

/**
 * A geographic coordinate.
 */
class Coordinate
{
public:
    
    Coordinate();
    Coordinate(double latitude ,double longitude);
    /***** Commplete this class. *****/

    /**
     * Overloaded input stream extraction operator
     * to read a coordinate from an input stream.
     * @param ins the input stream.
     * @param coordinate the coordinate to read.
     * @return the input stream.
     */
    double get_latitude() const;
    double get_longitude() const;
     
    friend istream& operator >>(istream& ins, Coordinate& coordinate);

    // Constants for this app's input data.
    static const double MAX_LATITUDE;
    static const double MIN_LONGITUDE;
double latitude;
    double longitude;
private:
    
};

#endif /* COORDINATE_H_ */
