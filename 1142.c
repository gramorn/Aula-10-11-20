#include <stdio.h>
 
int main() {
 
    int n, primeiro = 1, segundo = 2, terceiro = 3, rep = 0;
    scanf("%d", &n);
    while (rep < n){
        printf("%d %d %d PUM\n", primeiro, segundo, terceiro);
        primeiro += 4;
        segundo += 4;
        terceiro += 4;
        rep++;
    }
 
    return 0;
}