#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float meal_cost;
    float tip;
    float tax;
    int    total;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%f", &meal_cost);
    scanf("%f", &tip);
    scanf("%f", &tax);
    tip = meal_cost * (tip / 100);
    tax = meal_cost * (tax / 100);
    total = (int)(meal_cost + tip + tax);
    printf("The total meal cost is %d dollars.\n", total);
    return 0;
}
