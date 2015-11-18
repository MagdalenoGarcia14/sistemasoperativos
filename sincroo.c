#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <wait.h>



int procesos(int nProc)
{
	
int i;
	  for(i=1;i<=nProc;i++)
	     
if(fork()==0)
		
return i;
	     
 return 0;
}



int main()
{
 
int pid,i;

 int variable;
 
int status;
 
printf("Ingresa el numero de procesos que deseas crear \n");
 
scanf("%d",&variable);
 
pid = procesos(variable);
 

	

if(pid==0)
	{
	
	for(i=0;i<variable;i++)
	       
 wait(&status);
		

	
	printf("Soy el proceso padre\n");
	
	exit(0);
	}else

	 {
 	    printf("Soy el hijo %d\n",pid);
		exit(0);
 	 }	
     
}
