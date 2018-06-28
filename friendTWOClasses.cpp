#include<iostream>
using namespace std;
class employee;
class boss{
	int s;
	public:
		boss(int a){
		s=a;	
		}
		
		friend void showslaray(boss b, employee e);
				

};

class employee{
	int s;
	public:
		employee(int a){
		s=a;	
		}
			friend void showslaray(boss b, employee e);
		
		
};

void showslaray(boss b, employee e){
int t;
t=b.s + e.s;
cout<<"total salary"<< t<<endl;
}

int main(){
	boss b(200);
	employee e(3000);
	showslaray(b,e);
}
