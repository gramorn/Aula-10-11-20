#include <stdio.h>
 
int main() {
 
    int x[10], rep = 0;

    while (rep < 10){
    scanf("%d", &x[rep]);
    rep++;
    }

    rep = 0;

    while (rep < 10){
        if (x[rep] <= 0) x[rep] = 1;
        printf("X[%d] = %d\n", rep, x[rep]);
        rep++;
    }

    return 0;
}