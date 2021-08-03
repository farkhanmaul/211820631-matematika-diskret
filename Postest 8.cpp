#include <iostream>
using namespace std;

int n, r, x, hasil, p;
int fak(int value){
	int jumlah = 1;
	for(int i=1; i<=value; i++){
		jumlah = jumlah*i;
		}
	return jumlah;
	}

void kombinasi(int n,int r){
	if(n>r){
		x = n-r;
		hasil = fak(n)/(fak(x)*fak(r));
		cout << "Hasil Kombinasi (" << n << "," << r << ") = " << hasil;
		}
	else{
		cout << "n tidak boleh lebih kecil daripada r";}
	}

void permutasi(int n,int r){
	if(n>r){
		x = n-r;
		hasil = fak(n)/(fak(x));
		cout << "Hasil Permutasi (" << n << "," << r << ") = " << hasil;
		}
	else{
		cout << "n tidak boleh lebih kecil daripada r";}
}

void input(){
	cout << "\tProgram Kombinatorik\n\n";
	cout << "Masukkan nilai n : ";
	cin >> n;
	cout << "Masukkan nilai r : ";
	cin >> r;
	cout << "1. Kombinasi\n";
	cout << "2. Permutasi\n\n";
	cout << "Masukkan pilihan Anda : ";
	cin >> p;
	cout << endl;
	if(p==1)
		kombinasi(n,r);
	if(p==2)
		permutasi(n,r);
	else
		cout << "\n\n--- Program Terhenti ---\n\n";
}

int main(){
	input();
}
