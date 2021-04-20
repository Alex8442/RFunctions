#include <stdio.h>
#include <stdlib.h>
    //Globale Variablen für Fibonacci
    int a=0;
    int b=1;
    int loesung;

int main()
{
    start();
    return 0;
}


void start()
{
    int auswahl;
    printf("Hallo, dieses Programm zeigt Rekursive Funktionen\n");
    printf("Das waren erledigte Aufgaben aus der Schule.\n\n");
    printf("1) Fibonacci Folge\n");
    printf("2) Tuerme von Honai\n");
    scanf("%i",&auswahl);
    system("CLS");
    if (auswahl==1) {
        fibonacci();
    }
    else if (auswahl==2) {
    tuerme();
    }
    else {
        start();
    }
}

int fibonacci()
{
    int zahl;

    printf("Geben sie eine Zahl ein ");
    scanf("%i",&zahl);
    system("CLS");
    printf("0\n");
    fibo(zahl-1);
    return 0;
}

int fibo(int zahl)
{
    if (zahl>0)
    {
    loesung=a + b;
    a=b;
    b=loesung;
    printf("%i\n",a);
    fibo(zahl-1);
    }
}

int tuerme()
{
   int disks;
    printf("Geben sie die anzahl der disks an: ");
    scanf("%i",&disks);
    Spiel(disks,'A','B','C');
    return 0;
}

void Spiel(int disks,char Links,char Mitte,char Rechts)
{
    if(disks>=1)
    {
        Spiel(disks-1,Links,Rechts,Mitte);
        printf("%i Disk bewegt %c zu %c\n",disks,Links,Rechts);
        Spiel(disks-1,Mitte,Links,Rechts);
    }
}
