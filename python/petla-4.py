#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    for i in range(101):
        if i % 2 == 0:
            print(i)
        else:
            print("libczba nieparzysta")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
