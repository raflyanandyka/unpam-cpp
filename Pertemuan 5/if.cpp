#include <iostream>

using namespace std;

int main() {
	int nilai;
	
	cout << "Masukkan nilai: "; cin >> nilai;
	
	if(nilai >= 50) {
		cout << "Range nilai yang anda masukkan 50 - 100" << endl;
	} else {
		cout << "Range nilai yang anda masukkan 1 - 49" << endl;
	}
}
