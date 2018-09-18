#!/usr/bin/env python
# -*- coding: utf-8 -*-
# int() przekształca argument na liczbę całkowitą
# czyli typ INTEGER
# print()
# input()
def hello():
    print("Witam Cię")
    imie = input("Jak masz na imię? ")
    print("Witaj", imie,)
def main(args):
    a = int(input("Podaj 1. liczbę: "))
    print(a) 
    b = int(input("Podaj 2. liczbę: "))
    print(b)
    
    #print("Suma:", a + b)
    suma(a, b)
    #print("Różnica:", a - b)
    różnica(a, b)
    iloczyn(a, b)
    iloraz(a, b)
    #print("Iloczyn:", a * b)
    #print("Iloraz:", a / b)
def suma(l1, l2):
    print("Suma:", l1 + l2)   
def roznica(l1, l2):
    print("Różnica:", l1 - l2)
def iloczyn(l1, l2):
    print("Iloczyn:", l1 * l2)    
def iloraz(l1, l2):
    print("Iloraz:", l1 / l2)
    
    hello() #wywołanie funkcji
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
