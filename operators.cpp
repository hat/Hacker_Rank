#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    float meal_cost;
    float tip;
    float tax;
    float total;
    
    cin >> meal_cost >> tip >> tax;
    tip = meal_cost * (tip / 100);
    tax = meal_cost * (tax / 100);
    total = round(meal_cost + tip + tax);
    cout << "The total meal cost is " << total << " dollars." << endl;
}
