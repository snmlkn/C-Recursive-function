#include <stdio.h>
#include <stdlib.h>
//CARPMA ISLEMI CARPIM SEMBOLU OLMADAN
int multi(int a,int b)
{
    if(a==1)
    {
        return b;
    }
    else
    {
        return b+multi(a-1,b);
    }
}

int main()
{
    int a,b;
    printf("enter two number to multiplication\n");
    scanf("%d %d",&a,&b);
    printf("result:%d X %d : %d",a,b,multi(a,b));
    return 0;
}
