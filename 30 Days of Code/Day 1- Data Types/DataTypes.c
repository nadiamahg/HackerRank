#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

// Declare 3 variables: one of type int, one of type double, and one of type String.    
    int a;
    double b;
    char str[100],*p,f[100];
    
// Read and save an integer, double, and String to your variables.
    scanf("%i", &a);
    scanf("%lf", &b);
    scanf(" %[^\n]",str);
    strcpy(f,s);
    
// Print the sum of both integer variables on a new line.
    
// Print the sum of the double variables on a new line.
    
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
        
    printf("%i", a+i);
    printf("\n%.1f", b+d);
    printf("\n%s", strcat(f,str));

    return 0;
}