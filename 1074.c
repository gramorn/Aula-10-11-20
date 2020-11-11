#include <stdio.h>
 
int main() {
 
    int n, x, rep;
    
    scanf("%d", &n);
    
    for(rep = 0; rep < n; rep++){
        scanf("%d", &x);
        if (x == 0) {
          printf("NULL\n");
        }else{
        if (x % 2 == 0) printf("EVEN ");
        if (x % 2 != 0) printf("ODD ");
        if (x > 0) printf("POSITIVE\n");
        if (x < 0) printf("NEGATIVE\n");
        }
    }
 
    return 0;
}