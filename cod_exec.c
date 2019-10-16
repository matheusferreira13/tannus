#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main (int argc, char *argv[]){

	pid_t pid;
	pid = fork();

	int i;


	FILE *arq;

	arq = fopen("arquivo.c", "ls");

	for(i=0; i<=argv; i++){

	printf ("argv %s", argv[i]);

	}

	if (pid < 0){
		
		printf ("3RR0R");

	}

	else if (pid == 0){

		execlp (*arq,"ls", NULL);

	}

	else {
	
		wait (NULL);
		printf ("\t\tPrograma Executado\n");

	}

  }

