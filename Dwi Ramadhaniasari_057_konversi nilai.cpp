#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	

	string name,nim;
	int nilai;
	
	cout<<"\tKONVERSI NILAI SISWA";
	cout<<"\n";
	cout<<"\nMASUKAN NAMA 	= ";
	getline(cin,name);
	cout<<"\nMASUKAN NIM 	= ";
	cin>>nim;
	cout<<"\nMASUKAN NILAI 	= ";
	cin>>nilai;
	
	if(nilai>=80 && nilai<=100){
		cout<<"\nAnda Mendapat Nilai A";
	}else if(nilai>=65 && nilai<=79){
		cout<<"\nAnda Mendapatkan Nilai B";
	}else if(nilai>=50 && nilai<=64){
		cout<<"\nAnda Mendapatkan Nilai C";
	}else if(nilai>=35 && nilai<=49){
		cout<"\nAnda Mendapatkan Nilai D";
	}else if(nilai>=0 && nilai<=34){
		cout<<"\nAnda Mendapatkan Nilai E";
	}else {
		cout<<"\nNilai yang anda masukan salah";
	}
	
	return 0;
}
