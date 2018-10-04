#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py


    
    
   
   
   
def prostokatl(a, b, znak):
    """
    Drukujemy wypełniony prostokąt o podanych bokach a i b,
    za pomocą podanego znaku 
    """
    for i in range(a):
        for j in range(b):
            print(znak, end='')
    print() #znak końca linii, przejście do następnego wiersza

def prostokat2(a, b, znak):
    """
    Drukujemy pusty prostokąt o podanych bokach a i b,
    za pomocą podanego znaku 
    """
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1:
            print(znak, end='')
        else:
            print(" ", end='')
    print()


def main(args):
    a = int(input("Podaj 1 bok prostokąta: "))
    b = int(input("Podaj 2 bok prostokąta: "))
    znak = input("Podaj znak: ")
    prostokatl1(a, b, znak)
    print()
    prostokatl2(a, b, znak)
    print()
     return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
