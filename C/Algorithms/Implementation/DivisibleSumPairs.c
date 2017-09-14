#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k, int arsize, int* ar) {
    
    int sum = 0;
    int result = 0;
    int i;
    int j;
    
    for(int x = 0; x < arsize; x++) {
        i = ar[x];
        if(x+1 < arsize){
            for(int y = x+1; y < arsize; y++) {
                j = ar[y];
                sum = i + j;
                if(sum % k == 0){
                    result ++;
                }
            sum = 0;
            }
        }
        
    }
        
     return result;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}
