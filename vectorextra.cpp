#include<iostream>
#include<vector>
using namespace std;


class book{
	

	
	
	public:
			int a;
			
			friend ostream &operator<<(ostream& os,const book& b){
					os<<"thevalues ijnnn are"<<b.a<<endl;
	return os;
}
		
		book(){
				cout<<"inside the constructor "<<endl;
		}
		
		book(const book& b){
			
          a=b.a;	
		  
		  cout<<"inside the copyy constructor"<<a<<endl;		
		}
		
		
			book& operator=(const book& b){
			
          a=b.a;	
		  
		  cout<<"inside the ASSIGNMENT OPERATOr"<<a<<endl;		
		}
		
		book(int d){
			a=d;
			cout<<"inside the constructor arguments "<<this->a<<endl;
		}
		
		~book(){
			cout<<"inside the destructor "<<this->a<<endl;

		}
		
		
};

//ostream& operator<<(ostream& os, book& b){




int main(){
	
	book *k;
	k=new book[6];
	
	cout<<endl;
	
	
	for(int i=0;i<6;i++){
		int v=i*10;
	book b(v);	
	}
	
	vector<book*> a;
	a.reserve(3);
for(int i=0;i<6;i++){
//	book b(i*10);
	a.push_back(k);
	k++;
}

cout<<"next stage transitionng"<<endl;


for(int i=0;i<6;i++){
//	book b=a.at(i);
	cout<<"the values are "<<* 
	a.at(i)<<endl;
	
}

	cout<<endl;
	book c(11);
		book F(22);
//	F=a.at(2)=c;
	
	
}

