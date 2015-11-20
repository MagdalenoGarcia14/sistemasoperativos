#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <wait.h>

int procesos(int nProc){
int i;
for ( i=1; i<= nProc; i++)
if (fork()==0)
return i;
return 0;
}
int main(){
int n;
int pid;
int lectura;
char c,cadena[10];
int i=0;
FILE *archivo;
n=10;
pid=procesos(n);
		
if (pid>0)
{
	archivo=fopen("hijos.txt","r");
	do{
		i=0;
do{
	c=fgetc(archivo);

	if(c==EOF)
		break;
	cadena[i]=c;
	i++;
}while(c != '\n');
	cadena[i]='\n';
	lectura = atoi(cadena);

	if (pid == lectura )
		printf("ESte es el hijo %d con pid %d Y Hola Mundo  \n", pid,getpid());
}while(c != EOF);
}else{
printf("ESte es el Padre  con pid %d \n", pid);
}
		fclose(archivo);
}
