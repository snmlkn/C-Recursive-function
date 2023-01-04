#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//KUCUKTEN BUYUGE SIRALAMA
/*
kullan�c�da al�nan say� kadar rastgele
say� �reten ve k�c�kten buyuge s�ralayan program
*/
void list(int array[],int size)
{
    int i,temp;
    if(size>0)
    {
        for(i=0;i<size;i++)
        {
            if(array[i+1]<array[i])//k�c�kten b�y�ge s�ralama komutu
            {
                temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
        }
        list(array,size-1);//bir sonraki elemana ge�mek i�in fonksiyon tekrar cag�r�l�r
    }
}


int main()
{
    int n,i;
    printf("how many number created\n");
    scanf("%d",&n);
    int array[n];

    srand(time(0));
    for(i=0;i<n;i++)
    {
        array[i]=rand()%100;
        printf("%d\n",array[i]);
    }

    list(array,n-1);//kontrol edece�i eleman say�s� ve dizi eleman� fonksiyona g�nderildi

    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",array[i]);
    }
    return 0;
}
