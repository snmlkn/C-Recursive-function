#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//RECURSIVE ILE KLAVYEDEN GIRILEN BIR CUMLENIN TERSTEN OKUNUSU
/*
girilen c�mledeki son dizi adresinden ba�lan�r
ve geriye do�ru birer azalt�larak herbir karakter bast�r�l�r.
*/
void turn(char senten[],int size)
{
    if(size==0)
    {
        printf("%c",senten[size]);
    }
    else
    {
        printf("%c",senten[size]);
        turn(senten,size-1);
    }
}

int main()
{

    char senten[100];
    printf("enter a sentence\n");
    gets(senten);
    turn(senten,strlen(senten)-1);

    return 0;
}
