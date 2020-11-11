#include <stdio.h>
 
int main() {
 
    int n, rep = 1, n2 = 1, n3 = 0, n4 = 0;
    
    scanf("%d", &n);

    while (rep <= n){
        if(rep == n) {
          printf("%d\n", n3);
          rep++;
        }
        else{
          printf("%d ", n3);
          n4 = n2 + n3;
          n3 = n2;
          n2 = n4;
          rep++;
        }
    }
 
    return 0;
}