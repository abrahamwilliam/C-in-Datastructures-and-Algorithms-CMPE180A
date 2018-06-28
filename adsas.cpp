#include "SortedLinkedList.h"
#include<iostream>
using namespace std;
/***** Complete this class. *****/

int SortedLinkedList::ch = 0;
//int SortedLinkedList::ch = 0; 

void SortedLinkedList::insert(Node *node){
	
	Node *temp,*temp2,*temp3,*temp4,*temp5,*temp6;
	
int t=0,c=0,k=0;
	temp=node;

	cout<<" the linked list inserting enters-----------------------------//////////////////////- "<<endl;
	
		
		while(temp6->next!=NULL &&ch>=2 ){
		
			cout<<" the sorted linked list entering the while first "<<endl;
			if(*temp6>*temp && ch>=2 ){
			//	temp3=temp;
			//	temp3->next=NULL;
			if(temp4->next==NULL) {
				temp3=temp;
				temp3->next=temp6;
				head=temp;
					c++;
				ch++;
			//	head->next=temp;
					cout<<" Inside while lopp before head////////////////************ "<<endl;
				break;
				
			}else{
					temp4->next=temp;
				temp->next=temp6;
				c++;
				ch++;
			//	head->next=temp;
					cout<<" the sorted linked list entering the whilesecond "<<endl;
				break;
			}
			
			}
				temp4=temp6;
			temp6=temp6->next;
				cout<<" inside while outside if 0000000000000000000000 "<<endl;
				ch++;
		}
	
	
	
	//=0;
	if(head==NULL){
			head=temp;
			temp6=head;
			head->next=NULL;
		cout<<" the sorted linked list befroe asdadsmdskl "<<endl;	
		k++;
		ch++;
	}else{
	if(head->next==NULL && *head>*temp){
			temp2=head;
			head=temp;
			head->next=temp2;
				cout<<" the sorted linked list entering the second "<<endl;
			t++;
			k++;
			ch++;
		}else if(head->next==NULL && !(*head>*temp)){
			head->next=temp;
			
				cout<<" the sorted linked list entering the second--second "<<endl;	
			t++;
			k++;
			ch++;
		}
		}
		
		cout<<ch<<endl;
	
		if(c==0 &&k==0){
				ch++;
			temp5=temp;
			temp5->next=NULL;
			head->next=temp5;
			cout<<" the sorted linked list entering the Last lopp after while "<<endl;
		}
		
		temp6=head;
		cout<<" adding done ------------------------------------****************************" <<endl;
			cout<<endl;	cout<<endl;
}

ostream& operator <<(ostream& outs, const SortedLinkedList& list){
	
	Node *temp;	
	
//	outs<<list.head ;
	temp=list.head;
	while(temp!=NULL){
		outs<<*temp;
		temp=temp->next;
	cout<<"printing "<<endl;	
	}
	
	
	return outs;
}
