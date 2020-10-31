#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int A=0,B,C, Jumlah=0,i,n;
	
	cout<<"Menghitung Deret Bilangan";
	cout<<"............................";
	cout<<"Masukkan Bilangan Awal= ";
	cin>>A;
	cout<<"Masukkan Beda= ";
	cin>>B;
	cout<<"Masukkan Jumlah Sampai Deret Ke-n:";
	cin>>n;
	
	cout<<"deret ke-n"<<n<<":";
	cout<<A<<",";
	Jumlah=Jumlah+A;
	for(i=0; i<n-1; i++){
	    C=A+B;
		A=C;
		cout<<C<<",";
		Jumlah=Jumlah+C;
}
	cout<<"\nJumlah Deret Ke-"<<n<<":";
	cout<<Jumlah;
	
	getch();
	return 0;}
