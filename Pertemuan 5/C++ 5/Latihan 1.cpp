#include <iostream>
using namespace std;
main () {
	int tugas,uts,uas,total;
	char huruf;
	string nama;
	
	cout<<"Masukkan nama anda: "; cin>>nama;
	cout<<"Nilai tugas: "; cin>>tugas;
	cout<<"Nilai uts: "; cin>>uts;
	cout<<"Nilai uas: "; cin>>uas;
	cout<<"------------------------"<<endl;
	cout<<"Selamat "<<nama<<endl;
	total = (tugas + uts + uas)/3;
	cout<<"Nilai anda: "<<total<<endl;
	if (total <= 20) {
		cout<<"Nilai Huruf: E"<<endl;
		cout<<"Predikat: Kurang"<<endl;
	}
	else if (total <= 40) {
		cout<<"Nilai Huruf: D"<<endl;
		cout<<"Predikat: Kurang Baik"<<endl;
	}
	else if (total <= 60) {
		cout<<"Nilai Huruf: C"<<endl;
		cout<<"Predikat: Cukup"<<endl;
	}
	else if (total <= 80) {
		cout<<"Nilai Huruf: B"<<endl;
		cout<<"Predikat: Baik"<<endl;
	}
	else if (total <=100) {
		cout<<"Nilai huruf: A"<<endl;
		cout<<"Predikat: Sangat Baik"<<endl;
	}
	
	
	
}
