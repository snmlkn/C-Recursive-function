#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN N POZITIF TAMSAYISINA KADAR OLAN SAYILARIN TOPLANMASI

void submit(int num, int res)
{
    res+=num;

    if(num==0)
    {
        printf("result: %d",res);
    }
    else
    {
        submit(num-1,res);
    }
}
int sub(int number)
{
    if(number==1)
    {
        return 1;
    }
    else
    {
        return number+sub(number-1);
    }
}
int main()
{
    int number,result=0;

    printf("enter a number to submit: ");
    scanf("%d",&number);
    //TOPLAMA ORNEGI 1
    submit(number,result);
    //TOPLAMA ORNEGI 2
    sub(number);
    printf("\nsub function result: %d",sub(number));
    return 0;
}
