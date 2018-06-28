#include <iostream>
#include "Element.h"

using namespace std;

// Static member variables, which are global to the class.
long Element::copy_count;
long Element::destructor_count;

Element::Element()         : value(0) {}
Element::Element(long val) : value(val) {}

/***** Complete this file. *****/
