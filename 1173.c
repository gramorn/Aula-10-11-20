#include <stdio.h>
 
int main() {
 
    int n[10], rep;
    
    scanf("%d", &n[0]);
    
    printf("N[0] = %d\n", n[0]);
    
    for (rep = 1; rep <= 9; rep++){
        n[rep] = n[rep-1] * 2;
        printf("N[%d] = %d\n", rep, n[rep]);
    }
    
    return 0;
}