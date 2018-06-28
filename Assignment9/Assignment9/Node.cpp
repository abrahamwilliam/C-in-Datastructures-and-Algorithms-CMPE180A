#include <iostream>
#include "Node.h"

using namespace std;

// Static member variables, which are global to the class.
// These variables exist independently from any Node objects.
long Node::constructor_count;
long Node::copy_count;
long Node::destructor_count;

/** Constructor Definitions. **/

//Default Constructor.
Node::Node() : value(0)
{
	//Empty Body.
}

//Copy Constructor.
Node::Node(const Node& other)
{
	copy_count++;
	value = other.value;
}

Node::Node(const long the_value)
{
	constructor_count++;
	value = the_value;
}

/** Destructor Definition. **/
Node::~Node()
{
	destructor_count++;
}

/** Getter Definition to return value. **/
long Node::get_value() const
{
	return value;
}

/** Static member function definitions. **/

//Function to return constructor count.
long Node::get_constructor_count()
{
	return constructor_count;
}

//Function to return copy constructor count.
long Node::get_copy_count()
{
	return copy_count;
}

//Function to return desctructor count.
long Node::get_destructor_count()
{
	return destructor_count;
}

//Function to reset all counters to zero.
void Node::reset()
{
	constructor_count = 0;
	copy_count = 0;
	destructor_count = 0;
}

/**
 * Overloaded > operator used to compare
 * current and previous values of data nodes.
 * @param: Node object. **/
bool Node::operator >(const Node &other) const
{
	//For comparing previous and current values of data nodes.
	if(value >= other.value)
	{
		return true;
	}
	return false;
}
