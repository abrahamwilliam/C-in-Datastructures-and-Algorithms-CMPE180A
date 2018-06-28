#include<iostream>
#include<string>
using namespace std;

struct node{
	
	int data;
	node *next;
	node *prev;
};

struct node *head=NULL;


void insertHeadNode(int d){
	
	node *temp;
	if(head==NULL){
		head= new node();
		head->data=d;
		head->next=NULL;
		head->prev=NULL;
	}else{
		temp=new node();
		temp->data=d;
		temp->next=head;
		temp->prev=NULL;
		head->prev=temp;
		head=temp;
		
	}
}

int main(){
	
	
}
