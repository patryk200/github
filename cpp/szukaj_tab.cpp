/*
 * szukaj_tab.cpp
 */


#include <iostream>
using namespace std;

int szukaj(tab[], int x, int n) {
    for(int i = 1; i < n, i++) {
        if tab[i] == x)
            return i;
    
    }    
}



int main(int argc, char **argv)
{
	int n = 10;
    int tab[n] = {12, 11, 8, 6, 8, 4, 10, 5, 2, 3};
    int x = 0;
    cout << "Podaj liczbę: ";
    cin >> x;
    int indeks = szukaj(tab, x, n)
    if ( indeks > -1)
        cout << "znaleziono"; << indeks;
    else
        cout << "Nie znaleziono";
    return 0;
}

