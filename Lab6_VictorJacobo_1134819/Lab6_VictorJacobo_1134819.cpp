

#include <iostream>
#include <fstream>
#include "Orden.h"
#include <list>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


void Generacion()
{
    std::list<int> Pokes;
    Orden ordenar;

    fstream fin;
    fin.open("Pokes.csv", ios::in);
    vector<string> row;
    string line, word, temp;
    int NGeneracion = 0;

    while (fin>>temp)
    {
        row.clear();
        getline(fin, line);
        stringstream s(line);

        while (getline(s, word, ','))
        {
            row.push_back(word);
        }

        NGeneracion = stoi(row[3]);
    }

    cout << "ingrese 1 para selection sort, 2 quicksort, 3 shell sort \n";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        
        //ordenar.selectionSort();
        break;
    case 2:
        //ordenar.quick_sort();
        break;
    case 3:
        //ordenar.shellSort();
        break;
    }
}

void Nacional()
{
    
}

void Menu()
{
    int n;
    cout << "Ingrese 1 para ordenar por generacion o 2 para ordenar por Dex nacional. \n";
    cin >> n;
    switch (n)
    {
    case 1:
        Generacion();
        break;
    case 2:
        Nacional();
        break;
    default:
        cout << "Ingerse un numero valido. \n";
        Menu();
    }
}

int main()
{
    cout << "==================================================== \n";
    cout << "               Bienvenido a la Pokedex               \n";
    cout << "==================================================== \n";
    Menu();
}

