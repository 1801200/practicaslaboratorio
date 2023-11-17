#include "iostream"
#include "string"
using namespace std;
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
	
	 	
	 	
  }

	
