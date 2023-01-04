#include <stdio.h>
#include <stdlib.h>
//RECURSIVE ILE FAKTORIYEL HESABI
int factor(int number)
{
    if(number==1)
    {
        return number;
    }
    else
    {
        return number*factor(number-1);
    }
}

int main()
{
    int n;
    printf("enter n number to factor calculation\n");
    scanf("%d",&n);

    printf("factor result: %d",factor(n));
    return 0;
}
