#include <iostream>

using namespace std;

int main() {
	int nilai;
	
	cout << "Masukkan nilai: "; cin >> nilai;
	
	if(nilai >= 60) {
		if (nilai >= 80) {
			cout << "Nilai anda A" << endl;
		} else {
			cout << "Nilai anda B" << endl;
		}
	} else {
		if (nilai >= 40) {
			cout << "Nilai anda C" << endl;
		} else {
			cout << "Nilai anda D" << endl;
		}
	}
	
	return 0;
}
