#include<iostream>
#include<vector>
using namespace std;

class Book
{
	
	private:
	
	   
     vector<Book> catalog;
public:
   string isbn;
	 string last;
	  string first;
	   string title;
   string category;
   
    Book(){
    isbn=" ";
	last= " ";
	   first= " ";
	   title= " ";
	  category= " ";	
	};

   


   friend istream &operator>>(istream &in, Book &b);
    Book(string isbn,string last,string first,string title,string category){
   	isbn=isbn;
   	last=last;
   	first=first;
   	title=title;
   	category=category;
   	
   }

   
};
