#include<iostream>
using namespace std;

struct node {
	
	int data;
	struct node *next;
};


struct node *start=NULL;

node* createNode(){
	
	node *temp;
	temp=new node();
	return temp;
	
}

void insertNode(){
	
	node *temp,*traverse;
	int n;
	cout<<"enter the value to to be added"<<endl;
	cin>>n;
	
	while(n!=-1){
	
	temp=createNode();
	temp->data=n;
	temp->next=NULL;
	
	if(start!=NULL){
		start=temp;
	}else{
		traverse=start;
		while(traverse->next!=NULL){
			
			traverse=traverse->next;
		}
		traverse->next=temp;	
	}
	
 cout<<"enter the values to be added secndly"<<endl;
cin>>n;
	
}
}


void printlist(){
	int n;
	node * temp;

	if(start!=NULL){
		cout<<"the vales are "<<n<<endl;
		start=start->next;
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
		case 2: printlist();
		break;
	
	//	case 3: reverseLinkedList();
	//	cout<<"length of the linked list is "<<l<<endl;
	//	break;
	
	}
		}while(option!=3);
	
	
	
}
