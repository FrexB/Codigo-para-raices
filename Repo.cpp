#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    double D, x1, x2; // Usamos double para las raíces
    cout<<"CODIGO CREADO POR DIEGO DE 3RO DE PROGRAMACION";

    // Leer los coeficientes
    cin >> A >> B >> C;

    // Calcular el discriminante
    D = (B * B) - (4 * A * C);

    x1 = (-B + sqrt(D)) / (2 * A); // Raíz 1
    x2 = (-B - sqrt(D)) / (2 * A); // Raíz 2

    // Mostrar las raíces
    cout << x1 << " " << x2 << endl;

    return 0;
}
