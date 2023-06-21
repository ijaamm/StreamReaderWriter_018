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
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	//unlisted loop untuk menulis 
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari baris ke dalam file
		outfile << baris << endl;
	}

	//selesai dalam menulis sekarang tutup file nya
	outfile.close();

	//membuka file dalam mode membaca 
	ifstream infile;
	//menunjuk ke sebuah file 
	infile.open(namafile + ".txt", ios::out);

	cout << endl << ">= membuka dan membaca file" << endl;

