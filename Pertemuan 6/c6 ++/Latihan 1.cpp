#include <iostream>
using namespace std;

main () {
	int i = 0;
	int a = 0;
	do {
		cout<<i<<" ";i++;
		if (i == 7) {
		break; 
		}
	} while (i < 10); 
	
	cout<<endl<<"=-------------------------------------="<<endl;
	
	while (a < 10){
			if (a % 2 != 0) 
		cout<<a<<" ";a++;
	}
	return 0;
}

	
