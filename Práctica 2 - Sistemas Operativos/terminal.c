#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main (int argc, char *argv[]){

    int pid, estado,state;
    char comando[20];
    char *const argv2[] = {"prueba","a"};
    char slash[] = {"./"};

    while (strcmp(comando,"EXIT")!=0)
    {   
        printf("\n~$ ");
        scanf("%s",comando);
        
        if (strcmp(comando,"EXIT")== 0){
            exit(0);
        }
        pid = fork();
        
            if (pid==0){
                
                state = execvp(comando,argv2);
                
                if(state== -1){
                    perror("No pudo ejecutarse, el archivo no existe o no es un archivo ejecutable");
                }
                exit(4);

            } else{
                pid=wait(&estado);
            }

            if(WIFEXITED(estado != 4)){
                printf("\nEl proceso hijo no pudo ejecutarse\n");
            }
    }
    return 0;
}