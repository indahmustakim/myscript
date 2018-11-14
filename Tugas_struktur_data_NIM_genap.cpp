#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	
	int Elemen [3] [3];
	int i,j;
	
		cout<<"Perintah Array 2 Dimensi "<<endl;
		cout<<"========================="<<endl;
		cout<<"Mengisi elemen Array dan Mencetak"<<endl;
		
		
		for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" Masukan angka pada baris ke "<< i <<" kolom ke "<< j << " : ";
				cin>>Elemen [i] [j];
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<"Tampilkan isi elemen array"<<endl;
			for (i=0;i<3;i++)
			{
				for(j=0; j<3; j++)
				cout<<Elemen [i] [j]<<" ";
				cout<<endl;
			}
			getch();
}
