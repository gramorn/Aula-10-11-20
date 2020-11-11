#include <stdio.h>
 
int main() {
 
    int n, x, rep = 0, rep2, contador;
    
    scanf("%d", &n);
    
    while (rep < n){
        scanf("%d", &x);
        rep2 = 1;
        contador = 0;
        while (rep2 < x){
            if (x % rep2 == 0) contador += rep2; 
            rep2++;
        }
        if (contador == x) printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
        rep++;
    }
    
    return 0;
}