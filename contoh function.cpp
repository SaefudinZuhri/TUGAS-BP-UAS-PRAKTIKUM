#include <iostream>
#include <conio.h>
using namespace std;

void volume(int vol, int p, int l, int t){
vol = p*l*t; }
main(){
int panjang,lebar,tinggi, hasil;
cout<<"Panjang = ";
cin>>panjang;
cout<<"Lebar = ";
cin>>lebar;
cout<<"Tinggi = ";
cin>>tinggi;

hasil=panjang*lebar*tinggi;

cout<<"Volume = "<<hasil;
getch();
}
