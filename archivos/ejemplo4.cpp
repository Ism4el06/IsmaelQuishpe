
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){

    fstream archivo;
    string frase, nombreArchivo;
    cout << "Ingrese nombre de archivo con extension: ";
    cin >> nombreArchivo;

    cout << "Escribe una frase para agregar al archivo: ";
    cin.ignore();
    getline(cin, frase);
    archivo.open("ejemplo.txt", ios::out | ios::app);
    if(archivo.is_open()){
        archivo << frase << endl;
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escribir."<<endl;
        return 1;
    }

    archivo.open(nombreArchivo.c_str(), ios::in);
    if(archivo.is_open()){
        string linea;
        cout << "Contenido del archivo:"<<endl;
        while (getline(archivo, linea)){
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer." << endl;
    }
    return 0;
}