#include <stdio.h>
#include <conio.h>

using namespace std ;

main (){
	int n_absen,n_kuis,n_tugas,n_uts,n_uas;
	float t_absen,t_kuis,t_tugas,t_uts,t_uas,total;
	
	printf(" Masukan Nilai Absen :");
	scanf("%d",&n_absen);
	printf(" Masukan Nilai kuis :");
	scanf("%d",&n_kuis);
	printf(" Masukan Nilai tugas :");
	scanf("%d",&n_tugas);
	printf(" Masukan Nilai uts :");
	scanf("%d",&n_uts);
	printf(" Masukan Nilai uas :");
	scanf("%d",&n_uas);
	
	t_absen=0.1*n_absen;
	t_kuis=0.2*n_kuis;
	t_tugas=0.2*n_tugas;
	t_uts=0.25*n_uts;
	t_uas=0.25*n_uas;
	total = t_absen+t_kuis+t_tugas+t_uts+t_uas;
	
	if((total>=81)&&(n_absen>=65)&&(n_kuis!=0)&&(n_tugas!=0)&&(n_uts!=0)&&(n_uas!=0)){
	printf("Anda lulus dengan predikat A");
	 printf("\n total nilai anda =%f ",total);
}else if(total>=71 && total<=80&&n_absen>=65&&n_kuis!=0&&n_tugas!=0&&n_uts!=0&&n_uas!=0){
	 printf("Anda lulus dengan nilai B");
	 printf("\ntotal nilai anda =%f",total);
   }else if(total>=61 && total<=70 && n_absen>=65&&n_kuis!=0&&n_tugas!=0&&n_uts!=0&&n_uas!=0){
	 printf("Anda lulus dengan nilai c");
	 printf("\ntotal nilai anda =%f",total);
		}else if(total>=51&&total<=60&&n_absen>=65&&n_kuis!=0&&n_tugas!=0&&n_uts!=0&&n_uas!=0){
	 printf("Anda lulus dengan nilai D ");
	 printf("\ntotal nilai anda =%f",total);
	 	} else if(total<51&&n_absen>=65&&n_kuis!=0&&n_tugas!=0&&n_uts!=0&&n_uas!=0){
	 printf(" nilai anda  E");
}else {printf("anda tidak lulus");
}
}

