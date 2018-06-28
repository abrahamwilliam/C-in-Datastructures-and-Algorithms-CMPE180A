#include <iostream>
#include <iterator>
#include <algorithm>
#include "SortedVector.h"

using namespace std;

/**
 * Default constructor.
 * Reset the global Node counters.
 */
SortedVector::SortedVector()
{
    Node::reset();
}

/**
 * Destructor.
 * Reset the global Node counters.
 */
SortedVector::~SortedVector()
{
    Node::reset();
}

/**
 * @return the size of the data vector.
 */
int SortedVector::size() const { return data.size(); }

/**
 * Check that the data is sorted.
 * @return true if sorted, false if not.
 */
bool SortedVector::check() const
{
    if (data.size() == 0) return true;

    vector<Node>::const_iterator it = data.begin();
    vector<Node>::const_iterator prev = it;

    it++;

    // Ensure that each node is greater than the previous node.
    while ((it != data.end()) && (*it > *prev))
    {
        prev = it;
        it++;
    }

    return it == data.end();  // Good if reached the end.
}

/**
 * Insert a new node at the beginning of the data vector.
 * @param value the new node's value.
 */
void SortedVector::prepend(const long value)
{
	vector<Node>::const_iterator iter = data.begin();
	data.insert(iter,value);
}

/**
 * Append a new node at the end of the data vector.
 * @param value the new node's value.
 */
void SortedVector::append(const long value)
{
	//Pushing elements at the end of the vector.
	data.push_back(value);
}

/**
 * Remove a node.
 * @param index the index of the node to remove.
 */
void SortedVector::remove(const int index)
{
	int len = data.size();
	int mid = data.size()/2;
	vector<Node>::iterator iter = data.begin();
	vector<Node>::reverse_iterator r_iter = data.rbegin();
	if(index <= mid)
	{
		advance(iter, index);
	}
	else if(index > mid)
	{
		advance(r_iter, len-index-1);
		iter=--(r_iter.base()); //Converting reverse iterator to forward iterator.
	}
	data.erase(iter);
}

/**
 * Insert a new node into the data vector at the
 * appropriate position to keep the vector sorted.
 */
void SortedVector::insert(const long value)
{
	vector<Node>::iterator iter;
	if(data.size() == 0)
	{
		data.push_back(value);
		return;
	}
	else
	{
		for(iter = data.begin(); iter != data.end() ; iter++)
		{
			//if value is less than or equal to some value in vector, then insert.
			if(value <= (*iter).get_value())
			{
				data.insert(iter, value);
				return;
			}
		}
		data.push_back(value);
		return;
	}
}

/**
 * Return the data node at the indexed position.
 * @param the index of the node.
 * @return a copy of the data node.
 */
Node SortedVector::at(const int index) const
{
	return data.at(index);
}
















//insert:
//vector<Node>::iterator iter;
//	int len = data.size();
//	//For the first element.
//	if(len == 0)
//	{
//		data.push_back(value);
//	}
//	else
//	{
//		for(iter = data.begin(); iter != data.end() ; iter++)
//		{
//			//For duplicate value
//			if(value == (*iter).get_value())
//			{
//				break;
//			}
//			//if value is less than some value in vector
//			else if(value < (*iter).get_value())
//			{
//				data.insert(iter, value);
//				break;
//			}
//			//if value is not less than any value, insert at last position, this is for last element
//			else if(iter == data.end() - 1)
//			{
//				data.push_back(value);
//				break;
//			}
//		}



