#include <iostream>
using namespace std;

main () {
	int a;
	char algi;
	atas:
		cout<<"Masukkan umur: ";cin>>a;
		
		cout<<"Umur anda adalah: "<<a<<endl;
		cout<<"Ulangan lagi (y/t): ";cin>>algi;
		
		if (algi == 'y') {
			goto atas;
		}
	return 0;
}
