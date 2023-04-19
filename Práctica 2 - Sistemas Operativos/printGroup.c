#include <stdio.h>
#include <unistd.h>

int main (char argc, char *argv[]){

    printf("El id del grupo actual del proceso es: %i\n",getgid());
    
    return 0;
}