#include <iostream>
#include <mysql.h>
#include <string>
#include "Estudiante.h"
#include "ConexionBD.h"
using namespace std;

void mostrarMenu() {
    cout << "-----------------Bienvenido al Sistema Gestor de Estudiantes-----------------" << endl;
    cout << "1. Ingresar Estudiantes" << endl;
    cout << "2. Mostrar Estudiantes" << endl;
    cout << "3. Actualizar Estudiantes" << endl;
    cout << "4. Eliminar Estudiantes" << endl;
    cout << "5. Salir" << endl << endl;
    cout << "Inserte el numero de la accion a realizar: ";
}

int main()
{
    char repetir;
    int opcion;
   
    do
    {
        system("cls");
        mostrarMenu();
        cin >> opcion;
        cin.ignore();
        system("cls");
        Estudiante estudiante = Estudiante();
        switch (opcion)
        {
        case 1:
        {
            string carnet, nombres, apellidos, direccion, email, fechanacimiento;
            int telefono, genero;
            cout << "*******************Insertar estudiante*******************" << endl<<endl;
            cout << "Ingrese el carnet: ";
            getline(cin, carnet);
            cout << "Ingrese el/los nombres: ";
            getline(cin, nombres);
            cout << "Ingrese el apellido: ";
            getline(cin, apellidos);
            cout << "Ingrese la direccion: ";
            getline(cin, direccion);
            cout << "Ingrese telefono: ";
            cin >> telefono;
            cin.ignore();
            cout << "Ingrese genero: ";
            cin >> genero;
            cin.ignore();
            cout << "Ingrese email: " ;
            getline(cin, email);
            cout << "Fecha de nacimiento(YYYY-MM-DD): ";
            getline(cin, fechanacimiento);
            fflush(stdin);

            
            estudiante.setEstudiante(carnet, nombres, apellidos, direccion, telefono, genero, email, fechanacimiento);
            estudiante.insertar();
            system("pause");
            cout << "********************************************************"<<endl;

        }
            break;
        case 2:
        {
            cout << "************************ Datos de Estudiantes ************************"<<endl<<endl;
            estudiante.mostrar();
            cout <<endl<< "********************************************************" << endl;
        }
            break;
        case 3:
        {
            string carnet, nombres, apellidos, direccion, email, fechanacimiento;
            int telefono, genero, id;
            cout << "************************ Datos de Estudiantes ************************" << endl << endl;
            estudiante.mostrar();
            cout << endl << "********************************************************" << endl<<endl;

            cout << "*******************Actualizar estudiante *******************" << endl << endl;
            cout << "Ingrese el ID del estudiante que desea modificar:  " << endl;
            cin >> id;
            cin.ignore();
            cout << endl;
            cout << "Ingrese el carnet: ";
            getline(cin, carnet);
            cout << "Ingrese el/los nombres: ";
            getline(cin, nombres);
            cout << "Ingrese el apellido: ";
            getline(cin, apellidos);
            cout << "Ingrese la direccion: ";
            getline(cin, direccion);
            cout << "Ingrese telefono: ";
            cin >> telefono;
            cin.ignore();
            cout << "Ingrese genero: ";
            cin >> genero;
            cin.ignore();
            cout << "Ingrese email: ";
            getline(cin, email);
            cout << "Fecha de nacimiento(YYYY-MM-DD): ";
            getline(cin, fechanacimiento);
            fflush(stdin);
            estudiante.setEstudiante(carnet, nombres, apellidos, direccion, telefono, genero, email, fechanacimiento);
            estudiante.actualizar(id);
            system("pause");
            cout << "********************************************************" << endl;

        }
            break;
        case 4:
        {
            cout << "************************ Datos de Estudiantes ************************" << endl << endl;
            estudiante.mostrar();
            cout << endl << "********************************************************" << endl << endl;

            int id;
            cout << "*******************Borrar estudiante *******************" << endl << endl;
            cout << "Ingrese el ID del estudiante que desea eliminar:  " << endl;
            cin >> id;
            cin.ignore();
            estudiante.borrar(id);
            system("pause");
        }
            break;
        case 5:
        {
            break;
        }
            break;
        default:
            cout << "La opcion escogina no existe";
        }

        if (opcion == 5) {
            break;
        }

        cout << "********************************************" << endl;
        cout << "Desea realizar otra accion s/n" << endl;
        cin >> repetir;
        repetir = tolower(repetir);
        estudiante.~Estudiante();
    } while (repetir == 's');
    cout << endl << "Fue un placer atenderle, tenga buen dia" << endl;
    
}

/*    int q_estado;
    ConexionBD conectar = ConexionBD();
    conectar.abrirConexion();
    if (conectar.getconexion()) {
        cout << "Si se pudo burro si se pudo";
    }
    else
    {
        cout << "Nel master";
    }*/