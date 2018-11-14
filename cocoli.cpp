#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
	system("cls");
	system("color b");

	cout << " + + - - - - - TUGAS ARRAY MATRIKS ORDO 3 x 4 - - - - - + + ";

	cout << "\n\nNIM              : 41517120073";
	cout << "\nNama             : Muhammad Dwi Sulistyo Pramono";
	cout << "\nJurusan/Fakultas : Teknik Informatika/Fakultas Ilmu Komputer";
	cout << "\nMata Kuliah      : Struktur Data";

	int x[4][4], a, b;

	cout << "\n\n\nSilahkan inputkan bilangan untuk membuat MATRIKS ORDO 3 x 4";
	cout << "\n\n";

	for (a = 0; a < 4; a++) {
		for (b = 0; b < 4; b++) {
			cout << "Input Baris " << (a + 1) << ", Kolom " << (b + 1) << " = ";
			cin >> x[a][b];
		}
		cout << "\n";
	}

	cout << "\n + - - - - MATRIKS 4 x 4 - - - - + ";
	cout << "\n\n";

	for (a = 0; a < 4; a++) {
		for (b = 0; b < 4; b++){
			cout << setw(7) << x[a][b];
		}
		cout << "\n";
	}
	//_getch(); //saya pakai MsVisualStudio2013
	getch();
	main();
}
