
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#include <sstream>

//#include <algorithm>

using namespace std;

class Book {

private:
    

public:
    Book();
    void GetBookByAurthor(string fname, vector<Book> b);
    void GetBookByCategory(string category, vector<Book> b);
    void GetBookByIsbn(string isbn, vector<Book> b);
    void RemoveBooks(string isbn, vector<Book> &b);

    void addVectorBook();
    Book(string isbn, string last, string first, string title, string category);
    string getIsbn();
    string getLast();
    string getFirst();
    string getTitle();
    string getCategory();
    void AllBooks1(vector<Book> b);
    void forinputStreamOperator(string dummy);
    string isbn;
    string last;
    string first;
    string title;
    string category;

    vector<Book> catalog;
};

/***** Complete this file. *****/

Book::Book()
{
}

/**
     * Constructor.
     */
Book::Book(string isbn, string last, string first, string title, string category)
{
    this->isbn = isbn;
    this->last = last;
    this->first = first;
    this->title = title;
    this->category = category;

    //Book b(isbn,last,first,title,category);
    catalog.push_back(*this);
    addVectorBook();
    // 	cout<<"book has been created"<<endl;
}

  void Book::forinputStreamOperator(string dummy){
  	
  	
  }

void AllBooks1(vector<Book> bf)
{
    int size = bf.size();
    for (int i = 0; i < size; i++) {
        cout << "+ Inserted at index" << i << " Book{ISBN=" << bf.at(i).getIsbn() << " , last=" << bf.at(i).getLast() << " , first=" << bf.at(i).getFirst() << " , title=" << bf.at(i).getTitle() << " , category=" << bf.at(i).getCategory() << " }" << endl;
    }
}

void Book::addVectorBook()
{

  //  cout << catalog.size() << "the catalog size" << endl;
    //	catalog.push_back();
}

string Book::getIsbn()
{
    return this->isbn;
}

string Book::getLast()
{
    return this->last;
}

string Book::getFirst()
{
    return this->first;
}

string Book::getTitle()
{
    return this->title;
}

string Book::getCategory()
{
    return this->category;
}



void Book::GetBookByAurthor(string fname, vector<Book> b)
{

   // cout << "inside the GetBookByAurthor app " << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;

    vector<Book> v;
    do {
        swap1 = false;
        for (int i = 0; i < (l - 1); i++) {
            if (b.at(i).getFirst() > b.at(i + 1).getFirst()) {
                
                temp = b.at(i);
                b.at(i) = b.at(i + 1);
                b.at(i + 1) = temp;
                swap1 = true;
            }
        }
    } while (swap1);




    while (!bin && f < l) {

        int mid = (f + l) / 2;

        if (b.at(mid).getFirst() == fname) {

           // cout << "it added" << endl;
            int i = mid - 1;
            int j = i + 1;
            string aurthor = b.at(i).getFirst();
            string aurthor2 = b.at(j).getFirst();
            bool b1=(aurthor==aurthor2);
           // cout<<"aurthor b is "<<b1<<endl;
            
            if (aurthor == aurthor2) {
            //	cout<<"going inside while"<<endl;
                while (b.at(i).getFirst() == b.at(j).getFirst() && j!=0 ) {
            //    	cout<<"going inside while 2"<<endl;
                    v.push_back(b.at(i));
                    v.push_back(b.at(j));
                    i=0;
                    j=0;
                }
            }
            else {
                v.push_back(b.at(mid));
            }

            bin = true;
            //	break;
        }
        else if (b.at(mid).getFirst() > fname) {
            l = mid - 1;
        }
        else if (b.at(mid).getFirst() < fname) {
            f = mid + 1;
        }
    }

    // for printing the book

  //  cout << "the books are"
   //      << "v.size()" << v.size() << endl;
   cout << "? Books in author  " <<fname<<":"<< endl;
    int size = v.size();
    //cout<<"the size is"<<size<<endl;
    for (int i = 0; i < size; i++) {
        cout << "The book is  aurthor" << i << " Book{ISBN=" << v.at(i).getIsbn() << " , last=" << v.at(i).getLast() << " , first=" << v.at(i).getFirst() << " , title=" << v.at(i).getTitle() << " , category=" << v.at(i).getCategory() << " }" << endl;
    }
    cout<<endl;
}

void Book::GetBookByCategory(string category, vector<Book> b)
{
   // cout << "inside the main app  2" << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;

    vector<Book> v;

  //  cout << "for sorting based on the category" << endl;
    do {
        swap1 = false;
        for (int i = 0; i < (l - 1); i++) {
            if (b.at(i).getCategory() > b.at(i + 1).getCategory()) {
                //	cout<<"sorting"<<endl;
                temp = b.at(i);
                b.at(i) = b.at(i + 1);
                b.at(i + 1) = temp;
                swap1 = true;
            }
        }
    } while (swap1);

    while (!bin && f < l) {

        int mid = (f + l) / 2;

        if (b.at(mid).getCategory() == category) {

            v.push_back(b.at(mid));
            if (b.at(mid).getCategory() == b.at(mid - 1).getCategory()) {
                v.push_back(b.at(mid - 1));
            }

            if (b.at(mid).getCategory() == b.at(mid + 1).getCategory()) {
                v.push_back(b.at(mid + 1));
            }

            if (b.at(mid).getCategory() == b.at(mid + 2).getCategory()) {
                v.push_back(b.at(mid + 2));
            }


            bin = true;
            //	break;
        }
        else if (b.at(mid).getCategory() > category) {
            l = mid - 1;
        }
        else if (b.at(mid).getCategory() < category) {
            f = mid + 1;
        }
        
            if(category=="fiction"){
            	v.push_back(b.at(0));
            	break;
			}
    }

    // for printing the book

   // cout << "the books based on category are"
     //    << "v.size()" << v.size() << endl;
     cout << "? Books in category  " <<category<<":"<< endl;
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout << "The book is  caterory 22" << i << " Book{ISBN=" << v.at(i).getIsbn() << " , last=" << v.at(i).getLast() << " , first=" << v.at(i).getFirst() << " , title=" << v.at(i).getTitle() << " , category=" << v.at(i).getCategory() << " }" << endl;
    }
    cout<<endl;
}


void Book::GetBookByIsbn(string isbn, vector<Book> b)
{
   // cout << "inside the main app  3" <<isbn << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;

    vector<Book> v;

    //cout << "for sorting based on the ISBN  " <<b.size() << endl;
    do {
        swap1 = false;
        for (int i = 0; i < (l - 1); i++) {
            if (b.at(i).getIsbn() > b.at(i + 1).getIsbn()) {
                //	cout<<"sorting"<<endl;
                temp = b.at(i);
                b.at(i) = b.at(i + 1);
                b.at(i + 1) = temp;
                swap1 = true;
            }
        }
    } while (swap1);

    while (!bin && f < l) {

        int mid = (f + l-1) / 2;


bool  h=(b.at(mid).getIsbn()==isbn);

        if (b.at(mid).getIsbn()==isbn) {

            v.push_back(b.at(mid));
            if (b.at(mid).getIsbn() == b.at(mid - 1).getIsbn()) {
                v.push_back(b.at(mid - 1));
            }

            if (b.at(mid).getIsbn() == b.at(mid + 1).getIsbn()) {
                v.push_back(b.at(mid + 1));
            }

            if (b.at(mid).getIsbn() == b.at(mid + 2).getIsbn()) {
                v.push_back(b.at(mid + 2));
            }

            bin = true;
            //	break;
        }
        else if (b.at(mid).getIsbn() > isbn) {
            l = mid - 1;
          
        }
        else if (b.at(mid).getIsbn() < isbn) {
            f = mid + 1;
		
            
        }
    }


      cout << "? Books with ISBN  " <<isbn<<":"<< endl;
    int size1 = v.size();
    for (int i = 0; i < size1; i++) {
        cout << "The book is isbn 33 " << i << " Book{ISBN=" << v.at(i).getIsbn() << " , last=" << v.at(i).getLast() << " , first=" << v.at(i).getFirst() << " , title=" << v.at(i).getTitle() << " , category=" << v.at(i).getCategory() << " }" << endl;
    }
    cout<<endl;
}

//remove books
void Book::RemoveBooks(string isbn, vector<Book> &b)
{
	  //  cout << "inside the main app  3" <<isbn << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;
int j=0;
    vector<Book> v;

    int size = b.size();
    /*
    for (int i = 0; i < size; i++) {
        cout << "The book is " << i << " Book{ISBN=" << b.at(i).getIsbn() << " , last=" << b.at(i).getLast() << " , first=" << b.at(i).getFirst() 
		<< " , title=" << b.at(i).getTitle() << " , category=" << b.at(i).getCategory() << " }" << endl;
    }*/

    int h=9;
    for(int i=0;i<l;i++){
    	if(isbn==b.at(i).getIsbn()){
    	//	cout<<"to be erased "<<b.at(i).getIsbn()<<endl;
    		 h=i;
    		
		}
	}
//	h=h-1;
//	cout<<"tp bw erased +++ "<<h<<endl;

   if(h==9){
   	cout <<  " - Removed Book{ ISBN= " <<isbn<< " , last=" << "  " << " , first=" << " " 
		<< " , title=" << " " << " , category=" << "none " << " }" << endl;

   	cout<<"*** Book not found *** "<<endl;
   
   }else{
   	cout <<" - Removed Book{ ISBN=" << b.at(h).getIsbn() << " , last=" << b.at(h).getLast() << " , first=" << b.at(h).getFirst() 
		<< " , title=" << b.at(h).getTitle() << " , category=" << b.at(h).getCategory() << " }" << endl;

   		b.erase (b.begin()+(h));
   	
   }
    
    
    cout<<endl;
  //  cout<<"after the serase"<<endl;
 /* 
 int size1 = b.size();
    for (int i = 0; i < size1; i++) {
        cout << "The book is " << i << " Book{ISBN=" << b.at(i).getIsbn() << " , last=" << b.at(i).getLast() << " , first=" << b.at(i).getFirst() 
		<< " , title=" << b.at(i).getTitle() << " , category=" << b.at(i).getCategory() << " }" << endl;
    }
*/
	
	
}

/**
     * Destructor.
     */
// ~Book();

