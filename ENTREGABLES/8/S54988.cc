// Suma Fruites

// llegir llista de fruites i produir una llista ordenada lexicograficament per nom
// implementar 'add_fruit' que mira si existeix la fruita i suma el valor
// o be afegir la fruita al seu lloc corresponent
// input: dades de cada tupla fruita (nom i quantitat)
// output: vector de fruites ordenat amb la suma de totes les quantitats

#include <iostream>
#include <vector>
using namespace std;

struct Fruit {
   string name;
   int amount;
};

// pre: vector de fruites i una tupla fruita
// post: retrona true si existeix la fruita i suma el valor
// o false si no existeix
bool existeix(vector<Fruit>& fruits, const Fruit& fruit)
{
    bool result = false;
    int i = -1;
    int size = fruits.size();

    while (not result and ++i < size)
    {
        //en cas de existir, ja suma el valor
        if (fruits[i].name == fruit.name) 
        {
            result = true;
            fruits[i].amount += fruit.amount;
        }
    }
    return result;
}

// pre: vector de fruites
// post: ordena el vector lexicograficament per el nom
void sort(vector<Fruit>& fruits)
{
    int pos_actual = fruits.size() - 1;
    
    while (pos_actual > 0 and fruits[pos_actual].name < fruits[pos_actual - 1].name)
    {
        Fruit temp = fruits[pos_actual];
        fruits[pos_actual] = fruits[pos_actual - 1];
        fruits[pos_actual - 1] = temp;
        --pos_actual;
    }
}

// pre: vector de fruites i una tupla fruita
// post: mira si existeix, afegeix la fruita, i ordena
void add_fruit(vector<Fruit>& fruits, const Fruit& fruit)
{
    //si no hi ha cap fruita, afegir la primera
    if (fruits.size() == 0) fruits.push_back(fruit);
    //mirar si no existeix, si existeix ja es suma el valor a la funcio
    else if (not existeix(fruits, fruit))
    {
        //afegir al final del vector
        fruits.push_back(fruit);
        //ordenar el vector
        sort(fruits);
    }
}

int main()
{
    vector<Fruit> fruits;
    Fruit f;
    while (cin >> f.name >> f.amount)
        add_fruit(fruits, f);  
    for (int i = 0; i < fruits.size(); i++)
        cout << fruits[i].name << ' ' << fruits[i].amount << endl;
}