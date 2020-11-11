#include <stdio.h>
 
int main() {
 
    int entrada, saida;
    
    while (scanf("%d", &entrada) != EOF){
        
        saida = entrada - 1;
        
        printf("%d\n", saida);
    }
 
    return 0;
}