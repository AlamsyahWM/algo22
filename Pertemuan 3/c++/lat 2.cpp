#include <iostream>
using namespace std;

#define a 100
#define garis "-------------------------"

	int main ()
	{
		const double b	= 0.1;
		
		double tinggi,hasil;
		
		cout<<"mencari berat badan ideal";
		cout<<garis;
		
		cout<<"input tinggi badan:"; cin>>tinggi;
		
		hasil = (tinggi - a) - (tinggi - a) * b;
		
		cout<<"Hasilnya:"<<hasil;
		
		return 0;
	}
