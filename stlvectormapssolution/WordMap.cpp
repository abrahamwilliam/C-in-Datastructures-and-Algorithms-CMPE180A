#include <iostream>
#include <map>
#include <string>
#include "WordMap.h"

using namespace std;
using namespace std::chrono;

WordMap::WordMap() {}

WordMap::~WordMap() {}

int WordMap::get_count(const string text) const
{
map<string, Word>::const_iterator it = d.find(text);
    return it != d.end() ? (it->second).get_count() : -1;
}


void WordMap::insert(const string text)
{
    steady_clock::time_point st = steady_clock::now();
map<string, Word>::iterator it = d.find(text);
if (it == d.end()){
        d[text] = Word(text);
    }else{
        (it->second).increment_count();
    }
steady_clock::time_point et = steady_clock::now();
increment_elapsed_time( st, et);
}



map<string, Word>::iterator WordMap::search(const string text)
{
    
    steady_clock::time_point st = steady_clock::now();

    map<string, Word>::iterator it = d.find(text);

    steady_clock::time_point et = steady_clock::now();

	increment_elapsed_time( st, et);

	return it;

}

int WordMap::size() const
{
	return d.size();
}

