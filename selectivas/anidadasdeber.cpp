#include <iostream>
using namespace std;
main(){
    int a,b,c;
cout << "Ingrese valor de a: "<<endl;
cin >> a;
cout << "Ingrese valor de b: "<<endl;
cin >> b;
cout << "Ingrese valor de c: "<<endl;
cin >> c;
if(a>b && a>c){
    cout << "El mayor es: "<<a<<endl;
}else if (b>a && b>c){
    cout << "El mayor es "<<b<<endl;
}else if (c>a && c>b){
    cout << "El mayor es "<<c<<endl;
}else{
    cout << "Todos son iguales";
}
}