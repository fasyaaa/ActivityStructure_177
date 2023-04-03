#include <iostream>

using namespace std;

struct Mahasiswa {				//digunakan untuk pemanggilan tipe data
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;		//Memasukkan data agar bisa dipanggil

	mhs1.nim = "20220140177";
	mhs1.nama = "Fasya";
	mhs1.alamat = "Solo";
	mhs1.umur = 20;

	cout << "Masukkan nim : ";
	cin >> mhs2.nim;
	cout << "Masukkan nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur : ";
	cin >> mhs2.umur;


}