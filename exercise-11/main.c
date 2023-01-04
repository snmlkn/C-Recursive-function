#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN SAYININ USSUNU ALMA
int procces(int n,int p)
{
    int value;
    if(p==0)
    {
        value=1;
    }
    else
    {
         value=n*procces(n,p-1);
    }
    return value;
}


int main()
{
    int number,power;
    printf("enter the number\n");
    scanf("%d",&number);
    printf("enter the power\n");
    scanf("%d",&power);
    printf("%d",procces(number,power));
    return 0;
}
