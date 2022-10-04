#include <iostream>
using namespace std;

main () {
	int nilai,uts,uas;
	
	cout<<"Nilai uts: "; cin>>uts;
	cout<<"Nilai uas: "; cin>>uas;
	
	nilai = (uts + uas / 2); 
	(nilai >= 60) ?
	(cout<<"lulus") :
	(cout<<"tidak lulus");
	
	return 0;
}
