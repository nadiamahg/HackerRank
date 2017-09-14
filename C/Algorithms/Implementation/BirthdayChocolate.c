#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int ssize, int* s, int d, int m){
    int result = 0;
    int sum = 0;
    
    for(int x = 0; x < ssize; x++){
        sum = s[x];
        if(x + m-1 < ssize){
            for(int y = 1; y < m; y ++){
                sum += s[x+y];
            }
        }
        if(sum == d){
            result ++;
        }
        sum = 0;
    }
    
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}
