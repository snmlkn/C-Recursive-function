#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//RECURSIVE ILE KARAKTER SAYISI BULMA
/*
kullanýcýdan alýnan cümle pointer adresi ile
fonksiyona gönderildiðinde cümlenin ilk adresini tutar
son adres '\0' karakterine gelene kadar adres
birer artýrýlarak sayma iþlemi yapýlýr
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
