/*
 * znaki.cpp
 */


#include <iostream>

using namespace std;

int zlicz(char tab[]) {
    int i = 0; // indeks znaków w tablicy
    while (tab[i] != '\0') i++; 
    return i;
}

void drukuj(char tab[], int roz) {
    for(int i=0; i<roz; i++) {
        cout << tab[i] << " ";
    }
}

void ascii(char, tab[], int roz) {
    int kod = 0;
    for(int i=0; i<roz; i++) {
        kod = (int)tab{[i];
        if (kod > 96 && kod < 123)
            cout << (char)kod-32) << " ";
        else if (kod > 64 && kod < 91)
            cout << (char) kod+32) << " ";
        else
         cout << (int)tab[i] << " ";
        }
    }
    


void liczznaki(char tab[], int roz) {
    int spacje = 0;
    int interpunkcja = 0;
    int symbole = 0;
    for(int i=0; i<roz; i++) {
        if (tab[i] == ' ') spacje++;
        else if (tab[i] == '.' || tab[i] == ',')
            interpunkcja++;
        else if (tab[i] == '.' || tab[i] == ')') symbole++;
         
    }
}

int main(int argc, char **argv)
{
	const int rozmiar = 300;
    char tab[rozmiar];
    cout << "Jak się nazywasz?" <<endl;
    // cin >> tab;
    cin.getline(tab, rozmiar);
    //cout << "Cześć " << tab << "!" << endl;
	drukuj(tab, zlicz(tab));
    return 0;
}

