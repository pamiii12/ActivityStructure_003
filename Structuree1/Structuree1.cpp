#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int Umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukkan NIM  = ";
	cin >> mhs.NIM;
	cout << "masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukkan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukkan Umur = ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama= " << mhs.Nama;
	cout << "\nAlamat = " << mhs.Alamat;
	cout << "\nUmur = " << mhs.Umur;
}