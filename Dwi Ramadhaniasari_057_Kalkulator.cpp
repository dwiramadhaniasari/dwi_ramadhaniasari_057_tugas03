#include<iostream>
using namespace std;

int main(){
		int konversi, A, B;
		float hasil;
		
		cout<<"\tPROGRAM KALKULOR";
		cout<<"\nPilih Bentuk Konversi";
		cout<<"\n-Penjumlahan = 1\n-Pengurangan = 2\n-Perkalian = 3\n-Pembagian = 4\n-Modulo =5";
		cout<<"\nKOnversi yang anda inginkan (DALAM BENTUK ANGKA) = ";
		cin>>konversi;
		
		cout<<"\nMasukan Nilai A = ";
		cin>>A;
		cout<<"\nMasukan Nilai B = ";
		cin>>B;
		
		switch(konversi) {
			case 1:
				hasil = A+B;
				break;
			case 2:
				hasil = A-B;
				break;
			case 3:
				hasil = A*B;
				break;
			case 4:
				hasil=float(A)/B;
				hasil=A/float(B);
				break;
			case 5:
				hasil = A%B;
				break;
			default:
			cout<<"\n";
			cout<<"\n\tPILIHAN KONVERSI TIDAK TERSEDIAH";
		}
		
		cout<<"\nHASIL KONVERSI	= "<<hasil;
		return 0;
}
