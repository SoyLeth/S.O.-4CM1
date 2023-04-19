#include <stdio.h>
#include <unistd.h>

int main (char argc, char *argv[]){

    printf("El id de la sesion actual es: %i\n",getsid(getpid()));
    
    return 0;
}