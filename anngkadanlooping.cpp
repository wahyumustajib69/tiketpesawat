#include<iostream>
#include<conio.h>

using namespace std;

void main(){
	int pil,angka,a,b,c;
	clrscr();
	cout<<"===== PILIHAN =====\n";
	cout<<"[1] GANJIL GENAP\n";
	cout<<"[2] LOOPING\n";
	cout<<"[3] EXIT\n";
	cout<<"\n";
	
	cout<<"MASUKKAN PILIHAN	: ";cin>>pil;
	switch(pil){
		case 1:
			cout<<"MASUKKAN ANGKA : ";cin>>angka;
			if (angka==0)
				cout<<"NILAI KOSONG";
			else if(angka %2==0)
				cout<<"NILAI GENAP";
			else
				cout<<"ANGKA GANJIL";
				break;
		case 2:
			cout<<"MASUKKAN ANGKA : ";cin>>a;
			c=1;
			for (b=1;b<=a+1;b++){
				cout<<c<<"";
				c=b+c;
			}
			break;
		case 3:
			break;
			default:
				cout<<"TIDAK ADA PILIHAN!!";
	}
	getch();
}
