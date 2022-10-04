#include <iostream>
using namespace std;

main () {
	int nilai = 1;
	while (nilai % 2 != 0) {
		cout<<"masukkan bilangan genap";
		cin>>nilai;
	}
	cout<<"angka "<<nilai<<" termasuk bilangan genap";
	return 0;
}
