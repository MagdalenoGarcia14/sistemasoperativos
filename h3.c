#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>


int procesos(int nProc){

int i;
for ( i=1; i<= nProc; i++)
if (fork()==0)
return i;
return 0;
}


int main()
{

int arreglo[1000];
int i,pid,nProc,suma;
int inicio,fin;
int variable;


printf("Escribe el número de procesos que quieres \n");
scanf("%d",&variable);

nProc=variable;

for(i=0; i < 1000; i++)
	arreglo[i]=i+1;
pid = procesos(nProc);

inicio=(pid - 1) * 1000/variable;
fin = inicio + 1000/variable;

if (pid>0)
{

		for(i=inicio; i < fin; i++)
suma += arreglo[i];

printf("Soy el hijo %d con PID %d y la suma de los 100 elementos es %d \n",pid,getpid(),suma);



}

}
