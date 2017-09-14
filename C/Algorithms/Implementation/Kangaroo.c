#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    
    if (x1 == x2) {
        return "YES";
    } else if (v2 == v1) {
        return "NO";
    } else {
        int a = ((x1 - x2) / (v2 - v1));
        if(a >= 0 && (((x1 - x2) % (v2 - v1)) == 0 )){
            return "YES";
        } 
    }
    
    return "NO";
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
