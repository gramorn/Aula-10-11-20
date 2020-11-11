#include <stdio.h>
 
int main() {
 
    int n, x, rep = 0, rep2, contador;
    
    scanf("%d", &n);
    
    while (rep < n){

        scanf("%d", &x);

        rep2 = 2;
        contador = 0;
  
        while (rep2 < x){
          if (x % rep2 == 0) contador++;
          rep2++;
        }

        if (contador == 0) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
        
        rep++;
    }
 
    return 0;
}