#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# liczba = 265 suma = 13
#  


def sumuj_cyfry1(liczba):
    suma = 0
    while liczba > 0:
        suma = suma + (liczba % 10)
        liczba = int(liczba / 10)
    return suma


def main(args):
    liczba = input("Podaj liczbę 2-cyfrową: ")
    liczba = int(liczba)
    while liczba < 10:
        liczba = input("Podaj liczbę 2-cyfrową: ")
        liczba = int(liczba)
      

 
    print("Suma:", sumuj_cyfry1(licba))            
        
    

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
