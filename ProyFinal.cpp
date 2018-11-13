#include <iostream> 
#include <string>
#include <stdlib.h>
#include<fstream>
using namespace std;

//Funciones

void registrar();

void mostrar();

void buscar();

void editar();

void borrar();

int c = 0;

int op;

struct registro1 {
	string nombre;
	string apellido;
	string numtel;
	string matricula;
	string mail;
	string col;
	string calle;
	int cal1;
	int cal2;
	int cal3;
	int calf;
};
registro1 r[100];



//Menu Principal
int main()
{
    int opcion;
  
    system("cls");
    
	cout << "Bienvenidos al Menu principal, inserte una opcion: " << endl;
	cout << "1. Registrar alumnos" << endl;
    cout << "2. Mostrar alumnos"<<endl;
	cout << "3. Salir" << endl;
	cin >> opcion;

	system("cls");

	switch (opcion)
	{
	case 1:
		registrar(); 
		break;
	case 2:
		mostrar();
		break;
		
	case 3:
		cout << "Salir del programa" << endl;
		break;

	default:
		cout << "Opcion no existente" << endl;
		break;
	}
}


 void registrar()
{

	 int op;

    system("cls");
	cout << "Porfavor, inserte el nombre del alumno" << endl;
	cin.ignore();
	getline(cin, r[c].nombre);
	system("cls");

	cout << "Porfavor, inserte los apellidos" << endl;
	getline(cin, r[c].apellido);
	system("cls");

	cout << "Porfavor, ingrese el numero telefonico del alumno" << endl;
    cin  >> r[c].numtel;
	system("cls");
	
	cout << "Porfavor, introduzca el correo electronico del alumno" << endl;
	cin.ignore();
	cin >> r[c].mail;
	system("cls");

	cout << "Porfavor, ingrese la matricula del alumno" << endl;
	cin >> r[c].matricula;
	system("cls"); 
	
	//cout<<"Ingrese su direccion, colonia: "<<endl;
	//getline(cin, r[c].col);	
	//cout<<"Calle: ";
	//getline(cin, r[c].calle);
	//system("cls");
	
	//cout<<"Porfavor, ingrese sus tres calificaciones, calificacion 1: "<<endl;
	//cin>>r[c].cal1;
	//cout<<"Calificacion 2: "<<endl;
	//cin>>r[c].cal2;
	//cout<<"Calificacion 3: "<<endl;
	//cin>>r[c].cal3;
	
	//r[c].calf=(r[c].cal1*30)+(r[c].cal2*45)+(r[c].cal3*25);
	
	c++;

	cout << "¿Registrar otro alumno mas?" << endl;
	cout << "1. Para si y 2. Para no" << endl;
	cin >> op;
	if (op == 1)
	{
		registrar();
	}
	 else if (op == 2)
	{
		main();
	}
   else
   {
   	 cout << "Opcion invalida, tienes que eligir unicamente 1 o 2.";
   }
   system("cls");
}

 void mostrar()
 {
	 for (int i = 0; i <= c; i++)
	 {
		 cout << r[i].nombre << " " << r[i].apellido << " " << r[i].numtel << " " << r[i].matricula << " " << r[i].mail << endl << endl;
	 }

	 system("pause");

	 main();
 }




   void buscar()
   {
   	int mat;
   	cout<<"Porfavor, ingrese la matricula del alumno."<<endl;
   	cin>>mat;
   	bool encontrado = false;
   	int i=0;
   	while(i < c)
	   {
	   	if(mat == r[i].matricula)
		   {
		   	cin.ignore();
   		    cout << "Lo encontré:" << endl;
			cout << "El alumno es: " <<r[i].matricula<<" "<< r[i].apellido << " " << r[i].nombre<<endl;
			encontrado = true;
			break;
		}
			i++;
	   }
   }
   
   void borrar()
   {
   	int opc;
   cout<<"¿Desea borrar alumno?"<<endl;
   cout<<"1. si  2. no"<<endl;
   cin>>opc;
   if(opc == 1)
   {
   	
   }
   else
   {
   system("cls");
   	 main();
   }
   	
   }
   
   
   
   
   
   
