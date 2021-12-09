#include <iostream>
#include <windows.h>

using namespace std;

int score=0;

void waktu(){
	
	int i;
	
	for(int i=5; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(1000);
		system("cls");
		
		if(i==0){
		cout << "WAKTU HABIS\n";
		cout << "Score : " << score;
		}
	}
	
	
}

int main(){
	waktu();
}
