#include <stdio.h>

using namespace std ;
 main ()
 
{
	int i,j;
	int A[3][4];
	for(i=0;i<3;i++)
	{
		for (j=0;j<4;j++){
	
	printf("Masukan data matriks A[%i][%i]:",i,j);
	scanf("%i",&A[i][j]);		
}


	}	for(i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		printf("%6i",A[i][j]);
		printf("\n");
	}
	printf("\n");
}
