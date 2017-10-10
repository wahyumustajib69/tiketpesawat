#include<iostream>
#include<conio.h>
#include<windows.h>

main(){
	int kelas,jumlah,total;
	char kodepesawat[3],namapesawat[15],konfir;
	long harga;
	
	awal:
	clrscr();
	
	cout<<"PROGRAM TIKET PESAWAT"<<endl;
	cout<<"JAKARTA - SINGAPORE"<<endl;
	cout<<"====================="<<endl;
	
	cout<<"MASUKKAN KODE PESAWAT [AIS/GRD/LIO] = ";
	cin<<kodepesawat;
	cout<<"KELAS PESAWAT : "<<endl ;
	cout<<"1. EXECUTIVE"<<endl;
	cout<<"2. BISNIS"<<endl;
	cout<<"3. EKONOMI"<<endl;
	cout<<"______________________________________";
	cout<<endl;
	
	cout<<"PILIH KELAS [1/2/3] : ";
	cin>>kelas;
	cout<<end;
	
	if((strcmp(kodepesawat,"ais")==0)||
	(strcmp(kodepesawat,"AIS")==0)){
		strcpy(namapesawat,"AIR ASIA");
		if(kelas==1){
			harga=1500000;
		}
		else if(kelas==2){
			harga=900000;
		}
		else if(kelas==3){
			harga=500000;
		}
		else{
			cout<<"KODE SALAH!!!";
			harga=0;
			exit(0);
		}
	}
		
	else if((strcmp(kodepesawat,"grd")==0)||
	(strcmp(kodepesawat,"GRD")==0)){
		strcpy(namapesawat,"GARUDA INDONESIA");
		if(kelas==1){
			harga=1200000;
		}
		else if(kelas==2){
			harga=800000;
		}
		else if(kelas==3){
			harga=400000;
		}
		else{
			cout<<"KODE SALAH!!";
			harga=0;
			exit(0);
		}
	}	
	
	else if((strcmp(kodepesawat,"lio")==0)||
	(strcmp(kodepesawat,"LIO")==0)){
		strcpy(namapesawat,"LION AIR");
		if(kelas==1){
			harga=1000000;
		}
		else if(kelas==2){
			harga=700000;
		}
		else if(kelas==3){
			harga=300000;
		}
		else{
			cout<<"KODE SALAH!!";
			harga=0;
			exit(0);
		}
	}
	
	else{
		cout<<"KODE SALAH!!!";
		harga=0;
		exit(0);
	}
	
	cout<<"NAMA PESAWAT = "<<namapesawat<<end;
	cout<<"HARGA TIKET	= "<<harga<<endl;
	cout<<"JUMLAH TIKET = ";
	cin>>jumlah;
	total=harga*jumlah;
	cout<<"TOTAL BAYAR	= "<<total<<endl;
	cout<<"_______________"<endl;
	
	cout<<endl;
	cout<<"INPUT LAGI [Y/T]: ";
	cin>>konfir;
	
	if(konfir=='Y'||konfir=='y'){
		goto awal;
	}
	else{
		exit(0);
	}
	getch();
}
