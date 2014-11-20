#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o tekst, koduje go za
pomoca tak zwanego szyfru GA-DE-RY-PO-LU-KI, a na koniec wypisuje
zakodowany tekst.

Szyfr ten podzielony jest na pary liter: GA, DE, RY, PO, LU, oraz KI.
Kazda z liter, ktora wystepuje w parze zamieniana jest na ta  druga
litere. Pozostale litery alfabetu, ktore nie wystepuja w parach
(np. B, C, F ... itp) pozostaja bez zmian. Podziel kod programu na
funkcje, ktore realizuja odpowiednie zadania. Mozesz skorzystac z
gotowego szablonu szyfr.c.

Przyklad kodowania za pomoca klucza GA-DE-RY-PO-LU-KI:

- kazda litera g zostanie zamieniona na a, kazda litera a na g, itd..

- slowo "jezyk" zostanie zamienione na "jdzri".


Dla chetnych *) Napisz oddzielna funkcje, ktora dekoduje zakodowany
tekst za pomoca klucza GA-DE-RY-PO-LU-KI.

Dla chetnych **) Oprocz klucza GA-DE-RY-PO-LU-KI uzywane sa inne klucze
jak np. MA-LI-NO-WE-BU-TY, RE-GU-LA-MI-NO-WY itp.
Rozbuduj swoj program tak, aby funkcja, ktora zamienia litery
przyjmowala drugi argument, ktory jest kluczem i wedlug ktorego koduje
kolejne litery. Np.
char zamien_litere(char litera, char klucz[], int dlugosc_klucza)
gdzie klucz to napis parzystej dlugosci, w ktorym kazda litera wystepuje
dokladnie jeden raz. Umozliwi to jednoznaczne kodowanie i dekodowanie
tekstu.
*/
