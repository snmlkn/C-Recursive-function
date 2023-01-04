#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN SAYIYA KADAR OLAN ASALLARI BASTIRMA
/*
asal olma algoritmas�nda bir say� ikiye b�l�n�r
b�l�m ve al�ndaki say�lar�n her birinin say�ya
tam b�l�n�p b�l�nmedi�ine bak�l�r
hi� birine tam b�l�nemiyorsa say� asald�r.
*/
int prime(int number,int i)
{
   if(i==1)//b�l�nm�yorsa asald�r
   {
       return 1;
   }
   else if(number%i==0)//say� bir de�ere tam b�l�n�yorsa asal de�ildir
   {
       return 0;
   }
   else// bir sonraki b�lme i�in b�len say� 1 azal�l�r
   {
       prime(number,i-1);
   }
}

int main()
{
    int n,i,control;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)//2 den ba�layarak girilen say�n�n yar�s�na kadar b�lme i�lemi yap�l�r
    {
        control = prime(i,i/2);
        if(control==1)//�a��r�lan fonksiyonda d�n�� de�eri 1 olursa say� asald�r
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
