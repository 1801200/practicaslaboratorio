#include "iostream"
using namespace std;
int main(){
	
	const int tamArreglo = 5;
	int numeros[tamArreglo];
	for (int i=0; i< tamArreglo; i++){
		cout<<"ingresa el numero "<<i+i<<":";
		cin>>numeros[i];
	    }
        cout<<"los numeros ingresados son:";
	    for(int b=0; b<tamArreglo; b++){
  	cout<<numeros[b]<<"";
     }
 	cout<<endl;
    return 0;	
}
