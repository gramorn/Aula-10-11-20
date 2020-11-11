#include <stdio.h>
 
int main() {
 
    float a[100];
    int rep;
    
    for(rep = 0; rep < 100; rep++){
        scanf("%f", &a[rep]);
    }
    for(rep = 0; rep < 100; rep++){
       if (a[rep] <= 10.0)
          printf("A[%d] = %.1f\n", rep, a[rep]);
      } 
 
    return 0;
}