#include <iostream>
using namespace std;

main () {
	int angka;
	char jawab;
	
	do {
		cout<<"Masukkan angka : ";
		cin>>angka;
		cout<<"angka "<<angka<<" adalah ";
		cout<<( (angka % 2 == 1) ? "ganjil" : "genap" );
		cout<<endl<<"Coba lagi (Y/T) ?"; cin>>jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	return 0;
}
