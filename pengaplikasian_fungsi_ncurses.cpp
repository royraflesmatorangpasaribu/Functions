#include<iostream>
#include <ncurses/ncurses.h>
#include<windows.h>
using namespace std;
int noPIN;
string name;

void input(){
	cout<<"Input Your Name : ";
	cin>>name;
	cout<<"Input Your PIN  : ";
	cin>>noPIN;
}
void output(){
	cout<<"Hello "<<name;
}

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
	input();
	system("CLS");
	loading();
	output();
}
