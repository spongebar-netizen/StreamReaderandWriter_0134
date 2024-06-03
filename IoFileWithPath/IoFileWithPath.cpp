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
