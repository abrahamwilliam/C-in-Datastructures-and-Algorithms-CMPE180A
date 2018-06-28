
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;


struct input {
    char type;
    double value;
    string name;
    input(char ch) :type(ch), value(0) { }
    input(char ch, double val) :type(ch), value(val) { }
    input(char ch, string n) :type(ch), name(n) { }
};

class inputStream {
    bool filledUp;
    input inp;
public:
    inputStream() :filledUp(0), inp(0) { }
    input getOutput();
    void unget(input t) {
        inp=t;
        filledUp=true;
    }
    void ignore(char);
};
