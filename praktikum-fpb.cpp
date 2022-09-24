#include <iostream>
using namespace std;

int FPB(int m,int n){
	if(m==0) 
		return n;
	else if(m<n) 
		return FPB(n,m);
	else 
		return FPB(m%n,n);
}
int main(){     
	int x, y;
    cout<<"Faktor Persekutuan Terbesar\n\n";
    cout<<"Masukan Bilangan 1 : ";cin>>x;
    cout<<"Masukan Bilangan 2 : ";cin>>y;
    cout<<"FPB "<<x<<" dan "<<y<< " : "<<FPB(x,y);
}
