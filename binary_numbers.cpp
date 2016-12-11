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
    int 			n;
    unsigned long 	bin;
    int				cons_ones;
    int				max_ones;
    string 			s_bin;

    cin >> n;
    bin = 0;
    cons_ones = 0;
    max_ones = 0;
    while (n > 0)
    {
    	bin += n % 2;
    	bin *= 10;
    	n /= 2;
	}
	bin /= 10;
	s_bin = to_string(bin);
    for (int i; i <= s_bin.length(); i++)
    {
    	if (s_bin[i] == '1')
    	{
    		cons_ones++;
    	}
    	else
    	{
    		if (cons_ones > max_ones)
    			max_ones = cons_ones;
    		cons_ones = 0;
    	}
    }
    cout << max_ones << endl;
    return 0;
}
