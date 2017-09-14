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
    
    for(int x = 1; x <= n; x ++ ) {
        for(int y = 1; y <= n; y ++) {
            if (x + y > n){
                printf("#");
            } else (printf(" "));
        }
        printf("\n");
    }
    return 0;
}