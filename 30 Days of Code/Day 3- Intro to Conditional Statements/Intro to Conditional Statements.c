#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    char* isWeird = " ";
    isWeird = ((n % 2 == 0 && ((n >= 2 && n <= 5) || n > 20)) ? "Not Weird" : "Weird");
    printf("%s", isWeird);
    
    return 0;
}