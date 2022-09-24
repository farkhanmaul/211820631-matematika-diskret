#include <iostream> 
#include <conio.h>
using namespace std;

main(){
	int input,hitung=0,i=1,b=2;
	cout<<"Inputkan Angka = ";
	cin>>input; 
	if (b==2){
		cout<<b<<" "; 
		b++;
		i++;
		}
	while (i<=input){
		for (int z=2;z<b;z++){
			if (b%z==0){
				hitung++;
				}
			}
		if (hitung==0){
			cout<<b<<" "; 
			i++;
			b++;
			}
		if (hitung>0){
			b++;hitung=0;
			}
		}
	getch();
	}
