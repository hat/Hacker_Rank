#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char    str[10000];
    int     len;
    int     i;
    
    i = 0;
    
    cin >> len;
   
    for (int i = 0; i < len; i++)
    {
        cin >> str;
        for (int j = 0; str[j]; j++)
            if (j == 0 || j % 2 == 0)
                cout << str[j];
        cout << " ";
        for (int j = 1; str[j]; j++)
            if (j % 2 != 0)
                cout << str[j];
        cout << endl;
    }
    return 0;
}
