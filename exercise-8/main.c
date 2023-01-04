#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN DEGERE GORE FIBONCCI DIZISI URETEN PROGRAM
/*
fibonacci dizisinde kendisi ile bir önceki sayý
toplanarak bir sonraki sayý elde edilir ve dizi devam eder.
*/
int fibonacci(int n)
{
    if(n==0)//girilen sayýnýn 0 olma durumu
    {
        return 0;
    }
    else if(n==1)//girilen sayýný 1 olma durumu
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);//sayýnýn kendisi ile bir öncekinin toplanmasý
    }

}
int main()
{
    int n,i;
    printf("enter fibonacci element number: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d \n",fibonacci(i));//herbir eleman için fibonacci deðerini ekrana bastýrma
    }
    return 0;
}
