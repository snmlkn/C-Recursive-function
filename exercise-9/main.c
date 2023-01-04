#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN 0 DEGERI GIRILENE KADAR TEKRAR SAYI ISTEME
void control()
{
    int number;
    printf("ENTER 0 NUMBER:\n");
    scanf("%d",&number);

    if(number!=0)
    {
        control(number);
    }
    else
    {
        exit(0);
        //printf("game over");
    }
}

int main()
{
    control();

    return 0;
}
