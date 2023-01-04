#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN TAMSAYIYI GIRILEN SAYIDAN SIFIRA KADAR YAZDIRAN PROGRAM

void list(int number)
{
    if(number==0)
    {
        printf("%d",number);
    }
    else
    {
        printf("%d \n",number);
        list(number-1);
    }
}


int main()
{
    int a;
    printf("please enter a number to count back to zero:\n");
    scanf("%d",&a);
    list(a);
    return 0;
}
