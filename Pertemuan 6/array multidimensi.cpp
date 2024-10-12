#include <iostream>

using namespace std;

int main() {
	int data[5];
	
	for (int i = 0; i < 5; i++) {
		cout << "Masukkan data ke " << i << ": "; cin >> data[i];
	}
	
	cout << "Menampilkan data dalam array" << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << data[i] << " ";
	}
}
