#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

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