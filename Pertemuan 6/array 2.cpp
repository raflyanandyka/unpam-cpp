#include <iostream>

using namespace std;

int main() {
	int data[2][3];
	
	cout << "Input Data" << endl;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "data [" << i << "] [" << j << "] : "; cin >> data[i][j];
		}
	}
	 
	cout << "Output Data" << endl;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "data [" << i << "] [" << j << "] : " << data[i][j] << endl;
		}
	}
}
