#include <iostream>
using namespace std;

int main() {
    int tabla[3][3];
    float pesos[2][3] = {{1.2, 3.4, 5.6}, {7.8, 9.0, 1.2}};

    // Initialize tabla with some values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabla[i][j] = i + j;
        }
    }

    cout << pesos[0][0] << endl;
    cout << pesos[1][1] << endl;

    // Print tabla
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tabla[i][j] << "\t";
        }
        cout << endl;
    }

    // Print pesos
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << pesos[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}