#include <iostream>

using namespace std;

struct AlamatDetail {				//digunakan untuk melakukan pendetailan terhadap sebuah data
	string desa;
	string kota;

};

struct Mahasiswa {				//digunakan untuk pemanggilan tipe data
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
}