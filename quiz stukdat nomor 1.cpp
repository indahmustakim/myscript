#include <stdio.h>
#include <stdlib.h>

using namespace std ;

void menu1()
{
float A,B,Hasil;
printf("*Penjumlahan*\n");
printf("*Masukan Nilai A:");
scanf("%f",&A);

printf("*Masukan Nilai B:");
scanf("%f",&B);

Hasil=A+B;
printf("Nilai Hasil=%f\n",Hasil);
}

void menu2()
{
float A,B,Hasil;
printf("*Pengurangan*\n");
printf("*Masukan Nilai A:");
scanf("%f",&A);

printf("*Masukan Nilai B:");
scanf("%f",&B);

Hasil=A-B;
printf("Nilai Hasil=%f\n",Hasil);
}

void menu3()
{
float A,B,Hasil;
printf("*Perkalian*\n");
printf("*Masukan Nilai A:");
scanf("%f",&A);

printf("*Masukan Nilai B:");
scanf("%f",&B);

Hasil=A*B;
printf("Nilai Hasil=%f\n",Hasil);
}

void menu4()
{
float A,B,Hasil;
printf("*Pembagian*\n");
printf("*Masukan Nilai A:");
scanf("%f",&A);

printf("*Masukan Nilai B:");
scanf("%f",&B);

Hasil=A/B;
printf("Nilai Hasil=%f\n",Hasil);
}


int main()
{
	float A,B,HASIL,Pilihan,Data;
	
	printf("*****KALKULATOR SEDERHANA **\n");
	printf("****Menu Pilihan**\n");
	printf("1.Penjumlahan\n");
	printf("2.Pengurangan\n");
	printf("3.Perkalian\n");
	printf("4.Pembagian \n");
	printf("Masukan Pilahan Anda :");
	scanf("%f",&Pilihan);
	if(Pilihan==1)
	{
		menu1();
	}else if(Pilihan==2){
		menu2();
	}else if(Pilihan==3){
		menu3();
		
	}else if(Pilihan==4){
		menu4();
	}else{
		printf("===================== Pilihan Anda Salah BOS !!!!! =================\n\n\n\n\n\n\n");
		return main();
	}
	return 0;
}

