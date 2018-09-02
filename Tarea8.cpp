#include <iostream> 
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
