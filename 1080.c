#include <stdio.h>
 
int main() {
 
    int n, rep, maior, posicao;
    
    maior = 0;
    posicao = 0;
    
    for (rep = 1; rep <= 100; rep++){

        scanf("%d", &n);
        
        if (n > maior){
            maior = n;
            posicao = rep;
        }
        
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}