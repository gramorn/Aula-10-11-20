#include <stdio.h>
 
int main() {
 
    int n, rep = 1, fatorial;
    
    scanf("%d", &n);

    fatorial = n;
    
    while (rep < n){
        fatorial *= n - rep;
        rep++;
    }
    
    printf("%d\n", fatorial);
 
    return 0;
}