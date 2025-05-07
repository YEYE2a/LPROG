#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    int pares = 0, impares = 0;

    auto inicio = high_resolution_clock::now();

    srand(time(0));

    for (int i = 0; i < 500; i++) {
        int numero = rand() % 51 + 50;  // entre 50 y 100

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    auto fin = high_resolution_clock::now();
    auto duracion = duration_cast<milliseconds>(fin - inicio);
    cout << "Tiempo de ejecucion: " << duracion.count() << " ms" << endl;

    return 0;
}

