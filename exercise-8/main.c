#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN DEGERE GORE FIBONCCI DIZISI URETEN PROGRAM
/*
fibonacci dizisinde kendisi ile bir �nceki say�
toplanarak bir sonraki say� elde edilir ve dizi devam eder.
*/
int fibonacci(int n)
{
    if(n==0)//girilen say�n�n 0 olma durumu
    {
        return 0;
    }
    else if(n==1)//girilen say�n� 1 olma durumu
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);//say�n�n kendisi ile bir �ncekinin toplanmas�
    }

}
int main()
{
    int n,i;
    printf("enter fibonacci element number: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d \n",fibonacci(i));//herbir eleman i�in fibonacci de�erini ekrana bast�rma
    }
    return 0;
}
