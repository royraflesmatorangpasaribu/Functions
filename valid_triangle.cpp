#include <iostream>
using namespace std;

bool valid_triangle(int a, int b, int c){
	if (a+b <= c || a+c <= b || b+c <= a)
	return false;
	else 
	return true;
}
int main (){
	int a, b, c;
	cin >> a >> b >> c;
	if (valid_triangle (a, b, c)){
		cout << "True";
		
	}else{
		cout << "False";
	}
	return 0;
}
