#include <iostream>
#include <vector>
#include <string>
#include <ctime>       
#include <chrono>      

using namespace std;
using namespace chrono;

int main() {
    auto inicio = high_resolution_clock::now();

    vector<string> sucursales;
    vector<int> ventas;

    srand(time(0));

    for (int i = 0; i < 25; ++i) {
        sucursales.push_back("Sucursal " + to_string(i + 1));
        ventas.push_back(rand() % (50000 - 10000 + 1) + 10000);  
    }
    int suma = 0;
    for (int venta : ventas) {
        suma += venta;
    }
    double promedio = static_cast<double>(suma) / ventas.size();

    cout << "Promedio de ventas: " << promedio << endl;

    cout << "\nSucursales con ventas mayores al promedio:\n";
    for (int i = 0; i < 25; ++i) {
        if (ventas[i] > promedio) {
            cout << sucursales[i] << ": " << ventas[i] << endl;
        }
    }

    auto fin = high_resolution_clock::now();
    auto duracion = duration_cast<milliseconds>(fin - inicio);

    cout << "\nTiempo de ejecucion: " << duracion.count() << " ms" << endl;

    return 0;
}
