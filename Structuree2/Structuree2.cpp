#include <iostream>
using namespace std;

struct DetailAlamat
{
	string desa;
	string kota;
};


struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int Umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukkan NIM  = ";
	cin >> mhs.NIM;
	cout << "masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukkan Alamat = " << endl;
	cout << "\tMasukkan desa = ";
	cin >> mhs.Alamat.desa;
	cout << "\tMasukkan kota = ";
	cin >> mhs.Alamat.kota;
	cout << "Masukkan Umur = ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama= " << mhs.Nama;
	cout << "\nkota = " << mhs.Alamat.kota;
	cout << "\nDesa = " << mhs.Alamat.desa;
	cout << "\nUmur = " << mhs.Umur;
}