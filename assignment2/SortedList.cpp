#include <iostream>
#include <iterator>
#include "SortedList.h"

using namespace std;

SortedList::SortedList()
{
    Node::reset();
}

SortedList::~SortedList()
{
    Node::reset();
}



/***** Complete this file. *****/

bool SortedList::check() const
{
    if (size() == 0) return true;

    list<Node>::const_iterator it = begin();
    list<Node>::const_iterator prev = it;

    it++;

    // Ensure that each node is greater than or equal the previous node.
    while ((it != end()) && (*it >= *prev))
    {
        prev = it;
        it++;
    }

    return it == end();  // Good if reached the end.
}


bool SortedList::check_reversed() const
{
    if (size() == 0) return true;

    list<Node>::const_iterator it = begin();
    list<Node>::const_iterator prev = it;

    it++;

    // Ensure that each node is less than or equal to the previous node.
    while ((it != end()) && (*it <= *prev))
    {
        prev = it;
        it++;
    }

    return it == end();  // Good if reached the end.
}

void SortedList::insert(const long value)
{
    list<Node>::const_iterator it = begin();
    Node node(value);
	
	while ((it != end()) && (node>= *it ))
	{
		it++;
	}

	list<Node>::insert(it, node); 
}
  
  
   Node& SortedList::operator[](const int index){
   	
   	list<Node>::const_iterator it=begin();
   	for(int i=0; i<index; i++, ++it);
	return *it;

   }


   void SortedList::insert(const long value){
   list<Node>::const_iterator it=begin();
   
   while((it!=end()) && (value>it->get_value())){
   	it++;
      }
   insert(it,Node(value));
   	
 }
   
   
   void SortedList::prepend(const long value){
   	list<Node>::push_front(Node(value));
   }

    /**
     * Append a new node at the end of the list.
     * @param value the new node's value.
     */
    void SortedList::append(const long value){
    
	list<Node>::push_back(Node(value));	
	}
	
	
	void SortedList::remove(const int index){
		list<Node>::const_iterator it=begin();
    	advance(it, index);
	     erase(it);
    	/*
			int c=0;
    		for( it;it!=end();it++){
    			if(c=index){
    				list<Node>::erase(it);
				}else{
					
				}
				c++;
			}	
			*/
	}
	
	void SortedList::reverse(){
	//	list<Node>:: it=end();
	/*
	int a,j;
		list<Node>::iterator it=begin();
		while(it!=end()){
				it++;
				j++;
		a=it->get_value();
		prepend(Node(a));
		remove(j);
		it++;
		}
		*/
		if(list<Node>::empty() || list<Node>::size()==1){
			return;
		}else{
			list<Node>::iterator it=list<Node>::begin();
			it++;
			
			while(it!=list<Node>::end()){
				list<Node>::insert(list<Node>::begin(),*it);
				it++;
				list<Node>::erase(it);
			}
		}
	}
	
	
	
