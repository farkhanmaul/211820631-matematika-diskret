#include <cstdlib> 
#include <iostream>
#include <string.h> 
#define maks 500
using namespace std; 

class Enkripsi{ 
	public:Enkripsi();
		void enkripsi(); 
		void dekripsi(); 
		void output(); 
	private:
		int key;
		char chiper[maks]; 
		char plain[maks];
		};
Enkripsi::Enkripsi(){ 
	cout << "Masukkan kata : "; 
	cin.getline(chiper,sizeof(chiper));
	cout << "Masukkan key : "; 
	cin >> key;
	cout << endl;
	}
void Enkripsi::enkripsi(){
	for(int i=0;i<strlen(chiper);i+=1){
		cout << " " << chiper[i] << "(" << int(chiper[i]) << ")\t" ;
		chiper[i] = (chiper[i]+key)%128;
		}
	}
void Enkripsi::dekripsi(){
	for(int i=0;i<strlen(chiper);i+=1){
		plain[i] = (chiper[i]-key)%128; 
		chiper[i] = plain[i];
		}
	}
void Enkripsi::output(){
	for(int i=0;i<strlen(chiper);i+=1){ 
		cout<<chiper[i];
		}
	}
int main(int argc, char*argv[]){
	Enkripsi Dekripsi; 
	
	Dekripsi.enkripsi(); 
	cout<<"\n\nSetelah di Enkripsi : "; 
	Dekripsi.output(); 
	
	Dekripsi.dekripsi(); 
	cout<<"\n\nKembali di Dekripsi : "; 
	Dekripsi.output();
	cout<<endl<<endl; 
	system("PAUSE"); 
	return 
	EXIT_SUCCESS;
	}
