#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int result = 0;
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
    for(int x = 0; x < n; x ++) {
        primary_diagonal = primary_diagonal + a[x][x];
        secondary_diagonal = secondary_diagonal + a[x][n-x-1];
    }
    
    result = primary_diagonal - secondary_diagonal;
    result = (result > 0 ? result : result * -1);
    printf("%i", result);
    
    return 0;
}