#include <stdio.h>
 
int main() {
 
    int n, rep = 0, x, y, soma;
  
    scanf("%d", &n);
    
    while (rep < n){

        scanf("%d %d", &x, &y);

        soma = 0;

        if(x == y){
            soma = 0;
        }else{
            if (x > y){
              while (x > y + 1){
                x--;
                if (x % 2 != 0) soma += x;
            } 
            }else{
              while (y > x + 1){
                y--;
                if (y % 2 != 0) soma += y;   
            }
            }
        }
        printf("%d\n", soma);
        rep++;
    }
 
    return 0;
}