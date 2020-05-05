#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string Matriz(string t, int l)
{
    string resultado;
    char c[l][(t.length())];

    for (int e=0; e < l; e++)
        for (int j = 0; j < t.length(); j++)
            c[e][j] = 0;
    bool po = false;
    int fila = 0, col = 0;
    for (int o=0; o < t.length(); o++)
    {
        if (fila == 0 || fila == l-1)
            po = !po;
        c[fila][col++] = t[o];
        po?fila++ : fila--;
    }

    for (int i=0; i < l; i++)
        for (int j=0; j < t.length(); j++)
            if (c[i][j]!=0)
                resultado.push_back(c[i][j]);

    return resultado;
}


int main()
{
    char c [15] ;
    cout<< "ingrese una palabra "<<endl;
    cin >> c;
    cout << Matriz(c , 3) << endl;


    return 0;
}

