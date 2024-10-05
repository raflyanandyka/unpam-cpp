#include <iostream>

using namespace std;

int main() {
	int nilai;
	
	cout << "Masukkan nilai: "; cin >> nilai;
	
	switch(nilai) {
		case 1:
			cout << "Anda memasukkan nilai 1" << endl;
			break;
		
		case 2:
			cout << "Anda memasukkan nilai 2" << endl;
			break;
		
		case 3:
			cout << "Anda memasukkan nilai 3" << endl;
			break;
		
		default:
			cout << "Silahkan masukkan nilai 1 - 3" << endl;
	}
}
