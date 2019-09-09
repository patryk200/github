#! /usr/bin/env python3
# -*- coding: utf-8 -*-

op = "t"
while op == "t":
    a, b, c = input("Podaj trzy liczby oddzielone spacjami: ").split(" ")

    print("Wprowadzono liczby:", a, b, c)
    print("\nnajwieksza:")

    if a > b:
        if a > c:
            najwieksza = a
        else:
            najwieksza = c
    elif b > c:
        najwieksza = b
    else:
        najwieksza = c

    print(najwieksza)

    op = input("Jeszcze raz (t/n)? ")

print("Koniec.")
