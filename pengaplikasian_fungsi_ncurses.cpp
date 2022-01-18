#include<iostream>
#include <ncurses/ncurses.h>
#include<windows.h>
using namespace std;
//dibuat pada 17 Januari 2022

//deklarasi variabel yang digunakan
int noPIN;
string name;

//membuat fungsi input
void input(){
	cout<<"Input Your Name : ";
	cin>>name;
	cout<<"Input Your PIN  : ";
	cin>>noPIN;
}

//membuat fungsi output
void output(){
	cout<<"Hello "<<name;
}

//membuat fungsi loading
void loading(){

	initscr();
	mvprintw(10, 40, "Masuk Dalam Program");
	mvprintw(11, 40, "Loading");
	for(int baris=48; baris<=57; baris++){
	mvprintw(11, baris, ".");
	refresh();
	Sleep(100);
	}
	refresh();
	getch();

}
int main(){
	//memanggil fungsi input
	input();
	
	/*system(“CLS”) di C++ adalah untuk membersihkan layar pada program yang akan dijalankan 
	sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan 
	tanpa harus menutup program tersebut dan membukanya kembali.*/
	system("CLS"); 
	
	loading();
	
	//memanggil fungsi output
	output();
}
