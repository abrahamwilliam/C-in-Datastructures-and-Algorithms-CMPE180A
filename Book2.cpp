#include<iostream>
#include<vector>
#include "book2.h"
#include <fstream>
using namespace std;
#include <sstream>

 ifstream& operator>>( ifstream &in, Book &b){
		
	 string line;
    if (!getline(in, line))
    {
        // error reporting and exit goes here...
    }

cout<<"the line is"<<line<<endl;

  getline(in, isbn, ',');
            getline(in, last, ',');
            getline(in, first, ',');
            getline(in, title, ',');
            getline(in, category, '\n');
    // replace all ';' to ' '
  
  /*  for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ',')
            line[i] = ' ';
    }*/

cout<<line<<endl;

    istringstream iss(line);
    string tmp;
    string tmep;
    if (iss >> tmp >> b.isbn>>b.last>>b.first>>b.title>>b.category)
    {
      
    }

in>>tmep>>isbn>>b.last>>b.first>>b.title>>b.category;
 cout<<"b first <<" <<isbn<<endl;
	

    return in;

}

int main(){
	string dummy;
	ifstream input;
    input.open("C:\\Users\\lenovo\\Desktop\\commands.in");
    if (input.fail()) {
        cout << "Failed to open " << endl;
        return -1;
    }
    
    Book b;
      while (input.good()) {

        getline(input, dummy, ' ');
        
        input>>b;
       
        //cout<< "dummy is"<<dummy<<endl;
       // cout<<"book is "<<b<<endl;
        
    }
    
}
 
