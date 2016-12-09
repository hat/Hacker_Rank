#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int                 num_entries;
    string              name;
    string              search;
    int                 number;
    map<string, int>    phone_book; // Used to store name and number
   
    //get the number going to be entered from stdin 
    cin >> num_entries;
    cin.ignore();

    //add each name and number to phone_book
    for (int i = 0; i < num_entries; i++)
    {
        cin >> name;
        cin >> number;
        cin.ignore();
        phone_book[name] = number;
    }
    //search phone_book for entered name
    for (int j = 0; j < num_entries; j++)
    {
        getline(cin, search);
        if (phone_book.find(search) != phone_book.end())
            cout << search << "=" << phone_book[search] << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
