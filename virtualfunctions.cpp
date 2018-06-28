#include<iostream>
using namespace std;

class a{
	
	int a1;
	
	public:
		a(){
			
			cout<<"object is created"<<endl;
		}
		
		void display(){
			
			cout<<"object is created in a "<<endl;
		}
};

 class b:virtual public a{
		public:	
		b(int a){
			
			cout<<"object is created in b "<<a<<endl;
		}
	
};

 class c:virtual public a{
	public:	
		c(int a){
			
			cout<<"object is created in c "<<a <<endl;
		}
};

  class d:public c, public b{
		public:	
		d(int a1, int b1, int c1):b(b1),c(c1){
			
			cout<<"object is created in d  "<< a1<<endl;
		}
	
};

int main(){
	
	d s(1,2,3);
	s.display();
}
