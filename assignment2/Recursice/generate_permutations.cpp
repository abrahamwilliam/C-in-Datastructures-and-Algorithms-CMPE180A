#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> generate_permutations(string word);

int main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    vector<string> permutations = generate_permutations(word);
    for (string perm : permutations) cout << perm << endl;

    cout << endl << word.length() << " letters generated "
                 << permutations.size() << " permutations." << endl;
    return 0;
}

/**
 * Generate the permutations of the letters of a word.
 * @param word the word.
 * @return a vector of the permutations.
 */
vector<string> generate_permutations(string word)
{
    vector<string> permutations;

    // Base case: Return an empty vector.
    if (word.length() == 0) return permutations;

    // Base case: Return a vector with a one-letter word.
    if (word.length() == 1)
    {
        permutations.push_back(word);
        return permutations;
    }

    // Recursive case: Remove a letter to make a word one letter shorter.
    //                 Recursively generate the permutations of the shorter
    //                 word. Prepend the removed letter to each permutation.
    //                 Repeat for each letter of the word.
    else
    {
        // Loop for each letter of the word.
        for (int i = 0; i < word.length(); i++)
        {
            // Remove the ith letter.
            char removed_letter = word[i];
            string shorter_word = word.substr(0, i) + word.substr(i + 1);

            // Generate permutations with the shorter word.
            vector<string> shorter_permutations =
                               generate_permutations(shorter_word);

            // Prepend the removed letter to the permutations.
            for (string shorter_perm : shorter_permutations)
            {
                permutations.push_back(removed_letter + shorter_perm);
            }
        }

        return permutations;
    }
}

