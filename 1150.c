#include <stdio.h>
 
int main() {
 
    int x, z, soma = 0, rep = 0;
    
    scanf("%d %d", &x, &z);
    
    while (z <= x){
        scanf("%d", &z);
    }
    while (soma <= z){
        rep++;
        soma += x;
        x++;
    }
    
    printf("%d\n", rep);
 
    return 0;
}