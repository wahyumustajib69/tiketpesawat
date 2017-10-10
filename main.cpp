#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float x,y,hasil,pilih;
	
	system("cls");
	cout<<"\t\t\t ===========================\n"<<endl;
	cout<<"\t\t\t = KALKULATOR PI PO LON DO =\n"<<endl<<endl;
	cout<<"\t\t\t ===========================\n"<<endl;
	
	kalkulator:
	//operator perhitungan
	cout<<"OPERATOR PERHITUNGAN : "<<endl;
	string jumlah="(1) PENJUMLAHAN (+)";
	cout<<jumlah<<endl;
	string pengurangan="(2) PENGURANGAN (-)";
	cout<<pengurangan<<endl;
	string perkalian="(3) PERKALIAN (*)";
	cout<<perkalian<<endl;
	string pembagian="(4) PEMBAGIAN (/)";
	cout<<pembagian<<endl;
	
	//mulai hitungan
	cout<<"MASUKKAN ANGKA PERTAMA 		: ";
	cin>>x;
	cout<<"MASUKKAN ANGKA KEDUA 		: ";
	cin>>y;
	
	int z;
	cout<<"PILIH OPERATOR PERHITUNGAN 	: ";
	cin>>z;
	
	if(z==1)
	{
		hasil=x+y;
		cout<<"HASIL PENJUMLAHAN		: "<<hasil<<endl;
	}
	else if(z==2)
	{
		hasil=x-y;
		cout<<"HASIL PENGURANGAN		: "<<hasil<<endl;	
	}
	else if(z==3)
	{
		hasil=x*y;
		cout<<"HASIL PERKALIAN			: "<<hasil<<endl;
	}
	else if(z==4)
	{
		hasil=x/y;
		cout<<"HASIL PEMBAGIAN			: "<<hasil<<endl;
	}
	cout<<"====================================================\n";
	cout<<"Coba Lagi[1]"<<endl;
	cout<<"Keluar [2]"<<endl;
	cout<<"====================================================\n";
	
	cout<<"Masukkan Pilihan : "; cin>>pilih;
	if (pilih==1){
		goto kalkulator;
	}
	if (pilih==2){
		system("cls");
	}
	cout<<"====================================================";
	system("pause");
}




