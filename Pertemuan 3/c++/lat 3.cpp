#include <iostream>
using namespace std;

#define garis "-------------------------"

	int main ()
	{	
		int kg,cm,usia,cowok,cewek,gender = 0;
		
		cout<<"input berat=";cin>>kg;
		cout<<"input tinggi=";cin>>cm;
		cout<<"input usia=";cin>>usia;
		
		cout<<"Pilih salah satu gender\n1. laki-laki\n2. perempuan"<<endl;
		cout<<"masukan pilihan=";cin>>gender;
		
		if(gender == 1) {
			cowok = (88.4 + 13.4 * kg) + (4.8 * cm) - (5.68 * usia);
			cout<<"hasilnya adalah="<<cowok;
		}
		else if (gender == 2){
			cewek = (447.6 + 9.25 * kg) + (3.10 * cm) - (4.33 * usia);
			cout<<"hasilnya adalah="<<cewek;
		}
		else {
			cout<<"hasilnya adalah= FIX ANTUM ALIEN"<<endl;
		}
		
		return 0;
	}
