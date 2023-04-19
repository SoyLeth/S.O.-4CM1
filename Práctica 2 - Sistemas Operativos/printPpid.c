#include <stdio.h>
#include <unistd.h>

int main (char argc, char *argv[]){

    printf("El pid del proceso padre es: %i\n",getppid());
    
    return 0;
}