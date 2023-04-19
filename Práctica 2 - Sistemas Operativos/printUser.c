#include <stdio.h>
#include <unistd.h>

int main (char argc, char *argv[]){

    printf("El id de usuario es: %i\n",getuid());
    
    return 0;
}