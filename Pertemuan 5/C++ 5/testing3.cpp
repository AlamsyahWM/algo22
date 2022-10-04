#include <iostream>
using namespace std;
main () {
	int tb,inap,total,h,diskon;
	char jenis,srpn;
	string nama,km,bonus;
	
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
		case '1': km="VVIP"; h=1000000; break;
		case '2': km="VIP"; h=750000; break;
		case '3': km="Standart"; h=500000; break;
		case '4': km="Melati"; h=250000; break;
	}
	cout<<"Kamar anda "<<km<<endl;
	
	switch (srpn) {
		case 'y': bonus="dengan sarapan";
		diskon= 50000;
		total = (h * inap) + (inap * diskon);
		case 'n': bonus="tanpa sarapan";
		total = (h * inap);
		break;
	}
	cout<<"Lama menginap "<<inap<<" malam "<<bonus<<endl;
	cout<<"Total bayar:"<<total;
}
