#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//RECURSIVE ILE KARAKTER SAYISI BULMA
/*
kullan�c�dan al�nan c�mle pointer adresi ile
fonksiyona g�nderildi�inde c�mlenin ilk adresini tutar
son adres '\0' karakterine gelene kadar adres
birer art�r�larak sayma i�lemi yap�l�r
*/
char count_char(char *sample)
{

    if(*sample=='\0')
    {
        return 0;
    }
    else
    {
        return 1+count_char(sample+1);

    }


}

int main()
{
    char sample[100];
    printf("ENTER SENTENCE\n");
    gets(sample);
    printf("character number : ");
    printf("%d",count_char(sample));
    return 0;
}
