#include <iostream>
using namespace std;

int main()
{
	string hasil;
	int nilai;
	
	cout<<"Konversi Nilai Angka Ke Nilai Huruf";
	cout<<"\n Masukkan Nilai Angka = ";
	
		switch(nilai){
			case 0 ... 34:
			hasil="nilai E";
			break;
			case 35 ... 49:;
			hasil="nilai D";
			case 50 ... 64:;
			hasil="nilai C";
			break;
			case 65 ... 79:;
			hasil="niali B";
			break;
			case 80 ... 100:;
			hasil="nilai A";
			break;
			
			default:
				cout<<"Nilai Yang Di Inputkan Salah";
				}
				
				cout<<"Hasil konversi = "<<hasil;
				
				return 0;
}
