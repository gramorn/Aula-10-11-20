#include <stdio.h>
 
int main() {
 
    int a, n, soma = 0, rep = 0;
    
    scanf("%d %d", &a, &n);

    while (n <= 0){
        scanf("%d", &n);
        }
    while (rep < n){
      rep++;
      soma += a;
      a++;
    }

    printf("%d\n", soma);
    
 
    return 0;
}