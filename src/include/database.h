#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{

public:
    Database()
    {
        // constructor
    }
    ~Database()
    {
        // destructor
    }

    vector<string> list;
    string name;

    void write(vector<string> list);
    void read();
};