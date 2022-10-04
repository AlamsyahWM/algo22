#include <iostream>
using namespace std;

main () {
	int a,b,total;
	char jawab;
	
	do {
		cout<<"Masukkan angka pertama: ";
		cin>>a;
		cout<<"Masukkan angka kedua: ";
		cin>>b;
		total = a + b;
		cout<<"Hasilnya : "<<total;
		cout<<endl<<"Coba lagi (Y/T) ?"; cin>>jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	return 0;
}
