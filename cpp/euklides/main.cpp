#include <iostream>

using namespace std;
int nwd klasyczne(int a, int b){
    while (a != b){
        if(a > b)
            a = a - b;
        else
        b = b - a;
    }
    return a;
}

int main()
{
    int a, b;
    a = b = 0;
    cout << "Podaj dwie liczby:"
    return 0;
}
