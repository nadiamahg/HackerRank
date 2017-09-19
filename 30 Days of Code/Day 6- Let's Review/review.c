#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    
    scanf("%i", &n);
    
    
    
    for(int i = 0; i < n; i++){
        char * word = malloc(sizeof(char)*10000);
        scanf("%s", word);
        for(int x = 0; word[x] != '\0'; x = x + 2){
            printf("%c", word[x]);
        }
        printf(" ");
        for(int x = 1; word[x] != '\0'; x = x + 2){
            printf("%c", word[x]);
        }    
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

