#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main()
{
	
	
	
	int n_absen,n_kuis,n_praktek,n_UTS,n_UAS;
	float t_absen,t_kuis,t_praktek,t_UTS,t_UAS,total;

	
	printf( "Entry Absen :");
	scanf("%i",&n_absen);
	printf("Entry Kuis :");
	scanf("%i",&n_kuis);
	printf("Entry Praktek:");
	scanf("%i",&n_praktek);
	printf("Entry UTS :");
	scanf("%i",&n_UTS);
	printf("Entry UAS :");
	scanf("%i",&n_UAS);
	

	
	t_absen=n_absen*0.1;
	printf("\n 					Nilai absen yang didapat selama ini :%f",t_absen,"\n");
	t_kuis=n_kuis*0.2;
	printf("\n 					Nilai kuis yang didapat selama ini :%f" ,t_kuis,"\n");
	t_praktek=n_praktek*0.2;
	printf("\n 					Nilai Praktek yang didapat selama ini :%f",t_praktek,"\n");
	t_UTS=n_UTS*0.25;
	printf("\n 					Nilai UTS yang didapat selama ini :%f", t_UTS,"\n");
	t_UAS=n_UAS*0.25;
	printf("\n 					Nilai UAS yang didapat selama ini :%f",t_UAS,"\n");
	total=t_absen+t_kuis+t_praktek+t_UTS+t_UAS;
	
	
	
	
	
	if((n_absen<64)||(n_kuis==0)||(n_praktek==0)||(n_UTS==0)||(n_UAS==0))
	{
	printf("\n\n Anda tidak lulus");
}else if(total>=85) {

	printf ("\n\n========================================================================================");
	printf("\n Total Rata-Rata Nilai Anda = %f",total);
	printf("	Anda dinyatakan lulus dengan nilai A");
}else if ((total>=65)&&(total<85)){
	
	printf ("\n\n======================================================================================");
	printf("\n Total Rata-Rata Nilai Anda = %f",total);
	printf ("	Anda dinyatakan lulus dengan nilai B");
}else if((total>=55)&&(total<65)){
	
	printf ("\n\n======================================================================================");
	printf("\n Total Rata-Rata Nilai Anda = %f",total);
	printf("	Anda dinyatakan lulus dengan nilai C");
}else{
	printf ("\n\n======================================================================================");
	printf("\n Total Rata-Rata Nilai Anda = %f",total);
	printf("	Anda dinyatakan tidak lulus");

}
	
	
	
getch();	
	
	
}
