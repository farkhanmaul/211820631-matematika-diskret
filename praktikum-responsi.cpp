#include <iostream>
using namespace std;

int main(){
    int beras, susu, totberas, totsusu, bayar, akhir, diskon, uang;
    cout<<"SELAMAT DATANG DI TOKO"<<endl<<"     SARI RAHAYU"<<endl;
    cout<<"-----------------------"<<endl<<endl;
    cout<<"Harga Beras/kg : 10.000"<<endl;
    cout<<"Harga Susu/liter : 15.000"<<endl;
    cout<<"-----------------------"<<endl<<endl;
    cout<<"Jumlah Beras yang anda beli : ";
    cin>>beras;
    totberas=beras*10000;
    cout<<"Jumlah Susu yang anda beli : ";
    cin>>susu;
    totsusu=susu*15000;
    bayar=totberas+totsusu;
    diskon=bayar*0.10;
	akhir=bayar-diskon;
	cout<<endl<<"-- Selamat anda mendapatkan diskon 10% --"<<endl;
    cout<<endl<<"Jadi total pembayarannya\t= Total Belanja - Diskon"<<endl;
    cout<<endl<<"\t\t\t\t= "<<bayar<<" - "<<diskon<<endl;
    cout<<endl<<"\t\t\t\t= "<<akhir<<endl;
    cout<<"Masukkan Jumlah Uang Bayar : ";
    cin>>uang;
    cout<<"-------------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian Anda : "<<kembalian;
    return 0;
	}
