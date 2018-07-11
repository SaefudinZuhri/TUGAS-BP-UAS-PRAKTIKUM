#include <iostream> 
#include <conio.h> 

using namespace std;

struct fullname{
	string namaDepan;
	string namaBelakang;
};

struct mhs{ 
	fullname nama;
	string nim;  
	float nUts; 
	float nUas;
	float nAkhir;
	string gradeNilai;
}
mhs[100];

int main(){
	float ulang;
	int banyakmahasiswa;
	
	
	do{
		
	system("CLS");
	system("color 1");
	
	
	cout << "\n\t*******************************";
	cout << "\n\t*   UTS  Prkatikum Data       *";
	cout << "\n\t*******************************";
	cout << "\n\t Saefudin Zuhri";	 
	
	cout <<"\n\n\t Masukkan Jumlah Mahasiswa : ";
	cin >> banyakmahasiswa;
	
	for(int i=0; i<banyakmahasiswa; i++ ){
		cin.get();
		cout <<"\n *********Data Mahasiswa ke- "<<i+1<<" *********";
		cout <<"\n Nama Depan : "; getline (cin, mhs[i].nama.namaDepan);
		cout <<"\n Nama Belakang : ";getline (cin, mhs[i].nama.namaBelakang);
		cout <<"\n NIM	: "; cin >> mhs[i].nim;
		cout <<"\n Nilai UTS : "; cin >> mhs[i].nUts;
		cout <<"\n Nilai UAS : "; cin >> mhs[i].nUas;
		mhs[i].nAkhir=(mhs[i].nUts + mhs[i].nUas)/2;
	}
	
	for(int i=0; i<banyakmahasiswa; i++){
		cout <<"\n ******** Data Mahasiswa ke- "<<i+1<<" ********";
		cout <<"\n Nama Depan     : "		<< mhs[i].nama.namaDepan;
		cout <<"\n Nama Belakang  : "	<< mhs[i].nama.namaBelakang;
		cout <<"\n NIM            : "				<< mhs[i].nim; 
		cout <<"\n Nilai UTS      : " 		<< mhs[i].nUts;
		cout <<"\n Nilai UAS      : " 		<< mhs[i].nUas;
		cout <<"\n Nilai Akhir    :"		<< mhs[i].nAkhir;
		cout <<"\n Keterangan     : ";
		
		if(mhs[i].nAkhir<=100,mhs[i].nAkhir>=80){
			cout<<"A"<<endl;
		}
		else if(mhs[i].nAkhir<=79,mhs[i].nAkhir>=60){
			cout<<"B"<<endl;
		}
		else if(mhs[i].nAkhir<=59,mhs[i].nAkhir>=40){
			cout<<"C"<<endl;
		}
		else if(mhs[i].nAkhir<=39,mhs[i].nAkhir>=20){
			cout<<"D"<<endl;
		}
		else if(mhs[i].nAkhir<=19,mhs[i].nAkhir>=0){
			cout<<"E"<<endl;
		}
	}
	
	cout<<endl;
	cout<<"\n\t Ingin Mengulang Kembali?"<<endl;
	cout<<"\n\t 1. ULangi.";
	cout<<"\n\t 2. Exit.";
	cout<<"\n\t Masukan pilihan: ";
	cin>>ulang;
	cout<<"\n******************************************************"<<endl;
	}
	while(ulang==1);
	
getch();
}

