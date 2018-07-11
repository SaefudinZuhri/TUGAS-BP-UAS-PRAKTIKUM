#include <iostream>
#include <conio.h>
using namespace std;
main(){
	
	int tugas,UTS,UAS,NA;
	char g,pil;
	cout<<"Menentukan Nilai Akhir Mahasiswa\n\n";
	cout<<"Masukkan Nilai Tugas Mandiri\t     = ";
	cin>>tugas;
	cout<<"Masukkan Nilai Ujian Tengah Semester = ";
	cin>>UTS;
	cout<<"Masukkan Nilai Ujian Akhir Semester  = ";
	cin>>UAS;
	cout<<endl;
	
	cout<<"==================================="<<endl;
	NA=(tugas*2/10)+(UTS*3/10)+(UAS*5/10);
	if (NA>100){
		cout<<"NilAI YANG ANDA MASUKAN SALAH";
	}
	cout<<"Nilai Tugas Mandiri Anda\t = "<<tugas<<endl;
	cout<<"Nilai Tengah Semester Anda\t = "<<UTS<<endl;
	cout<<"Nilai Akhir Semester Anda\t = "<<UAS<<endl;
	cout<<"Nilai Akhir Anda\t\t = "<<NA<<endl;
	cout<<"==================================\n"<<endl;
	
	if (NA<=100 && NA>=85) {
	cout<<"Grade Anda\t\t\t = A";
	
	}else if (NA<=84 && NA>=75) {
	cout<<"Grade Anda\t\t\t = B";
	
	}else if (NA<=74 && NA>=65) {
    cout<<"Grade Anda\t\t\t = C";
	
	}else if (NA<=64 && NA>=50) {
	cout<<"Grade Anda\t\t\t = D";
	
	}else if (NA<=49 && NA>=0) {
	cout<<"Grade Anda\t\t\t =E";
	}
	else if(NA>100){
		cout<<"Nilai Yang Anda Masukan Salah";
	}
    getch();
}
