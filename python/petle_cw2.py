#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_cw2.py
# dane wejściowe: 
# dwie dodatnie liczby podane przez użytkownika
# dane wyjściowe: liczby naturalne z przedziału <n, m>
# dane wyjściowe: kwadraty liczb naturalnych <0, m>
def main(args):
    m = int(input("Podaj 1. liczbę: "))
    while m < 1:
        print("Błędne dane!")
        m = int(input("Podaj 1. liczbę: "))
    
    
    for liczba in range(m + 1):
        print(liczba **2, " ", end="")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
