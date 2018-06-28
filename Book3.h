#include<iostream>
#include<vector>
using namespace std;



class Book
{
public:
    /**
     * Book categories.
     */
    enum class Category { FICTION, HISTORY, TECHNICAL, NONE }; 
    /**
     * Default constructor.
     */
    Book(); 
    /**
     * Constructor.
     */
    Book(string isbn, string last, string first, string title, Category category); 
    /**
     * Destructor.
     */
    ~Book();

    /**
     * Getter.
     * @return the book's ISBN.
     */
    string get_isbn() const; 
    /**
     * Getter.
     * @return the author's last name.
     */
    string get_last() const;

    /**
     * Getter.
     * @return the author's first name.
     */
    string get_first() const;
    /**
     * Getter.
     * @return the book's title.
     */
    string get_title() const; 
    /**
     * Getter.
     * @return the book's category.
     */
    Category get_category() const;

    /**
     * Overloaded input stream extraction operator for a book.
     * Reads from a CSV file.
     * @param istream the input stream.
     * @param book the book to input.
     * @return the input stream.
     */
    friend istream& operator >>(istream& ins, Book& emp);

    /**
     * Overloaded output stream insertion operator for a book.
     * @param ostream the output stream.
     * @param book the book to output.
     * @return the output stream.
     */
    friend ostream& operator <<(ostream& outs, const Book& emp);

private:
    string isbn;        // ISBN
    string last;        // author's last name
    string first;       // author's first name
    string title;       // book title
    Category category;  // book category
};
 
/**
 * Overloaded output stream insertion operator for a book category.
 * Doesn't need to be a friend since it doesn't access any 
 * private members.
 * @param ostream the output stream.
 * @param book the category to output.
 * @return the output stream.
 */
ostream& operator <<(ostream& outs, const Book::Category& category);


