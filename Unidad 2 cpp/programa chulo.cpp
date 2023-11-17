#include <iostream>
#include <string>
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"luis", "ricardo", "raul"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main() {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
        int m;
        //declaramos variable
            cout<<"en estos momentos se te mostrara una lista que puedes ejecutar escribe el numero de la opcion de deseas "<<endl;
            //escribimos en pantalla 
            cout<<"1-)hola_mundo"<<endl;
            cout<<"2-)promedio"<<endl;
            cout<<"3-)tarea stdio.h"<<endl;
            cout<<"4-)variables"<<endl;
            cout<<"5-)lados de un triangulo"<<endl;
            cout<<"6-)1 al 100"<<endl;
            cout<<"7-)100 a 0"<<endl;
            cout<<"8-)numero par del 0 a 100"<<endl;
            cout<<"8-)cronometro"<<endl;
            cout<<"9-)numero pares del 1 al 100"<<endl;
            cout<<"10-)cronometro"<<endl;
            cout<<"11-)tablas de multiplicar"<<endl;
            cout<<"12-)asistencia y faltas"<<endl;
            cin>>m;
            //escribimos las opciones y guardamos la variable
            switch(m)
            //colocamos la variable que comparemos
            {
            	case 1:{
            			cout<<"hola mundo programadores";
                    	cin.get();
                		return 0;
            	    	break;
			       	}
			       	case 2;{
			       		
			       		
						break;
					   }
			
       
            
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    } else {
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }
    return 0;
}
