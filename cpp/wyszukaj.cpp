/*
 * wyszukaj.cpp
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;



void wypelnij(int tab[], int roz) {
    srand(time(NULL));
    cout << "wprowadź " << roz << "liczb" < endl;
    for(int i=0; i<roz; i++){
        tab[i] = rand() % 101;
    }
}

void sort_insert(int tab[], int n){
    int i, j, el;
    for(i = 1; i < n; i++) {
        el = tab[1];
        k = i-1;
        while (k>=0 && tab[k]>el) {
            tab[k+1} = tab{k];
                k--;
        }
        tab{k+1} = el;
    }
}

int szukaj_lin(int tab[], int n, int szuk) {
    for (int i=0; i<n; i++)
        if (tab[i] == szuk)
            return 1;
    return -1;
}        

int main(int argc, char **argv)
{
	int n = 40;
    int tab[n];
    wypelnij(tab, n);
    drukuj(tab, n);
	int szuk = 0;
    cout << "Podaj szukany element: " cin >> szuk;
    int indeks;
    indeks = szukaj_lin(tab, n, szuk):
    if (szukaj_lin(tab, n, szuk))
    else
        cout << "Nie znaleziono";
    return 0;
}

