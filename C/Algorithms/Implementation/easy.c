
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

------------------------------------
------------------------------------

------------------------------------
1. Grading Students

int* solve(int grades_size, int* grades, int result_size){
    
    for(int y = 0; y < result_size; y ++) {
            for(int x = 0; x < 3; x ++) {
                if((grades[y] + x) % 5 == 0 && grades[y] + x >= 40) {
                    grades[y] += x;
                } 
            }
        
    }
    return grades;
}
     

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size = n;
    int* result = solve(n, grades, result_size);
   
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

------------------------------------

------------------------------------
2. Apple and Orange

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int appleFallsWithinRegion = 0;
    int orangeFallsWithinRegion = 0;
    for(int x = 0; x < m;  x++) {
        if((a + apple[x] <= t) && (a + apple[x] >= s)) {
            appleFallsWithinRegion += 1;
        }
    }
    
     for(int x = 0; x < n;  x++) {
        if(b + orange[x] <= t && b + orange[x] >= s ) {
            orangeFallsWithinRegion += 1;
        }
    }
    
    printf("%i\n%i", appleFallsWithinRegion, orangeFallsWithinRegion);
    
    return 0;
}

------------------------------------