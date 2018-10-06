#include <iostream> 
#include <string>
#include <stdlib.h>
using namespace std;

//Funciones

void registrar();

void mostrarTodos();

void buscar();

void buscarNombre();

void modificar();

void mostrarMinus();

void eliminar();

int c;

//Menu Principal
int main()
{
	c = 0;
    int opcion;
    
	cout << "Bienvenidos al Menu principal, inserte una opcion: " << endl;
	cout << "1. Registrar alumnos" << endl;
	cout << "2. Registrar calificaciones" << endl;
	cout << "3. Edicion de alumnos" << endl;
	cout << "4. Borrar alumnos" << endl;
	cout << "5. Archivo de texto" << endl;
	cout << "6. Manual de usuario" << endl;
	cout << "7. Lista de alumnos y calificaciones" << endl;
	cout << "8. Salir" << endl;

	cin >> opcion;

	system("pause");
	system("cls");

    int op;
 
	switch (opcion)
	{
	case 1:
		cout << "Registro de alumnos" << endl;
		cout << "Registro de nombre, apellidos, telefono, correo electronico, y matricula " << endl;
		registrar(); 

		break;

	case 2:
		cout << "Registro de calificaciones" << endl;
		cout << "Registro y edicion de calificaciones" << endl;
		break;

	case 3:
		cout << "Edicion de alumnos" << endl;
		cout << "Edicion de cualquier dato del registro de alumnos" << endl;
		break;

	case 4:
		cout << "Borrar alumno" << endl;
		cout << "borra aumnos, obvio" << endl;
		break;

	case 5:
		cout << "Archivo de texto" << endl;
		cout << "Guarda la informacion de un archivo de texto" << endl;
		break;

	case 6:
		cout << "Manual de usuario" << endl;
		cout << "Explica como se debe utilizar el programa" << endl;
		break;

	case 7:
		cout << "Lista de alumnos y calificaciones" << endl;
		cout << "Eliga una opcion: 1. para buscar alumnos y 2. para ver alumnos registrados"<<endl;
		cin>>op;
		
	    if(op==1)
	    {
	         buscar();
	    }
		break;

	case 8:
		cout << "Salir del programa" << endl;
		break;


	default:
		cout << "Opcion no existente" << endl;
		break;
	}


}



struct registro1 {
	string nombrealumno;
	string apellido1;
	string apellido2;
	string numtel;
	char mail[10];
	char matricula[10];
};
registro1 r[100];

//Funcion Registro

int op;

 void registrar()
{
        cout << "¿Desea registrar alumno?" << endl;
	    cout << "1. para si y 2. para no" << endl;
	    cin >> op;
	  
	 
	  
    if (op == 1)
    {
    system("cls");
	cout << "Porfavor, inserte el nombre del alumno" << endl;
	cin.ignore();
	getline(cin, r[c].nombrealumno);
	system("cls");

	cout << "Porfavor, inserte el primer apellido del alumno" << endl;
	getline(cin, r[c].apellido1);
	system("cls");

	cout << "Porfavor, inserte el segundo apellido del alumno" << endl;
	getline(cin, r[c].apellido2);
	system("cls");

	cout << "Porfavor, ingrese el numero telefonico del alumno" << endl;
	getline(cin, r[c].numtel);
	system("cls");

	cout << "Porfavor, introduzca el correo electronico del alumno" << endl;                                                                                                   //Practica realizada por los becarios de LMAD  di no al ROBO
	cin >> r[c].mail;
	system("cls");

	cout << "Porfavor, ingrese la matricula del alumno" << endl;
	cin >> r[c].matricula;
	system("cls");
	 
	c++;
	registrar();
   }
   else
   {
   	system("cls");
   	 main();
   }
}


   void buscar()
   {
   	char mat[5];
   	cout<<"Porfavor, ingrese la matricula del alumno."<<endl;
   	cin>>mat;
   	bool encontrado = false;
   	int i=0;
   	while(i < c)
	   {
	   	if(mat == r[i].matricula ){
		   	cin.ignore();
   		cout << "Lo encontré:" << endl;
			cout << "El alumno es: " <<r[i].matricula<<" "<< r[i].apellido1<< " "<< r[i].apellido2 <<" "<< r[i].nombrealumno<<endl;
			encontrado = true;
			break;
		}
			i++;
	   }
   }
   
