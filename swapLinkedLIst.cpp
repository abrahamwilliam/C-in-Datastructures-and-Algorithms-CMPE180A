#include<iostream>
using namespace std;

struct node {
	
	int data;
	node *next;
};

struct node  *start=NULL;

node* createNode(){
	node *temp;
	temp=new node();
	return temp;
}

void insertnode(){
node *temp;
node *traverse;
int n;

cout<<"enter the value to be added in 1  1  "<<endl;
cin>>n;
while(n!=-1){

temp=createNode();
temp->data=n;
temp->next=NULL;

	if(start==NULL){
		start=temp;
	}else{
		traverse=start;
		while(traverse->next!=NULL){
			traverse=traverse->next;
			
		}
		
		traverse->next=temp;
		
		
	}
cout<<"enter the value to be added in 222 "<<endl;
cin>>n;
	
}
	


}


void printLinkedList(){
	node *t;
	
		t=start->next;
		while(t!=NULL){
				cout<<"the values are"<<t->data<<endl;
				t=t->next;
		}
	
	
	
}


int main(){
	
	int option,n;
	cout<<"enter the operation to be done"<<endl;
	cout<<"1:create List"<<endl;
	cout<<"2.print list"<<endl;
	cout<<"3.Exit"<<endl;
	cin>>option;
	
	do{
	
	switch(option){
		case 1:
		insertnode();
		
		break;
		case 2:printLinkedList();
		break;
	}
}while(option!=3);

}



