#include <stdio.h>
 
int main() {

    int n, rep = 0, x, y, rep2, soma;
    
    scanf("%d", &n);
    
    while (rep < n){
        scanf("%d %d", &x, &y);
        rep2 = 0;
        soma = 0;
        while (rep2 < y){
            if(x % 2 != 0) {
            soma += x;
            rep2++;
            }
            x++;
        }
        rep++;
        printf("%d\n", soma);
    }
 
    return 0;
}