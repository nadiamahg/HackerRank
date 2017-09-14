#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    int64_t FinalMax;
    int64_t Sum;
    int64_t FinalMin;
    
    for(int x = 0; x < 5; x ++) {    
        Sum = 0;
        for (int y = 0; y < 5; y ++) {
            if (x != y) {
                Sum += arr[y];
            }
        }
        if(x == 0) {
            FinalMin = Sum;
            FinalMax = Sum;
        }
        FinalMax = (Sum > FinalMax ? Sum : FinalMax);
        FinalMin = (Sum < FinalMin ? Sum : FinalMin);
    }
    printf("%li %li", FinalMin, FinalMax);
    return 0;
    