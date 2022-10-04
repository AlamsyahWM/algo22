#include <iostream>
using namespace std;

int main() {
	string nama,bonus,barang;
	int harga,jumlah,hasil;
	
	cout<<"masukkan nama pelanggan:"; getline(cin,nama);	
	cout<<"masukkan nama barang:"; getline(cin,barang);
	cout<<"masukkan harga barang:"; cin>>harga;
	cout<<"masukkan jumlah beli:"; cin>>jumlah;
	cout<<"--------------------"<<endl;
	
	cout<<"barang yang anda beli adalah "<<barang<<endl;
	cout<<"dengan harga:"<<harga<<endl;
	hasil = harga * jumlah;
	cout<<"total bayar:"<<hasil<<endl;
	(hasil > 50000) ?
	(cout<<"--Bonus payung ") :
	(cout<<"--terima kasih ") ;
	cout<< nama<<"--";
}
