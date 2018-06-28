#include<iostream>
using namespace std;

struct node{
	int data;
struct node* nxt;	
};

struct node *head=NULL;

node* createNode(){
	node *temp;
	temp=new node();
	return temp;
}

void AddElement(){
	
	node *temp,*r;
	int t;
	cout<<"Enter the element to add to the node"<<endl;
	cin>>t;
	while(t!=-1){
		
		temp=createNode();
		temp->data=t;
		temp->nxt=NULL;
		
		if(head==NULL){
			head=temp;
			
		}else{
			
			r=head;
			while(r->nxt!=NULL){
				r=r->nxt;
			}
			
			r->nxt=temp;
		}
		
		cout<<"Enter the Element to add in the node"<<endl;
		cin>>t;
	}
}


void printElement(){
	
	node *t;
	t=head;
	while(t!=NULL){
		
		cout<<"the value is "<<t->data<<endl;
		t=t->nxt;
	}
}

void searchElement(int a){
	
	
	node *temp;int s;bool f;
	temp=head;
	while(temp!=NULL){
		s=temp->data;
		if(s==a){
			cout<<"Element has been found"<<endl;
			f=true;
		}
		temp=temp->nxt;
	}
	
	if(!f){cout<<"element is not there in list"<<endl;
	}
}

void InsertAtBeginning(int i){
	
	node *t;
	t=createNode();
	t->data=i;
//	t->nxt=head;

node *temp;
temp=head;
	head=t;
	head->nxt=temp;
		printElement();
}

void InsertAfertheElement(int ins,int af){
	node *temp,*temp1,*temp2;
	int s;
	temp=head;
	while(temp!=NULL){
		s=temp->data;
		if(s==ins){
				temp2=temp->nxt;
			temp1=createNode();
			temp1->data=af;
				temp->nxt=temp1;
			
		
			temp1->nxt=temp2;
		break;
		}else{
			temp=temp->nxt;
		}
	}
	
		printElement();
}

void reverseList(){
	node *next,*prev,*curr;

while(curr!=NULL){
curr=head;
next=curr->nxt;

curr->nxt=prev;

prev=curr;
curr=next;

}
head=prev;
//	cout<<"Data after head is test "<<f<<endl;
}


int main(){
	
	int t,s,i,ins,af;
	
	
	do{
		cout<<"Enter thr options to choose"<<endl;
	cin>>t;
	
		switch(t){
		case 1:AddElement();
		break;
	
		case 2:printElement();
		break;
		
		case 3:cout<<"Enter the elemtn to search"<<endl;
		cin>>s;
		searchElement(s);
		break;
		
		case 4:cout<<"insert at the beginning"<<endl;
		cin>>i;
		InsertAtBeginning(i);
		break;
		
		case 5:cout<<"Insert aftr an Element"<<endl;
		cin>>ins>>af;
		InsertAfertheElement(ins,af);
		
		case 6:reverseList();
		break;
		
		}
		
		
	}while(t<5);
	
}
