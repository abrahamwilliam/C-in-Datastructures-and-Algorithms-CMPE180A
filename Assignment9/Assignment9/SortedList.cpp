#include <iostream>
#include <iterator>
#include <algorithm>
#include "SortedList.h"

using namespace std;

/**
 * Defaut constructor.
 * Reset the global Node counters.
 */
SortedList::SortedList()
{
    Node::reset();
}

/**
 * Destructor.
 * Reset the global Node counters.
 */
SortedList::~SortedList()
{
    Node::reset();
}

/**
 * @return the size of the data list.
 */
int SortedList::size() const { return data.size(); }

/**
 * Check that the data is sorted.
 * @return true if sorted, false if not.
 */
bool SortedList::check()
{
    if (data.size() == 0) return true;

    list<Node>::iterator it = data.begin();
    list<Node>::iterator prev = it;

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
 * Insert a new node at the beginning of the data list.
 * @param value the new node's value.
 */
void SortedList::prepend(const long value)
{
	data.push_front(value);
}

/**
 * Append a new node at the end of the data list.
 * @param value the new node's value.
 */
void SortedList::append(const long value)
{
	data.push_back(value);
}

/**
 * Remove a node.
 * @param index the index of the node to remove.
 */
void SortedList::remove(const int index)
{
	int len = data.size();
	int mid = data.size()/2;
	list<Node>::iterator iter = data.begin();
	list<Node>::reverse_iterator r_iter = data.rbegin();
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
 * Insert a new node into the data list at the
 * appropriate position to keep the list sorted.
 */
void SortedList::insert(const long value)
{
	list<Node>::iterator iter;
	//For the first element.
	if(data.size() == 0)
	{
		data.push_back(value);
		return;
	}
	else
	{
		for(iter = data.begin(); iter != data.end() ; iter++)
		{
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
Node SortedList::at(const int index)
{
	int len = data.size();
	int mid = data.size()/2;
	list<Node>::iterator iter = data.begin();
	list<Node>::reverse_iterator r_iter = data.rbegin();
	if(index <= mid)
	{
		advance(iter, index);
	}
	else if(index > mid)
	{
		advance(r_iter,len-index-1);
		return *r_iter;
	}
	return *iter;
}






















//insert:
//list<Node>::iterator iter;
//		int len = data.size();
//		//For the first element.
//		if(len == 0)
//		{
//			data.push_back(value);
//		}
//		else
//		{
//			int i = 0;
//			for(iter = data.begin(); iter != data.end() ; iter++, i++)
//			{
//				//For duplicate value
//				if(value == (*iter).get_value())
//				{
//					break;
//				}
//				//if value is less than some value in list
//				else if(value < (*iter).get_value())
//				{
//					data.insert(iter, value);
//					break;
//				}
//
//				//if value is not less than any value, insert at last position, this is for last element
//				else if(i == data.size()-1)
//				//else if(iter == data.end()-1)
//				{
//					data.push_back(value);
//					break;
//				}
//
//			}
//		}


/*int mid=data.size()/2;
list<Node>::iterator iter = data.begin();
list<Node>::reverse_iterator r_iter = data.rbegin();
if(data.size()==0)
{
	data.push_back(value);
	return;
}
for(iter = data.begin(),r_iter = data.rbegin();(*r_iter).get_value()<=(*iter).get_value();iter++,r_iter++)
{

	if(value == (*iter).get_value())
					{
						return;
					}
					//if value is less than some value in list
					if(value < (*iter).get_value())
					{
						data.insert(iter, value);
						return;
					}
					if(value == (*r_iter).get_value())
											{
												return;
											}
											//if value is less than some value in list
											if(value > (*r_iter).get_value())
											{
												data.insert(iter, value);
												return;
											}
}
data.push_back(value);*/
