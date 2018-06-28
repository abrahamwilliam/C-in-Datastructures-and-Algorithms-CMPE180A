#include<iostream>
using namespace std;

class father{
	
	int pm,pm1;
	
	public:
	int pocketmoneyfather(int c){
		
		pm=c;
		
		return pm;
	}
	
	father(int a){
		pm1=a;
			cout<<"father has given in constructor inheritance "<<pm1<<endl;
	}
	
	void monyFathergiven(){
		
		cout<<"father has given "<<pm<<endl;
	}
	
};

class mother{
int pm,pm1;
	
	public:
	int pocketmoneymother(int c){
		
		pm=c;
		return pm;
	}	
	
	mother(int a){
	 pm1=a;	
	 cout<<"mother has given in constructor inheritance "<<pm1<<endl;
	}
		void monyMothergiven(){
		
		cout<<"mother has given "<<pm<<endl;
	}
	
};


class child:public father,public mother{
	
	int total;
	int f2,constructtTotal;

//very very important for constructor inheritance
	public:
	child(int h, int f1, int m1):father(f1),mother(m1){
		
	f2=h;	
	
		
	}	
		
	void totalmoney( int f, int m){
		
		total=pocketmoneymother(m) +pocketmoneyfather(f);
		

		cout<<"total money inside the method "<<total<<endl;
	}
};


int main(){
	
	child c1(5000,6000,7000);
	
	c1.totalmoney(100,200);
	c1.monyFathergiven();
	c1.monyMothergiven();
	
}

