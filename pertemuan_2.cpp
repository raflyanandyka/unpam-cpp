#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int pilihan, harga, jumlah;
	
	cout << "[1] Makanan" << endl;
	cout << "[2] Minuman" << endl;
	cout << "[3] Keluar" << endl;
	cout << "Silahkan memilih menu: " << endl; cin >> pilihan;
	
	switch(pilihan) {
		case 1:
			system("cls");
			
			cout << "[1] Nasi Goreng" << endl;
			cout << "[2] Ayam Goreng" << endl;
			cout << "Silahkan memilih menu: " << endl; cin >> pilihan;
			cout << "Masukkan jumlah makanan yang dipesan: " << endl; cin >> jumlah;
			
			if(pilihan == 1) {
				harga = 15000;
			} else {
				harga = 5000;
			}
			
			cout << "Total yang harus dibayar adalah: " << harga * jumlah << endl;
			
			break;
		
		case 2:
			system("cls");
			
			cout << "[1] Teh Manis" << endl;
			cout << "[2] Kopi" << endl;
			cout << "Silahkan memilih menu: " << endl; cin >> pilihan;
			cout << "Masukkan jumlah minuman yang dipesan: " << endl; cin >> jumlah;
			
			if(pilihan == 1) {
				harga = 5000;
			} else {
				harga = 3000;
			}
			
			cout << "Total yang harus dibayar adalah: " << harga * jumlah << endl;
			
			break;
		
		case 3:
			break;
		
		default:
			cout << "default" << endl;
			break;
	}
}
