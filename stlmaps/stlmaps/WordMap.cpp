#include <iostream>
#include <map>
#include "WordMap.h"
#include <iterator>

/***** Complete this file. *****/

using namespace std;

WordMap::WordMap()
{

}

WordMap::~WordMap()
{

}

Word *WordMap::insert(const string text) {
    auto it = data.find(text);
    if (it!= data.end()){
        (it->second ).increment_count ();
        return &(it->second);
    }
    else {
        data[text]= Word(text);
        return &(it->second );
    }

}


Word *WordMap::search(const string text)
{

    map<string ,Word>:: iterator it = data.find(text);
    return &(it->second);

}
int WordMap :: get_size() {
    return data.size();
}
map<string, Word> &WordMap :: get_data() {
    return data;
}

