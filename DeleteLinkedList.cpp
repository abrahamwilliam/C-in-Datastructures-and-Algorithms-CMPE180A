#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;

node* createNode(){
	
	node *temp;
	temp=new node();
	return temp;
	
}

void deleteNode(int n){
	node *temp,*sectemp;
	if(start->data=n){
		
		temp=start->next;
		start=NULL;
		start=temp;
		printlist();
	}else{
		temp=start->next;
		while(temp->data!=n){
			temp=temp->next;
		}
		if(temp->next==NULL){
			temp->data=NULL;
		}else{
		sectemp=temp->next;
		temp->data=NULL;
		temp->next=sectemp;	
		}
		
		
	}
}

void insertNode(){
  
  node *transient,*temp;
  int n;
  
   cout<<"enter the values to be added in the list"<<endl;
  cin>>n;
  while(n!=-1){
  
  
  temp=createNode();
  temp->data=n;
 temp->next=NULL;
  
  if(start==NULL){
  	start=temp;
  	
  }else{
  	transient=start;
  	while(transient->next!=NULL){
  	transient=transient->next;
	  }
	  transient->next=temp;
	
  }
  	 cout<<"enter the values to be added in the list"<<endl;
  cin>>n;
  	
  }
}

void printlist(){
	node *t;
	if(start!=NULL){
		t=start;
	//	t=start->next;
		while(t->next!=NULL){
			cout<<"the values of the list are "<<t->data<<endl;
			t=t->next;
		}
		
		
	}
}

int main(){
	
	int option,n;
	cout<<"enter the options from below"<<endl;
	cout<<"1.create list"<<endl;
	cout<<"2.Print list"<<endl;
	cout<<"3.delete node"<<endl;
	cout<<"4.exit"<<endl;
	cin>>option;
	do{
	switch(option){
		case 1:insertNode();
		break;
	case 2:printlist();
	break;
	case 3:cout<<"enter the node to be delted"<<endl;
	cin>>n;
	deleteNode(n);
	}
	
}while(option!=4);
	
}

