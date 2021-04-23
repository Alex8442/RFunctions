#include <stdio.h>
#include <stdlib.h>

    int a=0;
    int b=1;
    int answer;

int main()
{
    start();
    return 0;
}


void start()
{
    int choice;
    printf("Hello, this program shows recursive functions\n");
    printf("This were past school tasks.\n\n");
    printf("1) Fibonacci numbers\n");
    printf("2) Towers of honai\n");
    scanf("%i",&choice);
    system("CLS");
    if (choice==1) {
        fibonacci();
    }
    else if (choice==2) {
    towers();
    }
    else {
        start();
    }
}

int fibonacci()
{
    int number;

    printf("Enter a number ");
    scanf("%i",&number);
    system("CLS");
    printf("0\n");
    fibo(number-1);
    return 0;
}

int fibo(int number)
{
    if (number>0)
    {
    answer=a + b;
    a=b;
    b=answer;
    printf("%i\n",a);
    fibo(number-1);
    }
}

int towers()
{
   int disks;
    printf("Enter the disk amount: ");
    scanf("%i",&disks);
    Spiel(disks,'A','B','C');
    return 0;
}

void Spiel(int disks,char left,char middle,char right)
{
    if(disks>=1)
    {
        Spiel(disks-1,left,right,middle);
        printf("%i Disk moves %c to %c\n",disks,left,right);
        Spiel(disks-1,middle,left,right);
    }
}
