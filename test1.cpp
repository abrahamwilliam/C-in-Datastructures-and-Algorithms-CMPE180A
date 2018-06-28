#include <istream>
#include <sstream>

friend istream& operator >> (istream& is, City& c)
{
    // get whole line
    string line;
    if (!getline(is, line))
    {
        // error reporting and exit goes here...
    }

    // replace all ';' to ' '
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ';')
            line[i] = ' ';
    }

    // start parsing here
    istringstream iss(line);
    string tmp;
    if (iss >> tmp >> c.id >> c.name >> sizeOfPopulation >> c.x >> c.y)
    {
        // error reporting and exit goes here...
    }

    return input;
}
