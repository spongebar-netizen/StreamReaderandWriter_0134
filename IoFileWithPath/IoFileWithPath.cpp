#include<fstream>
#include<iostream>
#include<string>
using namespace std;


int main() {
	string baris;
	string Namafile;

	cout << "Masukkan Nama File : ";
	cin >> Namafile;

	ofstream outfile;

	outfile.open(Namafile + ".txt", ios::out);

	cout << ">= menulis file,\'q\ untuk keluar" << endl;

	while (true) {
		cout << "-";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
}