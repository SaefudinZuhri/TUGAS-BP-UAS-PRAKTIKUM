#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	char nama[30];
	char nik [20];
	char ttl [20];
	char jeniskelamin[10];
	char alamat [40];
	char agama [10];
	char status[10];
	char pekerjaan[10];
	char kewarganegaraan[10];
	cout<<"INPUT DATA KTP\n";
	cout<<"NAMA : ";
	cin.getline(nama,30);
	cout<<"NIK : ";
	cin.getline(nik,20);
	cout<<"ttl : ";
	cin.getline(ttl,20);
	cout<<"JENIS KELAMIN :";
	cin.getline(jeniskelamin,10);
	cout<<"ALAMAT : ";
	cin.getline(alamat,40);
	cout<<"AGAMA : ";
	cin.getline(agama,10);
	cout<<"STATUS : ";
	cin.getline(status,10);
	cout<<"PEKERJAAN : ";
	cin.getline(pekerjaan,10);
	cout<<"KEWARGANEGARAAN : ";
	cin.getline(kewarganegaraan,10);
	
	getch ();
}

