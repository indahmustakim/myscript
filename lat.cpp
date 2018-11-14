#include <stdio.h>
using namespace std;

main()
{
	int X[3]= {3,5,7},total=0;
	int j;
	
	for(j=0;j<3;j++)
	total=total+X[j];
	
	printf("Total =%d\n",total);
}
