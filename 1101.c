#include <stdio.h>
 
int main() {
 
    int m, n, rep, soma;
    
    while (1){
    
    scanf("%d %d", &m, &n);

    soma = 0;
    
    if (m <= 0 || n <= 0){
      break;
    }else{
        if (m > n){
            while(n <= m){
            printf("%d ", n);
            soma += n;
            n++;
            }
            printf("Sum=%d\n", soma);
        }else{
            while(m <= n){
                printf("%d ", m);
                soma += m;
                m++;
            }
            printf("Sum=%d\n", soma);
        }
    }
    }
    return 0;
}