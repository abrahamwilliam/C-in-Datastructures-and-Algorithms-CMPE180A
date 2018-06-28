#include <iostream>
#include <vector>
#include <string>
#include "WordVector.h"

/***** Complete this file. *****/

using namespace std;

WordVector::WordVector()
{

}

WordVector::~WordVector()
{

}

Word *WordVector::insert(const string text)
{
    int i=0;
    vector <Word >:: iterator it = data.begin();
    Word obj(text);
    for (it; it<data.end();it++)
    {
        if (data[i].get_text() == text){

            data[i].increment_count ();
            return  &it[i];
        }
        i++;
    }
        data.insert( data.begin() ,obj );
        return &it[0];

}

Word * WordVector::search(const string text) {

    vector<Word>::iterator it = data.begin();
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].get_text() == text) {
            return &it[i];
        }
        it++;
    }

        return nullptr;

}
int WordVector :: get_size(){
    return data.size();
}
vector<Word>& WordVector :: get_data(){
    return data ;
}
