#!/usr/bin/env python
# -*- coding: utf-8 -*- 
#  



def sumuj(a, b):
    """
    Funkcja zwraca sumę dwóch podanych liczb
    """
    return a + b
def odejmij(a, b):
    """
    Funkcja zwraca różnicę dwóch podanych liczb
    """
    return a - b
def pomnóż(a, b):
    """
    Funkcja zwraca  dwóch podanych liczb
    """
    return a * b
def podziel(a, b):
    """
    Funkcja zwraca dzielenie dwóch podanych liczb
    """
    return a / b    

def main(args):
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 2. liczbę: "))
    
    print(sumuj(a, b))
    print(odejmij(a, b))
    print(pomnóż(a, b))
    print(podziel(a, b))
    return 0
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
