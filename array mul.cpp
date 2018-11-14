#include <stdio.h>
using namespace std;

main()
{
	int total=0;
	int X[5]={15,25,35,45,55};
	int Y[5]={10};
	int Z[5]={15,0,35};
	int j;
	
	for(j=0;j<5;j++)
	{
		total=total+X[j]+Y[j]+Z[j];
		printf("X[%d]=%2d,Y[%d]=%2d,Z[%d]=%2d\n",j,X[j],j,Y[j],j,Z[j]);
		printf("\n Total =%d",total);
		
	}
}
