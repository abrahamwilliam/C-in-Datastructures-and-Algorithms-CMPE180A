#include <string>
#include "Word.h"
using namespace std;

/***** Modify this file as needed. *****/

Word::Word() : text(""), count(0) {}
Word::Word(string text) : text(text), count(1) {}
string Word :: get_text(){
    return text;
}
int Word :: get_count (){
    return count;
}
void Word:: increment_count(){
    count++;
}

Word::~Word() {}
bool operator !=(Word w1, Word w2)
{
    if ((w1.text == w2.text) ||  (w1.count == w2.count))
    {
        return true;
    }
    else
    {
        return false;
    }
}
