#include <iostream>
using namespace std;

main () {
	int pil; 
	float a,b,c;
	cout<<"kalkulator canggih"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
	switch (pil) {
		case 1: cout<<"Masukkan angka pertama: "; cin>>a;
		cout<<"Masukkan angka kedua: "; cin>>b;
		c = a + b;
		cout<<"Hasil penjumlahan: "<<c<<endl;
		break;
		
		case 2: cout<<"Masukkan angka pertama: "; cin>>a;
		cout<<"Masukkan angka kedua: "; cin>>b;
		c = a - b; //disoal buatnya tambah
		cout<<"Hasil penjumlahan: "<<c<<endl;
		default: cout<<"Masih tahap pengembangan. pilih 1 atau 2"<<endl;
		break;
	}
}
