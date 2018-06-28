#include <string>
#include <iostream>
#include <cstring>
using namespace std;
string intertwine(string a, string b);

int main()
{
    string a = "Fred";
    string b = "Mary";

    string c = intertwine("Fred", "Mary");
    cout << "tjhe final string is " << c << endl;
}

/**
	   Return a string that mixes the characters in the string a 
	   with the characters in b reversed. For example,
	   intertwine("Fred", "Mary") yields "FyrreadM".
	
	   If one string is longer than the other, append the unused
	   characters (in reverse order if the second string is longer).
	   intertwine("Sue", "Peggy") yields "SyugegeP".
	*/
string intertwine(string a, string b)
{

    int n = a.size();

  //  char ac[n] = {};

    
    //strcpy(ac, a.c_str());

    
    int nb = b.size();

   // char ab[nb] = {};

    char final[n + nb] = {};

    //strcpy(ab, b.c_str());
    
    int i = 0, k = n + nb;


    int j = nb - 1, l = 0;
    while (i < k) {

        if (l < n) {
            final[i] = a[l];
     
            i++;
    
	        l++;
        }
        
        if (j >= 0) {
            final[i] = b[j];
           
            i++;
            j--;
        }
    }
    
    string s(final);

 

    return s;
}
