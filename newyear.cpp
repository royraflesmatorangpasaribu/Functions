#include <iostream>
#include <windows.h>
using namespace std;

//Program dibuat oleh Roy Rafles Matorang Pasaribu

//prosedur waktu
void waktu(){
	
	//deklarasi variabel
	int i;
	cout<<"Hallo"<<endl;
	for(int i=3; i>=0 ; i--){
		cout << "Time : ";
		cout << i;
		Sleep(1000);   //jeda 2 detik
		system("cls");	//menghapus layar
	}
}
//minimal terdapat 1 fungsi 
int main(){
	//memanggil prosedur fungsi waktu
	waktu();
	cout<<"Selamat Tahun Baru 2022 Semoga Tahun ini menjadi tahun yang lebih baik dari tahun 2021"<<endl;
	cout<<"\t\t\t\t\tTuhan Memberkati";
	
	return 0;
}
