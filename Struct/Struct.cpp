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

	mhs1.nim = "20220140177";		//Data 1 langsung terisi
	mhs1.nama = "Fasya";
	mhs1.alamat = "Solo";
	mhs1.umur = 20;

	cout << "Masukkan nim : ";		//Data 2 yang dapat mengisi sendiri
	cin >> mhs2.nim;
	cout << "Masukkan nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur : ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;			//Display data 1
	cout << "\nnama : " << mhs1.nama;
	cout << "\nalamat : " << mhs1.alamat;
	cout << "\numur : " << mhs1.umur;

	cout << "\nNim : " << mhs2.nim;			//Display data 2
	cout << "\nnama : " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;
	cout << "\numur : " << mhs2.umur;
}