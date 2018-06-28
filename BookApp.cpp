#include "Book.cpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

/***** Complete this file. *****/
void AllBooks(vector<Book> bf);
ifstream& operator>>( ifstream &in, Book &b);

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
    int i=0,j=0;
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
        
        if(dummy!=" ")
{

        if (dummy == "+") {

/*
            getline(input, isbn, ',');
            getline(input, last, ',');
            getline(input, first, ',');
            getline(input, title, ',');
            getline(input, category, '\n');

*/


Book b2;
      while (input.good()) {

    //    getline(input, dummy, ' ');
        
        input>>b2;
        
books.push_back(b2);
if(books.size()>1){
	
	bool b=false;
	for(int i=0;i<books.size();i++){
		if(books.at(i).getIsbn()==isbn){
			  cout << "+ Inserted at index" << i << " Book{ISBN=" << books.at(i).getIsbn() << " , last=" << books.at(i).getLast() << " , first=" << books.at(i).getFirst() << " , title=" << books.at(i).getTitle() << " , category=" << books.at(i).getCategory() << " }" << endl;
   
			cout<<" *** Duplicate ISDN *** "<<endl;
			cout<<endl;
			b=true;
		//	break;
		}
	}
		if(!b){
		//	Book b2(isbn, first, last, title, category);
	//  books.push_back(b2);
	  	cout<<"+ Inserted at index" <<i<<" Book{ISBN="<<b2.getIsbn()<<" , last="<<b2.getLast()<<" , first="<<b2.getFirst()<<
				" , title="<<b2.getTitle()<<" , category="<<b2.getCategory() << " }"<<endl;
				cout<<endl;
		}

}else{
	
	// Book b2(isbn, first, last, title, category);
	//  books.push_back(b2);
	  	cout<<"+ Inserted at index" <<i<<" Book{ISBN="<<b2.getIsbn()<<" , last="<<b2.getLast()<<" , first="<<b2.getFirst()<<
				" , title="<<b2.getTitle()<<" , category="<<b2.getCategory() << " }"<<endl;
				cout<<endl;
}
  
            i++;
           

           
        }
        }else if (dummy == "?") {
            getline(input, firstchar, '=');
            getline(input, secondchar, '\n');

           
            if (firstchar == "author") {
                Book b2;
             
              b2.GetBookByAurthor(secondchar, books);
            }else if(firstchar == "category"){
            	 Book b3;
           
              b3.GetBookByCategory(secondchar, books);
            	
			}else if(firstchar == "isbn") {
                Book b2;
            
               b2.GetBookByIsbn(secondchar, books);
            }
        }
        else if (dummy == "-" || dummy == "$") {
            getline(input, firstchar, '\n');

          
            
            if(dummy == "-"){
            	Book b2;
            	b2.RemoveBooks(firstchar,books);
            
			}else if( dummy == "$"){
				cout<<" $ *** Invalid command *** "<<endl;
				cout<<endl;
			}
			
        }
        else {
            cout << endl;
            cout << endl;
            cout << "? All books in the catalog: " << endl;
        
            AllBooks(books);
            getline(input, dummy2, '\n');
            //cout<<dummy2<<endl;
            if(dummy2!=" " && j==0){
            
           string delimiter = "=";
         Book b2;

           	string token = dummy2.substr(7, dummy2.find(delimiter));
          
             
              b2.GetBookByAurthor(token, books);
            j++;
			}
           
        }
    }else{
    	 getline(input, dummy2, ' ');
    	// cout<<dummy2<<"inside "<<endl;
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


ifstream& operator>>( ifstream &in, Book &b){
		
	 string line;
    if (!getline(in, line))
    {
        // error reporting and exit goes here...
    }

cout<<"the line is"<<line<<endl;
    // replace all ';' to ' '
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ','){
        	line[i] = ' ';
		}
            
            
           
    }
 cout<<"the line is "<<line<<endl;

    istringstream iss(line);
    string tmp;
    if (iss >> tmp >>b.isbn>>b.last>>b.first>>b.title>>b.category)
    {
      
    }

in>>tmp>>b.isbn>>b.first>>b.last>>b.title>>b.category;

//books.push_back(b);

    return in;

}


void AllBooks(vector<Book> bf)
{
    int size = bf.size();
    for (int i = 0; i < size; i++) {
        cout << "+ Inserted at index" << i << " Book{ISBN=" << bf.at(i).getIsbn() << " , last=" << bf.at(i).getLast() << " , first=" << bf.at(i).getFirst() << " , title=" << bf.at(i).getTitle() << " , category=" << bf.at(i).getCategory() << " }" << endl;
    }
    cout<<endl;
}
