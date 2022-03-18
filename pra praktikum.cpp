#include<iostream>
using namespace std;
int main(){
	int pilih;
	float bil1,bil2,hasil;
	
	cout<<"\tProgram Kalkulator Sederhana"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Pilihan : "<<endl;
	cout<<"1.Penjumlahan \n2.Pengurangan \n3.Perkalian \n4.Pembagian\n";
	cout<<endl;
	cout<<"Masukkan bilangan pertama = "; cin>>bil1;
	cout<<"Masukkan bilangan kedua = "; cin>>bil2;
	cout<<"Masukkan Pilihan = "; cin>>pilih;
	cout<<endl;
	
	if(pilih==1){
		hasil = bil1 + bil2;
		cout<<bil1<<" + "<<bil2<<" = "<<hasil;
	}
	else if(pilih==2){
		hasil = bil1 - bil2;
		cout<<bil1<<" - "<<bil2<<" = "<<hasil;
	}
	else if(pilih==3){
		hasil = bil1 * bil2;
		cout<<bil1<<" x "<<bil2<<" = "<<hasil;
	}
	else if(pilih==4){
		hasil = bil1 / bil2;
		cout<<bil1<<" : "<<bil2<<" = "<<hasil;
	}
	else{
		cout<<"Pilihan tidak tersedia"<<endl;
	}
	
	return 0;
}

