#include <stdio.h>
 
int main() {
 
    double x, n[100];
    int rep;
    
    scanf("%lf", &x);
    
    n[0] = x;
    
    for (rep = 1; rep < 100; rep++){
        n[rep] = n[rep-1] / 2;
    }
    
    for (rep = 0; rep < 100; rep++) printf("N[%d] = %.4lf\n", rep, n[rep]);
    
    return 0;
}