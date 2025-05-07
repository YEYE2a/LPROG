#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    vector<int> valores;
    int valor;
    int suma = 0;

    auto inicio = high_resolution_clock::now();

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valor;
        valores.push_back(valor);
        suma += valor;
    }

    double promedio = static_cast<double>(suma) / valores.size();

    cout << "La suma de los valores es: " << suma << endl;
    cout << "El promedio de los valores es: " << promedio << endl;

    auto fin = high_resolution_clock::now();
    auto duracion = duration_cast<milliseconds>(fin - inicio);
    cout << "Tiempo de ejecucion: " << duracion.count() << " ms" << endl;

    return 0;
}




