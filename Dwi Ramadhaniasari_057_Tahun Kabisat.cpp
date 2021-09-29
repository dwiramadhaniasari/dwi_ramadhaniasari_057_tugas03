#include<iostream>
using namespace std;

int main(){
	int tahun;
	
	cout<<"\tKONVERSI TAHUN KABISAT";
	cout<<"\nmasukan tahun =";
	cin>>tahun;
	
	cout<<"\nHasil hitung = ";
	if(tahun %4==0){
	}else if(tahun%4!=0 && tahun%100!=0 && tahun%4==0){
		cout<"\nTahun Kabisat";
	}else{
		cout<<"\nBukan Tahun Kabisat";
	}
	
	return 0;
	
}
