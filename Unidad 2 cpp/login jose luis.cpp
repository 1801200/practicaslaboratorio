#include <iostream>
#include <string>
#include <stdio.h>
#include "string"
#include <conio.h>
#include <windows.h>
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
      
	int a;
	for(a=0;a<=100;a++){
		cout<<a<<endl;
	}
	return 0;
	cin.get();
}

	for(int i=100; i>=0; i--){
		printf("%d ",i);
	}
	return 0;
    return false;
    
	}
    int main(){
	const int numAlumnos =5;
	int asistencia[numAlumnos];
	
	for(int i=0; i<numAlumnos; i++){
		asistencia[i]=0;
	}
	cout<<"bienvenido alsistema de asistencia "<<endl;
	cout<<"registra la asistencia de los alumnos"<<endl;
	cout<<"registra el nombre de los alumnos e indica su asistencia"<<endl;
	for (int i=0; i<numAlumnos; i++){
		string nombre;
		char asistio;
		cout<<"Alumnos :"<<i+1<<":";
		cin>>nombre;
		cout<<"¿si asistio? (s/n)";
		cin>>asistio;
		if(asistio == 's' or asistio =='s'){
			asistencia [i]=1;
		}
	}
	int faltas =0;
	for(int i=0; i<numAlumnos; i++){
		if(asistencia[i] == 0){
			faltas++;
		}
   }
	int asis =0;
	for(int i=0; i<numAlumnos; i++){
		if(asistencia[i] == 0){
			asis++;
	 	}
   }    
	cout<<"numero de faltas"<<faltas<<endl;
	cout<<"numero de asistencias"<<asis<<endl;	
	
	return 0;

	int h = 0, m = 0, s = 0;
	while (1){
		
		if(s>=60){
			s = 0;
			m++;
			if(m>=60){
				m = 0;
				h++;
			}
		}
		system("cls");
		cout<<h<<":"<<m<<":"<<s;
		Sleep(1000);
		s++;
	
	}
	cin.get();

		cout<<"hola mundo programadores";
	cin.get();
	return 0;
	int main();{	
	}
	string user,pass,usuario="sistema",password = "admin01";
    char seguir,opc;
    int multiplicacion,numero,i;
    cout<<"bienvenido(a)por favor ingresa al sistema:\n";
    cout<<"ingresa tu usuario:";
    cin>>user;
    cout<<"ingresa tu password:";
    cin>>pass;
    if(user==usuario && pass ==password){
}

	cout<<"por favor digita el nuymero de multiplicacion :"<<endl;
	cin>>numero;
	

	for(int i=1; i<=10; i++){
		int multiplicacion = i *numero;
		cout<<numero<<" x "<< i <<" = "<< multiplicacion << endl;
			return 0 ;
	
		}
			int a;
	for(a=0;a<=100;a++){
		cout<<a<<endl;
	}
	return 0;
	cin.get();
	for(int i=2;i<=100;i+=2){
		printf("%d ",i);
	}
	return 0;

int main(); {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
    } else {
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }
    return 0;
    
}
	}
