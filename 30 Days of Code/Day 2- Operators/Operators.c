#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double mealCost;
    double tip;
    double tax;
    int totalCost;
    
    scanf("%lf", &mealCost);
    scanf("%lf", &tip);
    scanf("%lf", &tax);
    
    totalCost = round(mealCost + ((tip/100) * mealCost) + ((tax/100) * mealCost));
    
    printf("The total meal cost is %i dollars.", totalCost);
    
    return 0;
    
}

