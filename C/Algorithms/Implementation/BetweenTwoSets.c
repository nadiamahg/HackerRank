#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getTotalX(int asize, int* a, int bsize, int* b) {
    int i = a[asize-1];
    int e = b[0];
    int isFactorAllA = 1;
    int isFactorAllB = 1;
    int factors = 0;
    
    while(i >= i && i <= e){
        for(int x = 0; x < asize; x++){
            if(!(i % a[x] == 0)){
                isFactorAllA = 0;
            }
        }
        if(isFactorAllA){
            for(int y = 0; y < bsize; y++){
                if(!(b[y] % i == 0)){
                    isFactorAllB = 0;
                }
            }
        }
        if(isFactorAllA && isFactorAllB){
            factors += 1;
        }
        i += 1;
        isFactorAllA = 1;
        isFactorAllB = 1;
    }
    
    return factors;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}

