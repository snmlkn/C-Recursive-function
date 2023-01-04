#include <stdio.h>
#include <stdlib.h>
//RECURSIVE ILE EKRANA YILDIZ BASTIRMA

void star(int n)
{
    int i;
    if(n==0)
    {
        return 0;
    }
    else
    {
      for(i=0;i<n;i++)
      {
          printf(" * ");
      }
      printf("\n");
      star(n-1);
    }
}

int main()
{
    int n;
    printf("how many star created\n");
    scanf("%d",&n);

    star(n);
    return 0;
}
