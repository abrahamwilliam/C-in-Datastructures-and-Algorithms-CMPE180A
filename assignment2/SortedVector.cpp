#include <iostream>
#include <iterator>
#include "SortedVector.h"

using namespace std;

SortedVector::SortedVector()
{
    Node::reset();
}

SortedVector::~SortedVector()
{
    Node::reset();
}

/***** Complete this file. *****/


bool SortedVector::check() const
{
    if (size() == 0) return true;

    vector<Node>::const_iterator it = begin();
    vector<Node>::const_iterator prev = it;

    it++;

    // Ensure that each node is greater than or equal to the previous node.
    while ((it != end()) && (*it >= *prev))
    {
        prev = it;
        it++;
    }

    return it == end();  // Good if reached the end.
}

bool SortedVector::check_reversed() const
{
    if (size() == 0) return true;

    vector<Node>::const_iterator it = begin();
    vector<Node>::const_iterator prev = it;

    it++;

    // Ensure that each node is less than or equal to the previous node.
    while ((it != end()) && (*it <= *prev))
    {
        prev = it;
        it++;
    }

    return it == end();  // Good if reached the end.
}


    void SortedVector::prepend(const long value){
    	vector<Node>::const_iterator it=begin();
    	vector<Node>::insert(it,Node(value));
    
  	
		
	}

    /**
     * Append a new node at the end of the vector.
     * @param value the new node's value.
     */
    void SortedVector::append(const long value){
    vector<Node>::push_back(Node(value));	
	}

    /**
     * Insert a new node into the vector at the
     * appropriate position to keep the vector sorted.
     * @param value the value of the node to insert.
     */
    void SortedVector::insert(const long value){
    	vector<Node>::const_iterator it=begin();
   
   while((it!=end()) && (value>it->get_value())){
   	it++;
      }
   vector<Node>::insert(it,Node(value));
    	
	}

    /**
     * Remove a node.
     * @param index the index of the node to remove.
     */
    void SortedVector::remove(const int index){
    	erase(begin()+index);
	
	}
    	
/*
   Node& SortedVector::operator[](const int index){
   	
   	vector<Node>::const_iterator it=begin();
   	int j=0;
   	
   	if(index==0){
   		return it;
	   }else{
	   	while((it!=end()) && (j!=index)){
	   		j++;
	   		it++;
		   }
		  return it; 
		   
	   }
   	
   }
   */
    /**
     * Reverse in place the order of the nodes of the vector.
     */
    void SortedVector::reverse(){
    
	/*	int a,j;
		vector<Node>::iterator it=begin();
		while(it!=end()){
				it++;
				j++;
		a=it->get_value();
		SortedVector::prepend(Node(a));
	SortedVector::remove(j);
		it++;
		}	
		
		*/
	 if (size() == 0) return;

    vector<Node>::const_iterator it = begin();
    it++;

    while(it != end())
    {
    		vector<Node>::insert(begin(), *it);
    		it++;
    		erase(it);
    }	
	
	}
