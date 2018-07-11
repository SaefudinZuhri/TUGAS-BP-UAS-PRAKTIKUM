#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct mahasiswa
{
	char nama[50];
};

mahasiswa ueu;
char esgul1[50], esgul2[50], esgul3[50];

int garis()
{
	for(int i=0; i<80; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int menu()
{
	cout<<"|==========================================|"<<endl;
	cout<<"|============ Data Mahasiswa ==============|"<<endl;
	cout<<"|==========================================|"<<endl;
	cout<<"|==Silahkan pilih kode yang Anda inginkan==|"<<endl;
	cout<<"[1] Input Data"<<endl;
	cout<<"[2] Tambah Data"<<endl;
	cout<<"[3] Lihat Data"<<endl;
	cout<<"[4] Keluar"<<endl;
	cout<<"|========================================|"<<endl;
	cout<<"|Masukkan kode yang Anda pilih [1/2/3/4]:|";

}

int input_data()
{
	cout<<"Masukkan nama file (.txt) : ";
	cin.getline(esgul1,15);
	ofstream simpan (esgul1);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int tambah_data()
{
	cout<<"Masukkan nama file(.txt) : ";
	cin.getline(esgul1,15);
	ofstream simpan (esgul1, ios::app);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int baca_data()
{
	cout<<"Masukkan nama file (.txt): ";
	cin>>esgul1;
	ifstream buka (esgul1);
	if(buka.good())
	{
		while(!buka.eof())
		{
			system("cls");
			while(buka)
			{ 
				buka.getline(ueu.nama,30);	
				cout<<ueu.nama<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ditemukan"<<endl;
	getch();
}

int gabung_data()
{
	cout<<"Masukkan nama file ke-1 (.txt): ";
	cin.getline(esgul2,15);
	cout<<"Masukkan nama file ke-2 (.txt): ";	
	cin.getline(esgul3,15);
	ifstream buka1 (esgul2);
	ifstream buka2 (esgul3);
	
	ofstream gabung("gabung.txt");
	ofstream gabung2("gabung.txt", ios::app);
	
	while(buka1)
	{
		buka1.getline(ueu.nama,30);	
		gabung<<ueu.nama<<"\n";
	}
	buka1.close();
	gabung.close(); 
	

	while(buka2)
	{
		buka2.getline(ueu.nama,30);	
		gabung2<<ueu.nama<<"\n";
	}
	buka2.close();
	gabung2.close();
	
} 

int main()
{
	char kode;

	data_aku:
	system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");

   	switch (kode)
   	{
   		case '1': input_data(); goto data_aku;
   		case '2': tambah_data(); goto data_aku;
		case '3': baca_data(); goto data_aku;
		case '4': cout<<"\n\n\tDah Dah!!!"<<endl; break;
   	 	default : cout<<"\n\n\tMASUKAN KODE YG BENAR!!!\n\n"<<endl; 
				 system("PAUSE"); goto data_aku;
   	}
   	return 0;
   }

