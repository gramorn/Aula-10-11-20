#include <stdio.h>
 
int main() {
 
    int base, base2, valor, cem, cinquenta, vinte, dez, cinco, dois, um, valor2, cinquenta_cent, vinte_cent, dez_cent, cinco_cent, um_cent;
    
    scanf("%d.%d", &base, &base2);

    valor = base;

    cem = valor / 100;
    valor = valor % 100;

    cinquenta = valor / 50;
    valor = valor % 50;

    vinte = valor / 20;
    valor = valor % 20;

    dez = valor / 10;
    valor = valor %10;

    cinco = valor / 5;
    valor = valor % 5;

    dois = valor / 2;
    valor = valor % 2;



    

    um = valor;

    valor2 = base2;

    cinquenta_cent = valor2 / 50;
    vinte_cent = (valor2 % 50) / 25;
    dez_cent = ((valor2 % 50) % 25) / 10;
    cinco_cent = (((valor2 % 50) % 25) %10) / 5;
    um_cent = ((((valor2 % 50) % 25) % 10) %5) /1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinquenta_cent);
    printf("%d moeda(s) de R$ 0.25\n", vinte_cent);
    printf("%d moeda(s) de R$ 0.10\n", dez_cent);
    printf("%d moeda(s) de R$ 0.05\n", cinco_cent);
    printf("%d moeda(s) de R$ 0.01\n", um_cent);
 
    return 0;
}