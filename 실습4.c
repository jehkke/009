#include <stdio.h>
#include <stdlib.h>

#define SIZE     4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void square_array(int a[], int size) // function define
{
	int i;
	
	for(i=0;i<size;i++)
		a[i]=a[i]*a[i];
}

void print_array(int a[],int size)
{
	int i;
	
	for(i=0;i<size;i++)
		printf("%3d",a[i]);
	printf("\n");
	  
}

int main(int argc, char *argv[]) { //function call
	
	int list[SIZE]={1,2,3,4};
	
	print_array(list,SIZE);  //1,2,3,4 print
	square_array(list,SIZE); // square gogo (baeyall is call by reference!) 
	print_array(list,SIZE); // 1,4,9,16 print
	system("PAUSE");
	return 0;
	
}



