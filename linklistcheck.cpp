#include<iostream>
using namespace std;

struct node{
	
	int data;
struct	node *ptr;

	
};

struct node  *head=NULL;

node* createNode(){
	
	node *temp;
	temp=new node();
	return temp;
}

void printList(){

node *temp;
temp=head;
while(temp->ptr!=NULL){
	
	cout<<"the value of the node is "<<temp->data<<endl;
	temp=temp->ptr;
	
}
	
}


void InsertNode(){
	
	node *temp,*traverse;
	int n;
	cout<<"enter the digits to be added "<<endl;
	cin>>n;
	
	while(n>0){
	
	temp=createNode();
	temp->data=n;
	temp->ptr=NULL;
	
	if(head==NULL){
		head=temp;
	}else{
		traverse=head;
		while(traverse->ptr!=NULL){
			traverse=traverse->ptr;
		}
		traverse->ptr=temp;
	}
	cout<<"enter the numbers to beassa added"<<endl;
	cin>>n;
	if (n==-1) break;
	}
}


int main(){
	
	int option, n;
do{
	cout<<"Enter the option to select"<<endl;
	cout<<" 1. insertNode "<<endl;
	cout<<" 2. print list"<<endl;
	cin>>option;


	switch(option){
		case 1:InsertNode();
		break;
		case 2:printList();
		break;
	}
}while(option!=3);


	
	
	
}

