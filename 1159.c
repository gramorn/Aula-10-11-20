#include <stdio.h>
 
int main() {
 
    int x, soma, rep;
    
    while (1){
        scanf("%d", &x);
        
        soma = 0;
        rep = 0;
        
        if(x == 0) break;
        
        while (rep < 5){
            if (x % 2 == 0){
                soma += x;
                rep++;
            }
            x++;
        }
        printf("%d\n", soma);
    }
    return 0;
}