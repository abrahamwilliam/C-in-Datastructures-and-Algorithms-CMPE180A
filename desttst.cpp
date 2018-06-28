#include<iostream>
#include<string>
using namespace std;


class destruc{
	
	private:
	
	public:
		destruc();
		destruc(destruc& d);
		
		destruc(int a,string s);
		destruc& createone(int a,string s);
	~destruc();
	destruc& operator=( destruc &d);
		int id ;
		string name;
		
};

destruc& destruc::operator=( destruc &d){
	
	cout<<"overaloaded assignmenr called "<<endl;
	
	if(this==&d){
		return *this;
	}
	
	this->name=d.name;
	this->id=d.id;
//	cout<<"inside the copy constructor "<<endl;	
}

destruc::destruc(){
cout<<"there is no value "<<endl;		
}

destruc::destruc(int a, string s){
		name=s;
		id=a;
		cout<<"there is value "<<endl;
}


destruc::destruc(destruc& d){
	cout<<"inside the copy constructor "<<this<<endl;
	
}


destruc& destruc::createone(int a,string s){
		
string h=s;
cout<<"the value is " <<h<<endl;;
return *this;
		
}

 

destruc::~destruc(){
	cout<<"inside the destructor "<<this<<endl; 
	
}

int main(){
	destruc d(1, "abraham");
	d.createone(3,"williams");
	
	destruc d2;
	d2=d;
	destruc d3;
	d3=d;
	
	cout<<d2.name<<endl;
	cout<<d3.name<<endl;
	destruc d4(d);
//	d=d2=d3;
}
