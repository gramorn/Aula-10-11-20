#include <stdio.h>
 
int main() {
 
    int n[20], rep, aux, rep2 = 19;
    
    for (rep = 0; rep < 20; rep++){
        scanf("%d", &n[rep]);
    }
    
    for (rep = 0; rep < 10; rep++){
        aux = n[rep];
        n[rep] = n[rep2];
        n[rep2] = aux;
        rep2--;
    }

    for (rep = 0; rep < 20; rep++) printf("N[%d] = %d\n", rep, n[rep]);

    return 0;
}