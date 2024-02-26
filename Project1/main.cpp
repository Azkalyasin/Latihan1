#include <iostream>
using namespace std;

int main()
{
	
	while (true) {
		int pilhan;

		cout << "------------------------------" << endl;
		cout << " menu minuman toko kopi saputra" << endl;
		cout << "______________________________" << endl;

		cout << "1.Latte" << endl;
		cout << "2.Americano" << endl;
		cout << "3.Espresso" << endl;
		cout << "4.Cappucinno" << endl;
		cout << "5. Keluar " << endl;
		cout << endl;
		cout << "masukkan pilihan menu: " << endl;
		cin >> pilhan;

		switch (pilhan) {
		case 1:
			cout << "Anda memilih Latte" << endl;
			break;
		case 2:
			cout << "Anda memilih Americano" << endl;
			break;
		case 3:
			cout << "Anda memilih Espresso" << endl;
			break;
		case 4:
			cout << "Anda memilih Cappucinno" << endl;
			break;
		case 5:
			false;
			return 0;
		default:
			cout << "menu yang ada pilih tidak ada di dalam menu" << endl;
		}
		cout << endl;

		
		
	}
	

	cout << "Terima kasih telah memesan" << endl;
	return 0;
}

	

