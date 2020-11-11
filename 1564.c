#include <stdio.h>
 
int main() {
 
    int vaiter;
    
    while(scanf("%d", &vaiter) != EOF){
        if (vaiter == 0){
            printf("vai ter copa!\n");
        }
        if (vaiter > 0){
            printf("vai ter duas!\n");
        }
    }
 
    return 0;
