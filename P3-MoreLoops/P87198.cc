// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int mitad = (2 * n);
        int ancho = mitad + n - 2;

        // Parte ascendente
        for (int i = 0; i < n; i++) {
            int x = n + 2 * i;
            int espacios = (ancho - x) / 2;
            for (int j = 0; j < espacios; j++) cout << ' ';
            for (int j = 0; j < x; j++) cout << 'X';
            cout << endl;
        }

        // Parte media
        for (int i = 1; i < n - 1; i++) {
            for (int j = 0; j < ancho; j++) cout << 'X';
            cout << endl;
        }

        // Parte descendente
        for (int i = 0; i < n; i++) {
            int x = ancho - 2 * i;
            int espacios = (ancho - x) / 2;
            for (int j = 0; j < espacios; j++) cout << ' ';
            for (int j = 0; j < x; j++) cout << 'X';
            cout << endl;
        }

        cout << endl;
    }
}
