#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT  5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int grade[N_STUDENT];
	int i;
	
	for (i=0;i<N_STUDENT;i++)
		grade[i]=(i+1)*10;
		
	for (i=0;i<N_STUDENT;i++)
	printf("grade[%i]= %i\n",i,grade[i]);
	system("PAUSE");
	return 0;
	
}


/*
int main(int argc, char *argv[]) {
	int grade[N_STUDENT];
	
	grade[0]=10;
	grade[1]=20;
	grade[2]=30;
	grade[3]=40;
	grade[4]=50;

	return 0;
}
*/
