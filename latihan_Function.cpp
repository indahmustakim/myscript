#include <stdio.h>
#include <conio.h>
#include<iostream>

using namespace std;

int nilai(int kuis,int uts,int uas){
	int R=(kuis+uts+uas)/3;
	return R;
}


int piramid (int t){

int x,i=1;
	while(i>=t)
{
	x=1;
	while(x<=t)
{
		printf("%i ",x);
		x=x+1;
		
}
printf("\n");
i=i++;
}
}

main()
{
	int k,u,a,r,t;
	printf("Masukan Nilai Kuis :");
	scanf("%d",&k);
	
	printf("\nMasukan Nilai uts :");
	scanf("%d",&u);
	
	
	printf("\nMasukan Nilai uas :");
	scanf("%d",&a);
	r=nilai(k,u,a);
	printf("Nilai Rata-Rata yang anda dapat = %d",r);
	
	printf("\n");
	printf("=============================================== \n");
	printf("Masukan Tinggi Piramid :");
	scanf("%d",&t);
	piramid(t);
	
	getch();
}

