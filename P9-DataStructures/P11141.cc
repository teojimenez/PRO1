// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj)
{
    int nStudents = 0;
    min = max = mitj = -1; //important inicialitzar a -1, perque poden tenir un altre valor desde un inici

    for (int i = 0; i < es.size(); i++)
    {
        if (es[i].nota != -1 and not es[i].repetidor)
        {
            ++nStudents;
            mitj += es[i].nota;
            if (min == -1)
            {
                min = es[i].nota;
                max = es[i].nota;
                mitj = es[i].nota;
            }
            else
            {
                if (es[i].nota < min) min = es[i].nota;
                if (es[i].nota > max) max = es[i].nota;
            }
        }
    }
    if (mitj != -1)
    {
        mitj = mitj / nStudents;
    }
    // cout << min << endl << max << endl << mitj << endl;
}

// int main()
// {
//     vector <Estudiant> es;
//     Estudiant est1;
//     est1.nota = 5;
//     est1.repetidor = true;

//     Estudiant est2;
//     est2.nota = 10;
//     est2.repetidor = true;

//     Estudiant est3;
//     est3.nota = 3;
//     est3.repetidor = true;

//     Estudiant est4;
//     est4.nota = 9;
//     est4.repetidor = true;

//     Estudiant est5;
//     est5.nota = 6;
//     est5.repetidor = true;


//     es.push_back(est1);
//     es.push_back(est2);
//     es.push_back(est3);
//     es.push_back(est4);
//     es.push_back(est5);

//     double min, max, mitj;

//     informacio(es, min, max, mitj);
// }