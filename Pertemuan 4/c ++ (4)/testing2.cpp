#include <iostream>
using namespace std;

int main () {
	string matkul,nama,a;
	int umur;
	
	cout<<"masukkan nama anda:"; getline(cin,nama);
	cout<<"masukkan umur anda:"; cin>>umur;
	cout<<"masukkan prodi anda:"; cin>>a;
	cout<<"Nama mata kuliah yang paling disukai:"; cin>>matkul;
	cout<<"----------------------------"<<endl;
	cout<<"saya "<<nama<<" umur "<<umur<<" tahun dari prodi "<<a<<" dengan ini menyatakan. suka sekali dengan mata kuliah "<<matkul;
	
	return 0;
}

