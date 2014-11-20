#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char A[100];
    char B[100];
    char C[100];

//podpunkt A:

    printf("Podaj dwa napisy: \n");
    scanf("%[^\n]s",A);
    scanf("\n%[^\n]s",B);

//podpunkt B:

    printf("Dlugosc napisu A = %d\n", strlen(A));
    printf("Dlugosc napisu B = %d\n", strlen(B));

//podpunkt C:

    strcat(C,A);
    strcat(C,B);
    printf("%s\n",C);

//podpunkt D:

    if(strcmp(A,B)==0)
    {
       printf("Napisy sa takie same.\n");
    }
    else
    {
        printf("Napisy sa rozne.\n");
    }

//podpunkt E:

    if(strstr(A,B))
    {
        printf("Napis B znajduje sie w A.\n");
    }
    else
    {
        printf("Napis B nie znajduje sie w A.\n");
    }

//podpunkt F:

    int a;
    for(a=0;a<strlen(A);a++)
    {
        A[a] = toupper(A[a]); //include ctype.h - warning
    }
    printf("%s",A);

    return 0;
}

/*
Korzystajac z gotowych funkcji w bibliotece string.h napisz program,
ktory deklaruje trzy lancuchy znakow A, B oraz C (kazdy maksymalnie
po 100 znakow), a nastepnie

a) pyta uzytkownika o dwa napisy i umieszcza je w zmiennych A i B,
b) wypisuje dlugosci napisow A i B,
c) laczy napis A i B (konkatenuje) i zapisuje rezultat do zmiennej C,
d) wypisuje informacje czy napisy A oraz B sa takie same,
e) wypisuje informacje czy napis B znajduje sie w napisie A.
f) zamienia wszystkie male litery w napisie A na wielkie i wypisuje
rezultat na ekranie
*/
