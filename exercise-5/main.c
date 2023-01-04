#include <stdio.h>
#include <stdlib.h>
//EKRANA GIRILEN SAYIDAN SIFIRA KADAR OLAN SAYILARIN TEK OLANLARINI LISTELEME
void odd_number(int first,int number)
{
    if(number>=first)
    {
        printf("%d\n",number);
        odd_number(first,number-2);
    }
}
int main()
{
    int n;
    int first=1;
    printf("enter number to print odd ones\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        n=n-1;
    }
    else
    {
        n=n;
    }
    odd_number(first,n);

    return 0;
}
