#include <vector>
#include <string>
#include "WordVector.h"

using namespace std;

WordVector::WordVector() {}

WordVector::~WordVector() {}

int WordVector::get_count(const string text) const
{
    int index = find(text, 0, d.size()-1);
    return index >= 0 ? d[index].get_count() : -1;
}

void WordVector::insert(const string text)
{

	steady_clock::time_point st = steady_clock::now();

	if (d.size() == 0)
	{
		d.push_back(Word(text));
	}
	else{
		int index = find(text, 0, d.size()-1);

		if (index < 0){
			vector<Word>::iterator it = d.begin();
			while ((it != d.end()) && (text > it->get_text())) it++;
			it = d.insert(it, Word(text));
		}else{
			d[index].increment_count();
		}
	}

	steady_clock::time_point et = steady_clock::now();

	increment_elapsed_time( st, et);

}




vector<Word>::iterator WordVector::search(const string text)
{

    steady_clock::time_point st = steady_clock::now();

    int index = find(text, 0, d.size()-1);

    steady_clock::time_point et = steady_clock::now();
	increment_elapsed_time( st, et);

	return index >= 0 ? d.begin() + index : d.end();
}




Word &WordVector::operator [] (int index)
{
	return d[index];
}

int WordVector::find(const string text, int low, int high) const
{
    while (low <= high) {
        int mid = (low + high)/2;

        if (text == d[mid].get_text()) {
            return mid;
        }
        else if (text < d[mid].get_text()) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    return -1;
}

int WordVector::size() const
{
 return d.size();
}
