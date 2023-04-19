#include <stdio.h>
#include <unistd.h>

int main (char argc, char *argv[]){

    printf("El pid del proceso es: %i\n",getpid());
    
    return 0;
}