#include <stdio.h>
#include <stdlib.h>
//RECURSIVE ILE BOLME ISARETI KULLANMDAN BOLME ISLEMI
/*
bölünen sayýda kaç tane bölen olduðuna bakýlýr ve bölüm sonucu sayýlarak bulunur
*/
int divide(int a,int b)
{

    if(b==0)//bölen sayý 0 ise
    {
        return 0;
    }
    else if(a==b)//bölünen ve bölen eþit ise
    {
        return 1;
    }
    else if(a<b)//bölen bölünenden büyük ise
    {
        return 0;
    }
    else
    {
        return (1+divide(a-b,b));
    }

}

int main()
{
    int a,b;
    printf("bolunen sayi: \n");
    scanf("%d",&a);
    printf("bolen sayi: \n");
    scanf("%d",&b);
    printf("bolum sonucu: %d\n",divide(a,b));
    printf("kalan: %d",a-(divide(a,b)*b));//bölünen sayýdan bölümle çarpýlmýþ bölen sayýyý çýkarýrsak kalan sayýyý elde ederiz.
    return 0;
}
