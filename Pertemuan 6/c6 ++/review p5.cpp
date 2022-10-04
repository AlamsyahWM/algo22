#include <iostream>
using namespace std;

int main() {
	int pil; 
	cout<<"pil= "; cin>>pil;
	switch (pil) {
		case 1: cout<<"algoritma"<<endl;
				cout<<"dan"<<endl;
				cout<<"Pemrogramman"<<endl;
				break;
		case 2: cout<<"Matematika"<<endl;
				cout<<"Diskrit"<<endl;
				break;
		default: cout<<"bahasa"<<endl;
				 cout<<"inggris"<<endl;
	}
}
