#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//KUCUKTEN BUYUGE SIRALAMA
/*
kullanýcýda alýnan sayý kadar rastgele
sayý üreten ve kücükten buyuge sýralayan program
*/
void list(int array[],int size)
{
    int i,temp;
    if(size>0)
    {
        for(i=0;i<size;i++)
        {
            if(array[i+1]<array[i])//kücükten büyüge sýralama komutu
            {
                temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
        }
        list(array,size-1);//bir sonraki elemana geçmek için fonksiyon tekrar cagýrýlýr
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

    list(array,n-1);//kontrol edeceði eleman sayýsý ve dizi elemaný fonksiyona gönderildi

    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",array[i]);
    }
    return 0;
}
