#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "Book.h" 
using namespace std;

// Status codes.
enum class StatusCode {OK, DUPLICATE, NOT_FOUND, INVALID_COMMAND};

/**
 * Execute a command.
 * @param command the command.
 * @param istream the input data stream.
 * @param catalog the vector of book records.
 */
StatusCode execute(const char command, istream &input, 
                   vector<Book>& catalog);

/**
 * Insert a new book into the catalog at the appropriate position
 * to maintain sort order by ISBN.
 * @param istream the input data stream.
 * @param catalog the vector of book records.
 * @param index set to the catalog index of the new record.
 * @return the status code of this operation.
 */
StatusCode insert(istream &input, vector<Book>& catalog, int &index); 
/**
 * Remove a book from the catalog.
 * @param istream the input data stream.
 * @param catalog the vector of book records.
 * @param book set to the removed book.
 * @return the status code of this operation.
 */
StatusCode remove(istream &input, vector<Book>& catalog, Book& book);

/**
 * Match books.
 * @param istream the input data stream.
 * @param catalog the vector of book records.
 * @return a vector of the indices of the matching books.
 */
vector<int> match(istream &input, vector<Book>& catalog); 
/**
 * Match the book in the catalog with the given ISBN.
 * @param istream the input data stream.
 * @param catalog the vector of book records.
 * @return a vector of the index of the matching book.
 */
vector<int> match_by_isbn(const string last, 
                          const vector<Book>& catalog);


/**
 * Match the books in the catalog with the given author's last name.
 * Use a linear search.
 * @param last the author's last name.
 * @param catalog the book vector.
 * @return a vector of the indices of the matching books.
 */
vector<int> match_by_author(const string last, 
                            const vector<Book>& catalog); 
/**
 * Match the books in the catalog in the given category.
 * Use a linear search.
 * @param catstr the category.
 * @param catalog the book vector.
 * @return a vector of the indices of the matching books.
 */
vector<int> match_by_category(string catstr, 
                              const vector<Book>& catalog);


/**
 * Match all the books in the catalog.
 * Use a linear search.
 * @param last the author's last name.
 * @param catalog the book vector.
 * @return a vector of the indices of the matching books.
 */
vector<int> match_all(const vector<Book>& catalog); 
/**
 * Process an invalid command.
 * @param istream the input data stream.
 * @return the status code.
 */
StatusCode invalid_command(istream &input);

/**
 * Find the book in the catalog with the given ISBN.
 * Use a binary search.
 * @param isbn the ISBN.
 * @param catalog the vector of book records.
 * @return the vector index of the book if found, else return -1.
 */
int find(const string isbn, const vector<Book>& catalog);

/**
 * Print an error message.
 * @param status the status code.
 */
void print_error_message(StatusCode status); 
const string INPUT_FILE_NAME = "commands.in";


/**
 * The main. Open the command input file and loop to process commands.
 */
int main()
{
   // Open the input file.
    ifstream input;
    input.open("C:\\Users\\lenovo\\Desktop\\commands.in");
    if (input.fail())
    {
        cout << "Failed to open " << INPUT_FILE_NAME << endl;
        return -1;
    }
    vector<Book> catalog;  // book catalog

    char command;
    input >> command;  // read the first command

    /**
     * Loop to read commands until the end of file.
     */
    while (!input.fail())
    {
        cout << endl << command << " ";

        StatusCode status = execute(command, input, catalog);
        if (status != StatusCode::OK) print_error_message(status);

        input >> command;
    }
    return 0;
}

StatusCode execute(const char command, istream &input, 
                   vector<Book>& catalog)
{
    int index;
    StatusCode status;
    Book book; 
    // Execute the command.
    switch (command)
    {
        case '+':
            status = insert(input, catalog, index);
            book = catalog[index];
            cout << "Inserted at index " << index << ": " 
                 << book << endl;
            break;

        case '-':
            status = remove(input, catalog, book);
            cout << "Removed " << book << endl;
            break;
        case '?':
        {
            vector<int> matches = match(input, catalog);
            for (int i : matches) cout << catalog[i] << endl;
            status = StatusCode::OK;
            break;
        }
        default:
            status = invalid_command(input);
            break;
    }
    return status;
}
StatusCode insert(istream &input, vector<Book>& catalog, int& index)
{
    // Read the book information.
    Book book;
    input >> book;

    string isbn = book.get_isbn(); 
    // Loop to find the proper insertion point.
    index = 0;
    while (   (index < catalog.size())
           && (isbn > catalog[index].get_isbn())) index++;


    // Check the insertion point.
    if (index >= catalog.size())
    {
        catalog.push_back(book);        // append at the end
        return StatusCode::OK;
    }
    else if (isbn == catalog[index].get_isbn())
    {
        return StatusCode::DUPLICATE;   // duplicate
    }
    else
    {
        catalog.insert(catalog.begin() + index, book);  // insert
        return StatusCode::OK;
    }
}


StatusCode remove(istream &input, vector<Book>& catalog, Book& book)
{
    string isbn;
    input >> isbn; 
    // Look for the book record with a matching ISBN.
    int index = find(isbn, catalog);
    if (index == -1)
    {
        book = Book(isbn, "", "", "", Book::Category::NONE);
        return StatusCode::NOT_FOUND;
    }

    // Remove the matching book from the catalog.
    book = catalog[index];
    catalog.erase(catalog.begin() + index);
    return StatusCode::OK;
}


vector<int> match(istream &input, vector<Book>& catalog)
{
    vector<int> matches;

    string str;
    getline(input, str); 
    if (str == "")
    {
        matches = match_all(catalog);
    }
    else if (str.find("isbn=") != str.npos)
    {
        string isbn = str.substr(str.find("=") + 1);
        matches = match_by_isbn(isbn, catalog);
    }

    else if (str.find("author=") != str.npos)
    {
        string last = str.substr(str.find("=") + 1);
        matches = match_by_author(last, catalog);
    }
    else if (str.find("category=") != str.npos)
    {
        string category = str.substr(str.find("=") + 1);
        matches = match_by_category(category, catalog);
    }
    return matches;
}
vector<int> match_by_isbn(const string isbn, 
                          const vector<Book>& catalog)
{
    vector<int> matches; 
    cout << "Book with ISBN " << isbn << ":" << endl;

    int index = find(isbn, catalog);
    if (index != -1) matches.push_back(index);

    return matches;
}

vector<int> match_by_author(const string last, 
                            const vector<Book>& catalog)
{
    vector<int> matches;

    cout << "Books by author " << last << ":" << endl; 
    // Do a linear search.
    for (int i = 0; i < catalog.size(); i++)
    {
        Book book = catalog[i];
        if (last == book.get_last()) matches.push_back(i);
    }
    return matches;
}
vector<int> match_by_category(string catstr, const vector<Book>& catalog)
{
    vector<int> matches;

    Book::Category category = catstr == "fiction"   ? Book::Category::FICTION
                            : catstr == "history"   ? Book::Category::HISTORY
                            : catstr == "technical" ? Book::Category::TECHNICAL
                            :                         Book::Category::NONE;

    cout << "Books in category " << category << ":" << endl;

    // Do a linear search.
    for (int i = 0; i < catalog.size(); i++)
    {
        Book book = catalog[i];
        if (category == book.get_category()) matches.push_back(i);
    }

    return matches;
}
vector<int> match_all(const vector<Book>& catalog)
{
    vector<int> matches;

    cout << "All books in the catalog:" << endl;

    for (int i = 0; i < catalog.size(); i++) matches.push_back(i);
    return matches;
}

StatusCode invalid_command(istream &input)
{
    // Read and ignore the rest of the input line.
    string ignore;
    getline(input, ignore); 
    return StatusCode::INVALID_COMMAND;
}
int find(const string isbn, const vector<Book>& catalog)
{
    // Do a binary search.
    int low = 0;
    int high = catalog.size();

    while (low <= high)
    {
        int mid = (low + high)/2;
        Book book = catalog[mid];

        if (isbn == book.get_isbn())
        {
            return mid;     // found
        }
        else if (isbn < book.get_isbn())
        {
            high = mid - 1; // search lower half
        }
        else
        {
            low  = mid + 1; // search upper half
        }
    }

    return -1;  // not found
}

void print_error_message(StatusCode status)
{
    switch (status)
    {
        case StatusCode::DUPLICATE:
            cout << "*** Duplicate ISDN ***" << endl;
            break;

        case StatusCode::NOT_FOUND:
            cout << "*** Book not found ***" << endl;
            break; 
        case StatusCode::INVALID_COMMAND:
            cout << "*** Invalid command ***" << endl;
            break; 
        default:  break;
    }
}




