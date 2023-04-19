#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, i, x=0, y=1, z=1;

    printf("\nIntroduce el elemento n a imprimir: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        
        z = x+y;
        x = y;
        y = z;
    }

    printf("\nEl valor de la serie en la posicion %i es: %i\n",n,z);

    return 0;
}