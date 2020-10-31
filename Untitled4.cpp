#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int A,B,C,Un,Sn, Jumlah=0,i,n;
	
	cout<<"Menghitung Deret Bilangan";
	cout<<"............................";
	cout<<"Masukkan Bilangan Awal= ";
	cin>>A;
	cout<<"Masukkan Rasio= ";
	cin>>B;
	cout<<"Masukkan Jumlah Sampai Deret Ke-n:";
	cin>>n;
	
	cout<<"deret ke-n"<<n<<":";
	cout<<A<<",";
	Jumlah=Jumlah+A;
	for(i=0; i<n-1; i++){
		C=n-1
	    ;Un=A+C*B
		;Sn=n/2*A+Un
		;cout<<Sn<<",";
}
	cout<<"\nJumlah Deret Ke-"<<n<<":";
	cout<<Jumlah;
	
	getch();
	return 0;}
