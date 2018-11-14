#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,c,d,e,total,max;
	printf("entry kehadiran :");scanf("%f",&a);
	printf("entry uts :");scanf("%f",&b);
	printf("entry uas :");scanf("%f",&c);
	printf("entry tugas :");scanf("%f",&d);
	printf("entry kuis :");scanf("%f",&e);
	total = (a*10/100)+(b*25/100)+(c*25/100)+(d*20/100)+(e*20/100);
	printf ("\n total adalah %f, total");
	if (total>=81 && total<=100)
	printf ("nilai anda a :");
	else
	if (total>=71 && total<=80)
	printf ("nilai anda b :");
	else
	if (total>=61 && total<=70)
	printf ("nilai anda c :");
	else
	if (total>=51 && total<=60)
	printf ("nilai anda d :");
	else
	if (total<51)
	printf ("nilai anda e :");
	else
	printf ("\n Anda LULUS!!!");
	if ((a==0)||(b==0)||(c==0)||(d==0)||(e<51))
	printf ("\n Anda Tidak LULUS!!!");
	getch;
}
