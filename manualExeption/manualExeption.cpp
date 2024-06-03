#include<iostream>
#include<exception>
#include<array>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY"<< endl;
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		cout << "default pengecualian dieksekusi" << endl;
	}
}