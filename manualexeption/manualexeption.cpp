#include <iostream>
using namespace std;

int main() 
{
	try {
		cout << "selamat belajar di prodi TI umy" << endl;
		throw 0.5; 
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "pengecualian aka di eksekusi" << endl;
	}
	catch (...) {
		cout << "default pengecualian dieksekusi" << endl;
	}

	return 0;
}