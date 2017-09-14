#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getRecord(int ssize, int* s, int *result_size){
    int most = s[0];
    int least = s[0];
    *result_size = 2;
    int *array = malloc(sizeof(int) * *result_size);
    array[0] = 0;
    array[1] = 0;
    
    
    for(int x = 1; x < ssize; x++){
        if(s[x] > most){
            array[0] ++;
            most = s[x];
        } if(s[x] < least){
            array[1] ++;
            least = s[x];
        }
    }
    
    return array;
}

int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int result_size;
    int* result = getRecord(n, s, &result_size);
    for(int i = 0; i < result_size; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    puts("");
    return 0;
}
