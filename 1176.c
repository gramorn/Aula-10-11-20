#include <stdio.h>
 
int main() {

    unsigned long long int fibo[61], x = 1, y = 0, z = 0;
    int t, n, rep;

    for (rep = 0; rep <= 60; rep++){
        fibo[rep] = y;
        z = x + y;
        y = x;
        x = z;
    }
    
    scanf("%d", &t);
    
    for(rep = 0; rep < t; rep++){

        scanf("%d", &n);
        
        printf("Fib(%d) = %llu\n", n, fibo[n]);
    }
 
    return 0;
}