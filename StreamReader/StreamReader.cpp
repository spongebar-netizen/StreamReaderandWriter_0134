#include<fstream>
#include<iostream>
#include<string>
using namespace std;


int main() {
	string baris;
	ofstream outfile;

	outfile.open("AgungCina.txt");

	cout << "Menulis File, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q") break;
		outfile << baris << endl;
	}

	outfile.close();


	ifstream infile;

	infile.open("UcupNangid.txt");

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