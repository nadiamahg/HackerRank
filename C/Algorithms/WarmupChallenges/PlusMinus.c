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
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    float positive_numbers = 0;
    float negative_numbers = 0;
    float zeroes = 0;
    for(int x = 0; x < n; x++) {
        positive_numbers += (arr[x] > 0 ? 1 : 0); 
        negative_numbers += (arr[x] < 0 ? 1 : 0);
        zeroes += (arr[x] == 0 ? 1 : 0);
    }
    
    printf("%f\n%f\n%f", positive_numbers/n, negative_numbers/n, zeroes/n);
    return 0;
}