
#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ofstream archivoSalida;

    archivoSalida.open("ejemplo.txt");

    if(archivoSalida. is_open()){
  
        archivoSalida << "¡Hola, mundo!" << endl;
        archivoSalida << "Esto es un prueba." << endl;
        archivoSalida << "Linea 3."<< endl;

        archivoSalida.close();
        cout<< "Texto escrito en el archivo con exito. "<<endl;
    } else{
        cout << "No se pudo abrir el archivo."<<endl;
    }
    return 0;
}
