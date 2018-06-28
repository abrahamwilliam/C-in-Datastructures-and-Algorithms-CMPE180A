#include "book1.cpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

/***** Complete this file. *****/
void AllBooks(vector<Book> bf);

// Status codes.
//enum class StatusCode {OK, DUPLICATE, NOT_FOUND, INVALID_COMMAND};

int main()
{
    // Open the input file.
    ifstream input;
    input.open("C:\\Users\\lenovo\\Desktop\\commands.in");
    if (input.fail()) {
        cout << "Failed to open " << endl;
        return -1;
    }
    vector<Book> books;
    int i;
    string dummy;
    string dummy2;
    string isbn;
    string last;
    string first;
    string title;
    string category;

    string firstchar;
    string secondchar; //string category;

    // book catalog

    //  char command;
    //  input >> command;  // read the first command

    while (input.good()) {

        getline(input, dummy, ' ');
        //	cout<<"dummy "<<dummy<<endl;

        if (dummy == "+") {

            getline(input, isbn, ',');
            getline(input, last, ',');
            getline(input, first, ',');
            getline(input, title, ',');
            getline(input, category, '\n');

            Book b2(isbn, first, last, title, category);
            /*
			cout<<"+ Inserted at index" <<i<<" Book{ISBN="<<b2.getIsbn()<<" , last="<<b2.getLast()<<" , first="<<b2.getFirst()<<
				" , title="<<b2.getTitle()<<" , category="<<b2.getCategory() << " }"<<endl;
			*/
            books.push_back(b2);
            i++;
            if (i >= 6) {
                // Book b3;
                //	b2.AllBooks(books);
            }

            // b.AddBooks(isbn,first,last,title,category);
        }
        else if (dummy == "?") {
            getline(input, firstchar, '=');
            getline(input, secondchar, '\n');

            cout << "firstchar " << firstchar << endl;
            cout << "secondchar " << secondchar << endl;
            if (firstchar == "author") {
                Book b2;
                cout << "coming inside the aurthor " << endl;
               b2.GetBookByAurthor(secondchar, books);
            }else if(firstchar == "category"){
            	 Book b3;
                cout << "coming inside the category " << endl;
              b3.GetBookByCategory(secondchar, books);
            	
			}else if(firstchar == "isbn") {
                Book b2;
                cout << "coming inside the isbn " << endl;
               b2.GetBookByIsbn(secondchar, books);
            }
            

            
        }
        else if (dummy == "-" || dummy == "$") {
            getline(input, firstchar, '\n');

            cout << "firstchar " << firstchar << endl;
            
            if(dummy == "-"){
            	Book b2;
            	b2.RemoveBooks(firstchar,books);
            //	vec.erase(remove(vec.begin(), vec.end(), 8), vec.end());
			}
        }
        else {
            cout << endl;
            cout << endl;
            cout << "? All books in the catalog: " << endl;
           
            //	cout<<"category "<<books.size()<<endl;

            AllBooks(books);
            getline(input, dummy2, '\n');
            /*
			for(int i=0;i<books.size();i++){
			Book b2;	
			b2=books.at(i);	
				cout<<" Book{ISBN="<<b2.getIsbn()<<" , last="<<b2.getLast()<<" , first="<<b2.getFirst()<<
				" , title="<<b2.getTitle()<<" , category="<<b2.getCategory()<< " }" <<endl;
			
			}
				*/
        }
    }

    input.close();
    /**
     * Loop to read commands until the end of file.
     */
    while (!input.fail()) {
        //  cout << endl << "command" << " ";

        /*** Complete this main. *****/
    }

    return 0;
}

void AllBooks(vector<Book> bf)
{
    int size = bf.size();
    for (int i = 0; i < size; i++) {
        cout << "+ Inserted at index" << i << " Book{ISBN=" << bf.at(i).getIsbn() << " , last=" << bf.at(i).getLast() << " , first=" << bf.at(i).getFirst() << " , title=" << bf.at(i).getTitle() << " , category=" << bf.at(i).getCategory() << " }" << endl;
    }
}
