#include <iostream>
using namespace std;
int main(){
	int miArreglo[5];
	string nombres[3];
	
	miArreglo[0] = 10;
    miArreglo[1] = 20;
	miArreglo[2] = 30;
	miArreglo[3] = 40;
    miArreglo[4] = 50;
	
	nombres[0] = "alfredo";
	nombres[1] = "david";
	nombres[2] = "irving";
	 
	for(int i=0; i<=4; i++){
		cout<<"Elementos :"<<miArreglo[i]<<endl;
	}
	for(int b=0; b<=2; b++){
		cout<<"mis nombres de arreglo son ;"<<nombres[b]<<endl;
	}	
}
