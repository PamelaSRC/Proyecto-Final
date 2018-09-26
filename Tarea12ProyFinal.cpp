#include <iostream> 
#include <sting>
using namespace std;

//Menu Principal

int opcion;

int main()
{
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



	switch (opcion)
	{
	case 1:
		cout << "Registro de alumnos" << endl;
		cout << "Registro de nombre, apellidos, telefono, correo electronico, y matricula " << endl;
		void registro();

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
		cout << "Todos los alumnos dados de alta junto con sus calificaciones" << endl;
		break;

	case 8:
		cout << "Salir del programa" << endl;
		break;


	default:
		cout << "Opcion no existente" << endl;
		break;
	}

	system("pause");

}

#include <iostream>
using namespace std;

struct registro1 {
	string nombrealumno;
	string apellido1;
	string apellido2;
	string numtel;
	char mail[10];
	char matricula[10];
};
//Funcion Registro

string nombrealumno;
string apellido1;
string apellido2;
string numtel;
int matricula;
int op;
char mail[30];
registro1 r[100];

int i = 0;
void registro()
{

	cout << "Porfavor, inserte el nombre del alumno" << endl;
	getline(cin, r[i].nombrealumno);


	system("cls");

	cout << "Porfavor, inserte el primer apellido del alumno" << endl;
	getline(cin, r[i].apellido1);


	system("cls");

	cout << "Porfavor, inserte el segundo apellido del alumno" << endl;
	getline(cin, r[i].apellido2);


	system("cls");

	cout << "Porfavor, ingrese el numero telefonico del alumno" << endl;
	getline(cin, r[i].numtel);

	system("cls");

	cout << "Porfavor, introduzca el correo electronico del alumno" << endl;                                                                                                   //Practica realizada por los becarios de LMAD  di no al ROBO
	cin >> r[i].mail;

	system("cls");

	cout << "Porfavor, ingrese la matricula del alumno" << endl;
	cin >> r[i].matricula;

	cout << "¿Desea continuar con el registro?" << endl;
	cout << "1. para si y 2. para no" << endl;
	cin >> op;

	if (op == 1)
	{
		i++;
		registro();
	}
	else
	{
		break;
	}
	system("cls");
