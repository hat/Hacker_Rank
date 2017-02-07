#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    long largest;
    long smallest;
    long sum;
    largest = 0;
    smallest = a;
    sum += a + b + c + d + e;
    if (a > largest)
        largest = a;
    if (smallest > b)
        smallest = b;
    if (b > largest)
        largest = b;
    if (smallest > c)
        smallest = c;
    if (c > largest)
        largest = c;
    if (smallest > d)
        smallest = d;
    if (d > largest)
        largest = d;
    if (smallest > e)
        smallest = e;
    if (e > largest)
        largest = e;
    cout << sum - largest << " " << sum - smallest;
    return 0;
}