#include <iostream>
using namespace std;
main(){
	int fila=0,columna=0,**pm_notas;
	cout<<"Cuantos Estudiantes Desea Ingresar:";
	cin>>fila;
	cout<<"Cuantos Notas Desea Ingresar:";
	cin>>columna;
	pm_notas = new int*[fila];
 	for (int i=0;i<fila;i++){
 		pm_notas[i] = new int [columna];
	 }
	 for(int i=0;i<fila;i++){
	 	for(int ii=0;ii<columna;ii++){
	 		cout<<"Estudiante ["<<i<<"], Nota["<<ii<<"]: ";
	 		cin>>((pm_notas+i)+ii);
		 }
		 cout<<"________"<<endl;
	 }
	
		cout<<"------ Mostrar Notas ------ "<<endl;
		for(int i=0;i<fila;i++){
			cout<<"____Estudiante ["<< i<<" ]____"<<endl;
	 	for(int ii=0;ii<columna;ii++){
	 		cout<<"Estudiante ["<<i<<"], Nota["<<ii<<"]: "<<((pm_notas+i)+ii)<<endl;
	 		
		 }
		 
	 }
	 for (int i =0;i<fila;i++){
	 	delete[] pm_notas[i];
	 }
	 	delete[] pm_notas;
	
}

