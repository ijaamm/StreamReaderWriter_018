#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.text");

	cout << ">= menulis file, \'q\' untuk keluar" << endl;
}