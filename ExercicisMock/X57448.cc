// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void imprimir(char c, int posicionLetra, int maximoLetra)
{
    
    if (maximoLetra == 0)
    {
        cout << '"' << c << '"' << " = 0";
    }
    else
        cout << '"' << c << '"' << " = " << maximoLetra << '(' << posicionLetra << ')';
    
    if (c == 'T') cout << endl;
    else cout << ", ";
}

void posiciones(char &c, int &posicion, int &posicionLetra, int &maximoLetra)
{
    int copiaC = c;
    int inicioPosicion = posicion;
    while (copiaC == c)
    {
        cin >> c;
        posicion++;
    }
    if ((posicion - inicioPosicion) > maximoLetra)
    {
        posicionLetra = inicioPosicion;
        maximoLetra = (posicion - inicioPosicion);
    }
}

int main()
{
    char c;
    while (cin >> c)
    {
        int posicion = 1;
        int maxA = 0, maxC = 0, maxG = 0, maxT = 0;
        int posA = 0, posC = 0, posG = 0, posT = 0;
        while (c != '.')
        {
            if (c == 'A') posiciones(c, posicion, posA, maxA);
            else if (c == 'C') posiciones(c, posicion, posC, maxC);
            else if (c == 'G') posiciones(c, posicion, posG, maxG);
            else if (c == 'T') posiciones(c, posicion, posT, maxT);
        }
        imprimir('A', posA, maxA);
        imprimir('C', posC, maxC);
        imprimir('G', posG, maxG);
        imprimir('T', posT, maxT);
    }
}