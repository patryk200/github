/*
 * cw_petle.cpp
 */


#include <iostream>
using namespace std;

void cw01() {
    int wynik = 0;
    int liczba = 0;  
    while (wynik <= 75) {
        
        cout << "Podaj liczbę:";
        cin >> liczba;
        wynik = wynik + liczba;
    
    }
    cout << wynik;
}
void cw02() {
    int m = 0;
    int n = 0;
    for(int i=n; i<=m; i++)
    cout<<" "<<i<<" ";
    cout << n << m << " ";
    
}
void cw03() {
    int i=0,n;
    
    while(i<=n);
        cin>>n;
        cout<<i*i++<<endl;
    return 0;
}


int main(int argc, char **argv)
{
	cw01();
	cw02();
    cw03();
    return 0;
}

