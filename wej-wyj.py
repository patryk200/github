#!/usr/bin/env python 
#  


def main(args):
    a = (input("Podaj imię: "))
    print(a) 
    b = (input("Podaj nazwisko: "))
    print(b)
    
    print("Witaj:", a,b)
 
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
