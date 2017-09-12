
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

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
------------------------------------
5. Breaking the Records

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


------------------------------------
------------------------------------
8. Birthday Chocolate

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

------------------------------------
------------------------------------
9. Divisible Sum Pairs

int divisibleSumPairs(int n, int k, int arsize, int* ar) {
    
    int sum = 0;
    int result = 0;
    int i;
    int j;
    
    for(int x = 0; x < arsize; x++) {
        i = ar[x];
        if(x+1 < arsize){
            for(int y = x+1; y < arsize; y++) {
                j = ar[y];
                sum = i + j;
                if(sum % k == 0){
                    result ++;
                }
            sum = 0;
            }
        }
        
    }
        
     return result;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}

------------------------------------
------------------------------------
10. 
------------------------------------
------------------------------------