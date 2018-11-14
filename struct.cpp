#include <iostream>
#include <string>

using 	namespace std;

struct mercubuana {
	string title;
	string kampus;
}fakultas[5];

int main(){
	int mfakultas;
fakultas[0].kampus="Universitas Mercubuana";
fakultas[1].kampus="Universitas Mercubuana";
fakultas[2].kampus="Universitas Mercubuana";
fakultas[3].kampus="Universitas Mercubuana";
fakultas[4].kampus="Universitas Mercubuana";

fakultas[0].title="Fakultas ilmu Komputer";
fakultas[1].title="Fakultas Teknik";
fakultas[2].title="Fakultas Ekonomi dan Bisnis";
fakultas[3].title="Fakultas Seni dan Kreatif";
fakultas[4].title="Fakultas ilmu Komunikasi";
cout<<"Masukan Pilihan anda:";
cin>>mfakultas;

for(int i=0; i<=5;i++){
	if(mfakultas==i){
		cout<<"saya memilih fakultas:"<<fakultas[i-1].title;cout<<" di kampus ";cout <<fakultas[i-1].kampus;
		cout<<"\n";
	}
}
}
