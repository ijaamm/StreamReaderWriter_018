#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "masukan nama file : ";
	cin >> namafile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namafile + ".text", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;
}