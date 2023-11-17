#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;   
    cin >> numero;
    cin;
int opcion;
    
    cout << 
    
"Seleccione una opci�n de conversi�n:\n";
    cout << 
   
"1. Convertir a binario\n";
    cout << "2. Convertir a octal\n";
    cout << 
    cout <<
"Elija una opci�n (1 o 2): ";
    cin >> opcion;
    
    switch (opcion) {
        
       
case 1:
            // Conversi�n a binario
            cout << "El n�mero " << numero << " en binario es: " << bitset<sizeof(int)*8>(numero) << endl;
            break;
        case 2:
            // Conversi�n a octal
            cout << "El n�mero " << numero << " en octal es: " << oct << numero << endl;
            
           
break;
        default:
            cout << "Opci�n no v�lida." << endl;
            break;
    }
    
    
   
return 0;
}
