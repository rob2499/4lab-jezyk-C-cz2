#include <stdio.h>
#include <stdlib.h>

int main(int liczbaARG, char* tablica[])
{
    int a;
    for(a=0;a<liczbaARG;a++)
    {
        printf("%s\n", tablica[liczbaARG - a]);
    }
    return 0;
}

/*
Funkcja main przyjmuje dwa argumenty: liczbe argumentow oraz tablice
lancuchow znakow, ktore sa podawane jako parametry podczas uruchamiania
programu. Napisz program, ktory wypisuje wszystkie parametry podane do
programu w odwrotnej kolejnosci.

Przyklad:

Uruchomienie programu
./prog to jest spis argumentow

powinno skutkowac wypisaniem

argumentow
spis
jest
to
*/
