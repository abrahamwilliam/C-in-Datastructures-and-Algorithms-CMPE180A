#include<iostream>
using namespace std;

//abstact class we cannot create obj but we can create pointers
//pure virtual func donot have definitions but must be implemented in the derived classes or they have to declared as pure vurtual in derived classes also
class a{
	
	public :
		virtual void getname()=0;
};

class b:public a{
	
	public :
		void getname(){
			
			cout<<"the func in b"<<endl;
		}
};



int main(){
	a *a1;
	b b1;
	a1=&b1;
	a1->getname();
	
	
}
