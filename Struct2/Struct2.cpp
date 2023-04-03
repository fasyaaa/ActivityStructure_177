#include <iostream>
#include <string>

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

	cout << "Masukkan nim : ";
	cin >> mhs.nim;
	cout << "Masukkan nama : ";
	cin >> mhs.nim;
	cout << "Alamat : ";
	cout << "\tMasukkan desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tMasukkan kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur : ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nnama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;
	cout << "\numur : " << mhs.umur;

}