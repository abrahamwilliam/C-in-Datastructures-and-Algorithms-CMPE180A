#include "SortedLinkedList.h"
#include<iostream>
using namespace std;
/***** Complete this class. *****/

int SortedLinkedList::ch = 0;

void SortedLinkedList::insert(Node *node){
	
	Node *temp,*temp2,*temp3,*temp4,*temp5,*temp6=head;
	
int t=0,c=0,k=0;
	temp=node;
	cout<<" the linked list inserting enters "<<endl;
	
	//=0;
	if(head==NULL){
			head=temp;
			head->next=NULL;
		cout<<" the sorted linked list befroe asdadsmdskl "<<endl;	
		k++;
	}else{
	if(head->next==NULL && *head>*temp){
			temp2=head;
			head=temp;
			head->next=temp2;
				cout<<" the sorted linked list entering the second "<<endl;
			t++;
			k++;
		}else if(head->next==NULL && !(*head>*temp)){
			head->next=temp;
				cout<<" the sorted linked list entering the second--second "<<endl;	
			t++;
			k++;
		}
		}
		
		
		while(head->next!=NULL && t==0){
		
			cout<<" the sorted linked list entering the while first "<<endl;
			if(*head>*temp && t==0){
				temp3=temp;
				temp3->next=NULL;
				temp4->next=temp3;
				temp->next=head;
				c++;
					cout<<" the sorted linked list entering the whilesecond "<<endl;
				break;
			}
				temp4=head;
			head=head->next;
		}
		if(c==0 &&k==0){
			temp5=temp;
			temp5->next=NULL;
			head->next=temp5;
			cout<<" the sorted linked list entering the Last lopp after while "<<endl;
		}
}

ostream& operator <<(ostream& outs, const SortedLinkedList& list){
	
	Node *temp;	
	
	outs<<list.head ;
	temp=list.head;
	while(temp!=NULL){
		temp=temp->next;
		cout<<*temp<<endl;
	}
	
	
	return outs;
}
