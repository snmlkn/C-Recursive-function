#include <stdio.h>
#include <stdlib.h>
//RECURSIVE ILE BOLME ISARETI KULLANMDAN BOLME ISLEMI
/*
b�l�nen say�da ka� tane b�len oldu�una bak�l�r ve b�l�m sonucu say�larak bulunur
*/
int divide(int a,int b)
{

    if(b==0)//b�len say� 0 ise
    {
        return 0;
    }
    else if(a==b)//b�l�nen ve b�len e�it ise
    {
        return 1;
    }
    else if(a<b)//b�len b�l�nenden b�y�k ise
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
    printf("kalan: %d",a-(divide(a,b)*b));//b�l�nen say�dan b�l�mle �arp�lm�� b�len say�y� ��kar�rsak kalan say�y� elde ederiz.
    return 0;
}
