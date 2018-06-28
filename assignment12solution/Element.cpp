#include <iostream>
#include "Element.h"

using namespace std;


long Element::copy_count;
long Element::destructor_count;


Element::Element() : value(0) {}

Element::Element(long val) : value(val) {}

Element::Element(const Element& other)
{
    value = other.value;
    copy_count++;
}

Element::~Element()
{
    destructor_count++;
}


long Element::get_value() const { return value; }


long Element::get_copy_count() { return copy_count; }

long Element::get_destructor_count() { return destructor_count; }

void Element::reset()
{
    copy_count = destructor_count = 0;
}

 */
bool Element::operator <(const Element& elmt1, const Element& elmt2)
{
    return elmt1.value < elmt2.value;
}


bool Element::operator >(const Element& elmt1, const Element& elmt2)
{
    return elmt1.value > elmt2.value;
}


ostream& operator <<(ostream& outs, const Element& elmt)
{
    outs << elmt.get_value();
    return outs;
}
