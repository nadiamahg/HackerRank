#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    int max = 0;
    int result = 0;
    for(int x = 0; x < ar_size; x ++) {
        max = (ar[x] > max ? ar[x] : max);
    } 
    for (int y = 0; y < ar_size; y ++) {
        if(ar[y] == max) {
            result += 1;
        }
    }
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}