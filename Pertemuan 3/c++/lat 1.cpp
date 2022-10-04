#include <iostream>
using namespace std;

#define tinggi 10
#define garis "-------------------------"

	int main ()
	{
		const double pi	= 3.14;
		
		double vol,r;
		
		cout<<"mencari volume kerucut";
		cout<<garis;
		
		cout<<"input jari-jari:"; cin>>r;
		
		vol = (pi * r * r * tinggi) / 3;
		
		cout<<"Hasilnya:"<<vol;
		
		return 0;
	}
