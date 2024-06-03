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
	outfile.close();

	ifstream infile;
	infile.open(Namafile + ".txt", ios::in);

	cout << endl << ">= Membuka Dan membaca File " << endl;
	if (infile.is_open())
	{
		while (getline(infile, baris))
		{
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "Unable to Open File";
	return 0;
}