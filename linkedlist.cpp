#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *p;
};

struct node *start=NULL;

node* createNode(){
	node *temp;
	temp=new node();
	return temp;
	
}

void printList(){
	node *t=start;
	
	while(t!=NULL){
			cout<<"the valueof the node is "<<t->data<<endl;
			t=t->p;
	}

}


void deleteNode(int n){
	node *temp,*sectemp;
	if(start->data==n){
		
		temp=start->p;
		start=NULL;
		start=temp;
		printList();
	}else{
		temp=start->p;
		while(temp->data!=n){
			temp=temp->p;
		}
		if(temp->p==NULL){
			temp->data=NULL;
				printList();
		}else{
		sectemp=temp->p;
		temp->data=NULL;
		temp->p=sectemp;	
		printList();
		}
		
		
	}
}


void lengthLinkedList( int &c){
//	int c;
	node *t;
	if(start->p!=NULL){
	t=start->p;
	c++;
	while(t!=NULL){
		c++;
		t=t->p;
	}
	cout<<"the length will be printed soon"<<endl;
	}
	
}

void insertNode(){
	
	node *a1;
	 node *t;
	int n;
	cout<<"enter the value to be added in the n  toolist"<<endl;
	cin>>n;
	
	while(n!=-1){
		
		t=createNode();
		t->data=n;
		t->p=NULL;
		
		
		if(start==NULL){
			start=t;
		//	t->p=NULL;
		}else{
			a1=start;
			while(a1->p!=NULL){
				a1=a1->p;
			}
			a1->p=t;
		}
		cout<<"enter the value to be added in the list"<<endl;
	cin>>n;
	}
	
	
	
}

int main(){
	int option,n,l;
	do{

	cout<<"enter the operation to be carried out"<<endl;
	cout<<"1 :Create List"<<endl;
    cout<<"2. Print List"<<endl;
cout<<"3. delete node"<<endl;
cout<<"4.length of linked list"<<endl;
cout<<"5. Exit "<<endl;
	cin>>option;
	
	switch(option){
		case 1: insertNode();
		break;
		case 2: printList();
		break;
			case 3:cout<<"enter the node to be deleted"<<endl;
			cin>>n;
			deleteNode( n); 
		break;
		case 4: lengthLinkedList(l);
		cout<<"length of the linked list is "<<l<<endl;
		break;
	
	}
		}while(option!=5);
	
}

