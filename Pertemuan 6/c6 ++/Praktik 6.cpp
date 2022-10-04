#include <iostream>
using namespace std;

#define MAX 5
main () {
	int i = 0;
	cobalagi:
	cout<<"masukkan angka: "; cin>>i;
	if(i != 5) {
		goto cobalagi;
	}
	return 0;
}
