#include <iostream>
using namespace std;

int main() {
	
	string nama, nik;
	int jenis_k, status_p, kendaraan, gaji_p, uang_m, gaji_k, gaji_b, pajak, tunjangan, transport;
	
	cout<<"\tPROGRAM MENGHITUNG GAJI KARYAWAN";
	cout<<"\n";
	
	cout<<"\nMasukkan nama anda	= ";
	getline(cin,nama);
	cout<<"Masukkan no NIK anda	= ";
	cin>>nik;
	
	cout<<"\n";
	cout<<"Masukkan jenis kelamin anda (1=laki=laki dan 0=perempuan)	= ";
	cin>>jenis_k;
	cout<<"Masukkan status pernikahan anda (1=menikah dan 0=sigle)		= ";
	cin>>status_p;
	cout<<"Masukkan jenis kendaraan anda (1=mobil dan 0=motor)		= ";
	cin>>kendaraan;
	
	cout<<"\n";
	cout<<"Besar gaji pokok anda	= Rp.";
	cin>>gaji_p;
	cout<<"Besar uang makan anda	= Rp.";
	cin>>uang_m;
	
	//Tunjangan
	if (jenis_k==1 && status_p==1){
		tunjangan	= 500;
	}else{
	}
	cout<<"\nBesar uang tunjangan anda	= Rp."<<tunjangan;
	
	//Transport
	if(kendaraan==1){
		transport	= 1000;
	}else if(kendaraan==0){
		transport	=500;
	}else{
	}
	cout<<"\nBesar uang transport anda	= Rp."<<transport;
	cout<<"\n";
	
	//gaji kotor
	gaji_k=gaji_p+uang_m+tunjangan+transport;
	cout<<"\nGaji kotor anda	= Rp."<<gaji_k;
	
	//pajok
	pajak=0.05*gaji_k;
	cout<<"\nPajak Anda	= Rp."<<pajak;
	cout<<"\n";
	
	//gaji bersih
	gaji_b=gaji_k-pajak;
	cout<<"\nTotal Gaji Bersih Anda	= Rp."<<gaji_b;
	
	return 0;
}
