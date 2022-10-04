#include <iostream>
using namespace std;
main () {
	int tb,inap,total;
	char jenis,srpn;
	string nama;
	
	cout<<"Hotel Bahagia"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.00)"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	cout<<"Masukkan nama anda: "; getline(cin,nama);
	cout<<"Masukkan jenis kamar (1-4): "; cin>>jenis;
	cout<<"lama inap: "; cin>>inap;
	cout<<"Dengan sarapan (y/n) 50rb/hr: "; cin>>srpn;
	cout<<"-----------------------------------"<<endl;
	
	cout<<"Terima kasih "<<nama<<endl;
	switch (jenis) {
		case '1': cout<<"Kamar anda VVIP"<<endl; break;
		case '2': cout<<"Kamar anda VIP"<<endl; break;
		case '3': cout<<"Kamar anda Standard"<<endl; break;
		case '4': cout<<"Kamar anda Melati"<<endl; break;
		default : cout<<"Salah input"<<endl; 
	}
	switch (srpn) {
		case 'y': cout<<"Lama menginap "<<inap<<" dengan sarapan"<<endl; break;
		case 'n': cout<<"Lama menginap "<<inap<<" tanpa sarapan"<<endl; break;
		default : cout<<"Salah input"<<endl;
	}
	if (jenis == '1') {
		total = 1000000 * inap;
	} 
	else if (jenis == '2') {
		total = 750000 * inap;
	} 
	else if (jenis == '3') {
		total = 500000 * inap;
	} 
	else if (jenis == '4') {
		total = 250000 * inap;
	}
	
	if (srpn == 'y') {
		tb = total + (50000 * inap);
		cout<<"Total bayar: "<<tb;
	} 
	else if (srpn == 'n') {
		tb = total + 0;
		cout<<"Total bayar: "<<tb;
	}
	return 0;
}
