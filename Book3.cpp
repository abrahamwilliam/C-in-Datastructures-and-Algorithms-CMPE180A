#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include "Book.h"

using namespace std;

Book::Book()
    : isbn(""), last(""), first(""), title(""), 
      category(Category::NONE)
{}

Book::Book(string isbn, string last, string first, string title,Category category)
    : isbn(isbn), last(last), first(first), title(title), 
      category(category)
{}

Book::~Book()
{}

string Book::get_isbn()  const { return isbn; }
string Book::get_last()  const { return last; }
string Book::get_first() const { return first; }
string Book::get_title() const { return title; } 
Book::Category Book::get_category() const { return category; }

istream& operator >>(istream& ins, Book& book)
{
    ins.get();  // skip the blank after the command
     getline(ins, book.isbn,  ',');
    getline(ins, book.last,  ',');
    getline(ins, book.first, ',');
    getline(ins, book.title, ','); 
    string catstr;
    getline(ins, catstr);

    book.category = Book::Category::NONE; 
    if      (catstr == "fiction")   book.category = Book::Category::FICTION;
    else if (catstr == "history")   book.category = Book::Category::HISTORY;
    else if (catstr == "technical") book.category = Book::Category::TECHNICAL; 
    return ins;
}

ostream& operator <<(ostream& outs, const Book::Category& category)
{
    switch (category)
    {
        case Book::Category::FICTION:   outs << "fiction";      break;
        case Book::Category::HISTORY:   outs << "history";      break;
        case Book::Category::TECHNICAL: outs << "technical";    break;
        case Book::Category::NONE:      outs << "none";         break;
    }
    
    return outs;
}


ostream& operator <<(ostream& outs, const Book& book)
{
    outs << "Book{ISBN=" << book.isbn << ", last=" << book.last
         << ", first=" << book.first << ", title=" << book.title
         << ", category=" << book.category << "}";
    return outs;
}



