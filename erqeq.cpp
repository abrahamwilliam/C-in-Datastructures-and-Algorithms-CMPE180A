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
	
	Node *temp;	
	
	int oldcol;
	int newcol;
	int coltemp;
//	outs<<list.head ;
int row1=temp->row;
int rowNext=temp->next->row;
int temp1=rowNext-row1;

newcol=temp->col;
	temp=list.head;
	while(temp!=NULL){



coltemp=newcol-oldcol-1;
//cout<<" coltemp "<<coltemp;
if(coltemp>0 ){
		for(int i=0;i<=coltemp;i++){
	cout<<" ";	
	}

}
outs<<*temp;

oldcol=newcol;
if(temp1>0){
	for(int i=0;i<=temp1;i++){
		cout<<endl;
	}
	oldcol=0;
}
coltemp=0;

	temp=temp->next;
	}

	return outs;
}
