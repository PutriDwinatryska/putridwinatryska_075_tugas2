#include <iostream>
using namespace std;

int main()
{
	int pilihan;
	float a, b, hasil;
	
	cout<<"KALKULATOR";
	cout<<"1.Penjumlahan\n";
	cout<<"2.Pengurangan\n";
	cout<<"3.Perkalian\n";
	cout<<"4.Pembagian\n";
	cout<<"5.Modulus\n";
	cout<<"Masukan Pilihan Operasi (Angka) = "; cin>>pilihan;
	cout<<"Masukan Bilangan Pertama = "; cin>>a;
	cout<<"Masukan Bilangan Kedua = "; cin>>b;
	
	switch(pilihan){
		case 1:
			hasil=a+b;
			break;
		case 2:
			hasil=a-b;
			break;
		case 3:
			hasil=a*b;
			break;
		case 4:
			hasil=a/b;
			break;
		case 5:
			hasil=int(a)%int(b);
			break;
		default:
		cout<<"Pilihan Operasi Yang Dimasukan Salah\n";
	}
	cout<<"Hasil Operasi = "<<hasil;
	return 0;
}
