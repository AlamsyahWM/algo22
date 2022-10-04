#include <iostream>
using namespace std;

main () {
	int a  = 0;
	while ( a < 10) {
		if (a == 7) {
			break;
		}
		cout<<a<<" "; a++;
	}
	
	cout<<endl<<"-------------------------"<<endl;
	for (int i=0; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout<<i<<" ";
	}
	return 0; 
}
