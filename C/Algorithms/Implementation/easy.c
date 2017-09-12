
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

------------------------------------
3. Kangaroo

char* kangaroo(int x1, int v1, int x2, int v2) {
    
    if (x1 == x2) {
        return "YES";
    } else if (v2 == v1) {
        return "NO";
    } else {
        int a = ((x1 - x2) / (v2 - v1));
        if(a >= 0 && (((x1 - x2) % (v2 - v1)) == 0 )){
            return "YES";
        } 
    }
    
    return "NO";
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}


------------------------------------
------------------------------------
4. Between Two Sets 

int getTotalX(int asize, int* a, int bsize, int* b) {
    int i = a[asize-1];
    int e = b[0];
    int isFactorAllA = 1;
    int isFactorAllB = 1;
    int factors = 0;
    
    while(i >= i && i <= e){
        for(int x = 0; x < asize; x++){
            if(!(i % a[x] == 0)){
                isFactorAllA = 0;
            }
        }
        if(isFactorAllA){
            for(int y = 0; y < bsize; y++){
                if(!(b[y] % i == 0)){
                    isFactorAllB = 0;
                }
            }
        }
        if(isFactorAllA && isFactorAllB){
            factors += 1;
        }
        i += 1;
        isFactorAllA = 1;
        isFactorAllB = 1;
    }
    
    return factors;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}


------------------------------------