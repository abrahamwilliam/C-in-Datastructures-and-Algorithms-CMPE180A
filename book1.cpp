
#include <iostream>
#include <vector>

//#include <algorithm>

using namespace std;

class Book {

private:
    string isbn;
    string last;
    string first;
    string title;
    string category;

    vector<Book> catalog;

public:
    Book();
    void GetBookByAurthor(string fname, vector<Book> b);
    void GetBookByCategory(string category, vector<Book> b);
    void GetBookByIsbn(string isbn, vector<Book> b);
    void RemoveBooks(string isbn, vector<Book> b);

    void addVectorBook();
    Book(string isbn, string last, string first, string title, string category);
    string getIsbn();
    string getLast();
    string getFirst();
    string getTitle();
    string getCategory();
    void AllBooks1(vector<Book> b);
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

void AllBooks1(vector<Book> bf)
{
    int size = bf.size();
    for (int i = 0; i < size; i++) {
        cout << "+ Inserted at index" << i << " Book{ISBN=" << bf.at(i).getIsbn() << " , last=" << bf.at(i).getLast() << " , first=" << bf.at(i).getFirst() << " , title=" << bf.at(i).getTitle() << " , category=" << bf.at(i).getCategory() << " }" << endl;
    }
}

void Book::addVectorBook()
{

    cout << catalog.size() << "the catalog size" << endl;
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

/*   

    int Book::AddBooks(string isbn,string last,string first,string title,string category){
     	
     	Book b(isbn,last,first,title,category1);
     	
    	catalog.push_back(b);
    
    Book f= catalog.at(0);
    cout<<"the vector element is "<<f<<endl;
    return 0;
	}
*/

void Book::GetBookByAurthor(string fname, vector<Book> b)
{

    cout << "inside the main app " << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;

    vector<Book> v;

    cout << "for sorting based on the aurthor first name" << endl;
    do {
        swap1 = false;
        for (int i = 0; i < (l - 1); i++) {
            if (b.at(i).getFirst() > b.at(i + 1).getFirst()) {
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

        if (b.at(mid).getFirst() == fname) {

            cout << "it added" << endl;
            int i = mid - 1;
            int j = i + 1;
            string aurthor = b.at(i).getFirst();
            string aurthor2 = b.at(j).getFirst();
            if (aurthor == aurthor2) {
                while (b.at(i).getFirst() == b.at(j).getFirst()) {
                    v.push_back(b.at(i));
                    v.push_back(b.at(j));
                    i++;
                    j++;
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

    cout << "the books are"
         << "v.size()" << v.size() << endl;
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout << "The book is " << i << " Book{ISBN=" << v.at(i).getIsbn() << " , last=" << v.at(i).getLast() << " , first=" << v.at(i).getFirst() << " , title=" << v.at(i).getTitle() << " , category=" << v.at(i).getCategory() << " }" << endl;
    }
}

void Book::GetBookByCategory(string category, vector<Book> b)
{
    cout << "inside the main app  2" << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;

    vector<Book> v;

    cout << "for sorting based on the category" << endl;
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

            cout << "it added" << endl;
            /*
    		cout<<" the Inserted at index" <<mid<<" Book{ISBN="<<b.at(mid).getIsbn()<<" , last="<<b.at(mid).getLast()<<" , first="<<b.at(mid).getFirst()<<
				" , title="<<b.at(mid).getTitle()<<" , category="<<b.at(mid).getCategory() << " }"<<endl;
			//	bin=true;
			*/

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
    }

    // for printing the book

    cout << "the books based on category are"
         << "v.size()" << v.size() << endl;
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout << "The book is " << i << " Book{ISBN=" << v.at(i).getIsbn() << " , last=" << v.at(i).getLast() << " , first=" << v.at(i).getFirst() << " , title=" << v.at(i).getTitle() << " , category=" << v.at(i).getCategory() << " }" << endl;
    }
}


void Book::GetBookByIsbn(string isbn, vector<Book> b)
{
    cout << "inside the main app  3" <<isbn << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;

    vector<Book> v;

    cout << "for sorting based on the ISBN  " <<b.size() << endl;
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


 int size = b.size();
    for (int i = 0; i < size; i++) {
        cout << "The book is " << i << " Book{ISBN=" << b.at(i).getIsbn() << " , last=" << b.at(i).getLast() << " , first=" << b.at(i).getFirst() 
		<< " , title=" << b.at(i).getTitle() << " , category=" << b.at(i).getCategory() << " }" << endl;
    }

    while (!bin && f < l) {

        int mid = (f + l-1) / 2;


bool  h=(b.at(mid).getIsbn()==isbn);
cout<<" th e isbn ib.at(mid).getIsbn()s----------------------- "<<b.at(mid).getIsbn()<<endl;
cout<<" th e isbn       -------------------------------------- "<<isbn<<endl;

        if (b.at(mid).getIsbn()==isbn) {

            cout << "it added" << endl;
            /*
    		cout<<" the Inserted at index" <<mid<<" Book{ISBN="<<b.at(mid).getIsbn()<<" , last="<<b.at(mid).getLast()<<" , first="<<b.at(mid).getFirst()<<
				" , title="<<b.at(mid).getTitle()<<" , category="<<b.at(mid).getCategory() << " }"<<endl;
			//	bin=true;
			*/

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
            cout<<" the grater loop--------"<<b.at(mid).getIsbn()<<endl;
        }
        else if (b.at(mid).getIsbn() < isbn) {
            f = mid + 1;
			cout<<" the leser loop--------"<<b.at(mid).getIsbn()<<endl;
            
        }
    }


    // for printing the book

    cout << "the books based on ISBN are for is "
         << "v.size()" << v.size() << endl;
    int size1 = v.size();
    for (int i = 0; i < size1; i++) {
        cout << "The book is " << i << " Book{ISBN=" << v.at(i).getIsbn() << " , last=" << v.at(i).getLast() << " , first=" << v.at(i).getFirst() << " , title=" << v.at(i).getTitle() << " , category=" << v.at(i).getCategory() << " }" << endl;
    }
}

//remove books
void Book::RemoveBooks(string isbn, vector<Book> b)
{
	    cout << "inside the main app  3" <<isbn << endl;
    int f = 0;
    int l = b.size();
    bool bin;
    Book temp;
    bool swap1;
int j=0;
    vector<Book> v;

    cout << "for sorting based on the ISBN  " <<b.size() << endl;
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

        int mid = (f + l) / 2;


bool  h=(b.at(mid).getIsbn()==isbn);
cout<<" th e isbn ib.at(mid).getIsbn()s----------------------- "<<b.at(mid).getIsbn()<<endl;
cout<<" th e isbn       -------------------------------------- "<<isbn<<endl;

        if (b.at(mid).getIsbn()==isbn) {

            cout << "it added" << endl;
            /*
    		cout<<" the Inserted at index" <<mid<<" Book{ISBN="<<b.at(mid).getIsbn()<<" , last="<<b.at(mid).getLast()<<" , first="<<b.at(mid).getFirst()<<
				" , title="<<b.at(mid).getTitle()<<" , category="<<b.at(mid).getCategory() << " }"<<endl;
			//	bin=true;
			*/
temp=b.at(mid);
j=mid;
            v.push_back(b.at(mid));
            bin = true;
            //	break;
        }
        else if (b.at(mid).getIsbn() > isbn) {
            l = mid - 1;
            cout<<" the grater loop--------"<<b.at(mid).getIsbn()<<endl;
        }
        else if (b.at(mid).getIsbn() < isbn) {
            f = mid + 1;
			cout<<" the leser loop--------"<<b.at(mid).getIsbn()<<endl;
            
        }
    }

//b.erase(std::remove(b.begin(), b.end(), temp), b.end());
b.erase (b.begin()+j-1);	
	
}

/**
     * Destructor.
     */
// ~Book();

