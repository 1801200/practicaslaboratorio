#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un número entero: ";
    cin >> numero;   
    cin >> numero;
    cin;
int opcion;
    
    cout << 
    
"Seleccione una opción de conversión:\n";
    cout << 
   
"1. Convertir a binario\n";
    cout << "2. Convertir a octal\n";
    cout << 
    cout <<
"Elija una opción (1 o 2): ";
    cin >> opcion;
    
    switch (opcion) {
        
       
case 1:
            // Conversión a binario
            cout << "El número " << numero << " en binario es: " << bitset<sizeof(int)*8>(numero) << endl;
            break;
        case 2:
            // Conversión a octal
            cout << "El número " << numero << " en octal es: " << oct << numero << endl;
            
           
break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }
    
    
   
return 0;
}
