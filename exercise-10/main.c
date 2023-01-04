#include <stdio.h>
#include <stdlib.h>
//IKININ KUVVETLERINI EKRANA BASTIRMA
int power(int n)
{
    int value;
    if(n==0)
    {
        value=1;
    }
    else
    {
        value=2*power(n-1);
    }
    printf("%d\n",value);
    return value;

}


int main()
{
    int N;
    printf("enter N number \n");
    scanf("%d",&N);
    printf("powers:\n");
    power(N);

    return 0;
}
