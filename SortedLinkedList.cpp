#include "SortedLinkedList.h"
#include<iostream>
using namespace std;
/***** Complete this class. *****/

int SortedLinkedList::ch = 0;
//int SortedLinkedList::ch = 0; 

void SortedLinkedList::insert(Node *node){
	
	Node* current;
    /* Special case for the head end */
    if (head == NULL || *(head) > *node)
    {
        node->next = head;
        head = node;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = head;
        while (current->next!=NULL &&
        		*node > *current->next )
        {
            current = current->next;
        }
        node->next = current->next;
        current->next = node;
    }
}


ostream& operator <<(ostream& outs, const SortedLinkedList& list){
	
	Node *current;	
	
	current=list.head;

//	outs<<list.head ;
int row=current->row;
int oldcol=current->col;
//int temp1=rowNext-row1;

int temp=0;

	while(current->next!=NULL){

outs<<setw(oldcol-temp);

if(current->name==""){
	outs<<*current;
}else{
	outs<<current->city;
}

if(row<current->next->row)
{
		for(int i=0;i<current->next->row-row;i++){
		outs<<endl;
		}
		oldcol=0;			
}
row=current->next->row;
temp=oldcol;
oldcol=current->next->col;
if(current->name !="")
{
	temp+=current->name.length() +current->state.length()+1;
	
}
current=current->next;



}


outs<<setw(oldcol-temp);
outs<<*current;

	return outs;
}
