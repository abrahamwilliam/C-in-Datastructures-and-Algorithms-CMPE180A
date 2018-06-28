#include<iostream>
using namespace std;


class student{
	
	private:
		int id;
		string sname;
		string classnm;
		
	public:
		student(){
			
		}
		
		
		student(int id,string sname, string classnm ){
			id=id;
			sname=sname;
			classnm=classnm;
		}
		// student studentconstructor(int id,string sname, string classnm  );
friend ostream &operator<<(ostream &output, student &s){
			 	
	output<<"id  is"<<s.id<<" name  is"<<s.sname<<" classroom  is"<<s.classnm<<endl;
		return output;
			 }
			 
	friend istream &operator>>(istream &input, student &s);
	
	};
	
		 istream &operator>>(istream &input, student &s){
		int f;	 	
	input>>f>>s.id>>s.sname>>s.classnm;
		return input;
			 }
		
	
		
			 
			 int main(){
			 	student s1(1,"Abraham","A");
			 		student s2(2,"William","B"),s3;
			 	cout<<"Student 1"<<s1<<endl;
			 	cout<<"enter the details of student"<<endl;
			 	cin>>s3;
			 	cout<<"studnet s2"<<s2<< endl;
			 	cout<<"student s3"<<s3<<endl;
			 	
			 	
			 }
