#include <iostream>
using namespace std;

int main(){
	int tahun;
	
	cout<<"Perhitungan Tahu Kabisat";
	cout<<"\nMasukan Tahun = ";cin>>tahun;
	cout<<"Hasil Perhitungan Menunjukan Bahwa Tahun "<<tahun;
	if(tahun%4==0){
		cout<<"Merupakan Tahun Kabisat";
	} else {
		cout<<"Bukan Tahun Kabbisat";
	}
		return 0;
}

