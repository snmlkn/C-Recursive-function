#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//RECURSIVE ILE KLAVYEDEN GIRILEN BIR CUMLENIN TERSTEN OKUNUSU
/*
girilen cümledeki son dizi adresinden baþlanýr
ve geriye doðru birer azaltýlarak herbir karakter bastýrýlýr.
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
