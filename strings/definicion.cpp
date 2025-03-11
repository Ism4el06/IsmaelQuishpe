#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    string nombre= "Ismael";
    string apellido("Quishpe");
    string inicial(1, 'I');
    string cadena= "Arboleda Salazar Ismael";
    string nombre2(cadena,5);
    cout<< "La longitud de nombre2 es: "<<nombre2.length()<<endl;
    inicial += "smael";
    cout<<inicial[0]<<endl;
    cout<<inicial<<endl;
    inicial = "cad";
    cout <<inicial<<endl;
    cout<<nombre2<<endl;
    return 0;
}