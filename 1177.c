#include <stdio.h>
 
int main() {
 
    int t, n[1000], rep, rep2 = 0;
    
    scanf("%d", &t);
    
    for (rep = 0; rep < 1000; rep++){
        n[rep] = rep2;
        rep2++;
        if(rep2 == t) rep2 = 0;
    }
    
    for (rep = 0; rep < 1000; rep++){
        printf("N[%d] = %d\n", rep, n[rep]);
    }
 
    return 0;
}