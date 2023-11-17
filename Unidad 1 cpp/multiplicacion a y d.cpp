#include <iostream>
using namespace std;

int main (){
	int numero;
	cout<<"por favor digita el nuymero de multiplicacion :"<<endl;
	cin>>numero;
	
	for(int i=1; i<=10; i++){
		int multiplicacion = i *numero;
		cout<<numero<<" x "<< i <<" = "<< multiplicacion << endl;
	}
	return 0 ;
}
