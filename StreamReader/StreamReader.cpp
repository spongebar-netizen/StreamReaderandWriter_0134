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
	}
}