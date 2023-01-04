#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN SAYIYA KADAR OLAN ASALLARI BASTIRMA
/*
asal olma algoritmasýnda bir sayý ikiye bölünür
bölüm ve alýndaki sayýlarýn her birinin sayýya
tam bölünüp bölünmediðine bakýlýr
hiç birine tam bölünemiyorsa sayý asaldýr.
*/
int prime(int number,int i)
{
   if(i==1)//bölünmüyorsa asaldýr
   {
       return 1;
   }
   else if(number%i==0)//sayý bir deðere tam bölünüyorsa asal deðildir
   {
       return 0;
   }
   else// bir sonraki bölme için bölen sayý 1 azalýlýr
   {
       prime(number,i-1);
   }
}

int main()
{
    int n,i,control;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)//2 den baþlayarak girilen sayýnýn yarýsýna kadar bölme iþlemi yapýlýr
    {
        control = prime(i,i/2);
        if(control==1)//çaðýrýlan fonksiyonda dönüþ deðeri 1 olursa sayý asaldýr
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
