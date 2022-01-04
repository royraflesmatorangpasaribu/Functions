#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//pada 04 Januari 2021

//prosedur fungsi
void printChain(int n){
	for(int i=0; i<n; i++){
		cout<<i<<" ";
	}
}

//fungsi utama
int main(){
	//memanggil fungsi
	printChain(5);
	
	//karena menggunakan fungsi main
	return 0;
}
