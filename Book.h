#ifndef BOOK_H_
#define BOOK_H_
#include<iostream>

#include <vector>
using namespace std;


/***** Complete this file. *****/

/**
 * The Book class.
 */
class Book
{
	
	private:
	string isbn;
	 string last;
	  string first;
	   string title;
	   string category;
	   
     vector<Book> catalog;
public:
   
    Book();

   
    Book(string isbn,string last,string first,string title,string category);

   
};



#endif //EMPLOYEE_H_ 
