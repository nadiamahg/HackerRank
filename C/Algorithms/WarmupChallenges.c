#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



----------------------------------------------------------
----------------------------------------------------------


----------------------------------------------------------
1. 

int simpleArraySum(int n, int ar_size, int* ar) {
    int sum = 0;
    for (int x = 0; x < ar_size; x++) {
        sum = sum + ar[x];
    }
    return sum;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = simpleArraySum(n, n, ar);
    printf("%d\n", result);
    return 0;
}

----------------------------------------------------------

----------------------------------------------------------
2. Compare the Triplets

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    
    *result_size = 2;
    int *results = malloc(sizeof(int) * *result_size);
    
    results[0] = (a0 > b0 ? 1 : 0) + (a1 > b1 ? 1 : 0) + (a2 > b2 ? 1 : 0);
    results[1] = (a0 < b0 ? 1 : 0) + (a1 < b1 ? 1 : 0) + (a2 < b2 ? 1 : 0);
    
    return results;
    
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
----------------------------------------------------------

----------------------------------------------------------
3. A Very Big Sum

long int aVeryBigSum(int n, int ar_size, long int* ar) {
    long int result = 0;
    
    for (int x = 0; x < ar_size; x ++) {
        result = result + ar[x];
    }
    
    return result;

}

int main() {
    int n; 
    scanf("%i", &n);
    long int *ar = malloc(sizeof(long int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
    }
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}
----------------------------------------------------------

----------------------------------------------------------
4. Diagonal Difference

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
----------------------------------------------------------

----------------------------------------------------------
5. Plus Minus

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
----------------------------------------------------------

----------------------------------------------------------
6. Staircase

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
----------------------------------------------------------

----------------------------------------------------------
7. Mini-Max Sum

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
    
}

----------------------------------------------------------


