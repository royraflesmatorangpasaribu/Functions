#include <iostream>
#include <windows.h>
using namespace std;

//fungsi prosedur waktu
void waktu(){
	
	//deklarasi variabel
	int i;
	
	for(int i=5; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(1000);   //jeda 1 detik
		system("cls");	//menghapus layar
	}
}
//minimal terdapat 1 fungsi 
int main(){
	//memanggil prosedur fungsi waktu
	waktu();
}
