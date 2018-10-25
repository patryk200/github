#include <iostream>

using namespace std;
int nwd_klasyczne(int a, int b){
    int licznik = 0
    while (a != b){
        if(a > b)
            a = a - b;
        else
        b = b - a;
        licznik++;
    }
    cout << "Powtórzeń: " << licznik << endl;
    return a;
}

int nwd_optymalny(int a, int b) {
    int licznik = 0;
    while (a > 0){
        a = a % b;
        b = b - a;
        licznik++;
    }
    cout << "Powtórzeń: " << licznik << endl;
    return b;
}
int main()
{
    int a, b;
    a = b = 0;
    cout << "Podaj dwie liczby:";
    cin >> a >> b;
    cout << "nwd(" << a << " , " << b << ") = "
        << nwd_klasyczne(a, b) << endl;
    return 0;
}
