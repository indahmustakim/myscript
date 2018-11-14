#include <stdio.h>
#include <conio.h>

using namespace std;

void menu1()
{
float A,B,Hasil;
printf("*Penjumlahan*\n");
printf("*Masukan Nilai A;");
scanf("%f",&A);

printf("*Masukan Nilai B;");
scanf("%f",&B);

Hasil=A+B;
printf("Nilai Hasil=%f\n",Hasil);
}

void menu2()
{
float A,B,Hasil;
printf("*Pengurangan*\n");
printf("*Masukan Nilai A;");
scanf("%f",&A);

printf("*Masukan Nilai B;");
scanf("%f",&B);

Hasil=A-B;
printf("Nilai Hasil=%f\n",Hasil);
}

void menu3()
{
float A,B,Hasil;
printf("*Perkalian*\n");
printf("*Masukan Nilai A;");
scanf("%f",&A);

printf("*Masukan Nilai B;");
scanf("%f",&B);

Hasil=A*B;
printf("Nilai Hasil=%f\n",Hasil);
}

void menu4()
{
float A,B,Hasil;
printf("*Pembagian*\n");
printf("*Masukan Nilai A;");
scanf("%f",&A);

printf("*Masukan Nilai B;");
scanf("%f",&B);

Hasil=A/B;
printf("Nilai Hasil=%f\n",Hasil);
}



	
	main(){
		float hasil,A,B;
		int pilihan;
		
		printf ("======================== KALKULATOR SEDERHANA ==================================\n");
		printf("========================== Pilih Operasi ========================================\n");
		printf ("=                                                                              =\n");
		printf ("=                        1.Penjumlahan                                         =\n");
		printf ("=                        2.Pengurangan                                         =\n");
		printf ("=                        3.Perkalian                                           =\n");
		printf ("=                        4.Pembagian                                           =\n");
		printf("=================================================================================\n");
		
		printf("\n\n                      Masukan Pilihan :");
		scanf("%d",&pilihan);
		if(pilihan==1){
		
		menu1();
	}else if(pilihan==2){
		menu2();
	}else if(pilihan==3){
		menu3();
		
	}else if(pilihan==4){
		menu4();
	}else {
	printf ("PAUSE");
	return 0;
}
getch();
}
