#include <stdio.h>

using namespace std ;
 main ()
 
{
	int i,j;
	int A[3][4];
	int B[3][4];
	
	int C[3][4];
			printf("Input Data Matrik A \n");
	for(i=0;i<3;i++) {
		for (j=0;j<4;j++) {	
			printf("Masukan data matriks A[%i] [%i]:", i, j);
			scanf("%i",&A[i][j]);
		}
	}
	
	for(i=0;i<3;i++) {
		for (j=0;j<4;j++)
			printf("%6i",A[i][j]);
			printf("\n");
	}
	printf("\n");
			printf("\n lanjut input matrik B \n\n\n\n");
	for(i=0;i<3;i++) {
		for (j=0;j<4;j++){
			printf("Masukan data matriks B[%i] [%i]:", i, j);
			scanf("%i",&B[i][j]);
		}
	}	
	
	for(i=0;i<3;i++) {
		for (j=0;j<4;j++)
		printf("%6i",B[i][j]);
		printf("\n");
	}
	
			printf("\n\n\nBerikut Penjumlahan Matrik A + B \n\n\n");
	for(i=0;i<3;i++) {
		for (j=0;j<4;j++)
		printf("%6i",C[i][j]=A[i][j]+B[i][j]);
		printf("\n");
 }
	
	printf("\n");
}
