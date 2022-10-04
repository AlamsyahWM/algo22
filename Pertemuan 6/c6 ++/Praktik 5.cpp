#include <iostream>
using namespace std;

#define MAX 5
main () {
	int i = 0;
	while (i < MAX) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout<<endl; i++;
	}
	return 0;
}
