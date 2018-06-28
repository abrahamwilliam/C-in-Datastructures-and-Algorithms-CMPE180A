#include<iostream>
using namespace std;

class checkexception{
	
	public:
		
	int getmessage();
	 checkexception(int a);
	 private:
	 	int message;
};

checkexception::checkexception(int a){
	message=a;
}

int checkexception::getmessage(){
//	message=a;
	return message;
}

int main(){
	try{
	
	int n1,n2,d;
	cout<<"enter the First number to be divided"<<endl;
	cin>>n1;
	
	cout<<"enter the second number to be diided"<<endl;
	cin>>n2;
if(n2<=0) throw  checkexception(n2) ;	
    d=n1/n2;
    
    }
    
	catch(checkexception e){
				cout<<"u have entered value as"<<e.getmessage()<<" plesae enter correct value"<<endl;
	}
	
	
}
