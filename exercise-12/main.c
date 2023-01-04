#include <stdio.h>
#include <stdlib.h>
//BASLANGIC BITIS VE ARTIM DEGERI ILE SERI OLUSTURMA
void seq(int start,int stop,int count)
{
    if(start<=stop)
    {
        printf("%3d",start);
        seq(start+count,stop,count);
    }

}

int main()
{
    int start,stop,count;
    printf("ENTER START NUMBER: \n");
    scanf("%d",&start);
    printf("ENTER STOP NUMBER: \n");
    scanf("%d",&stop);
    printf("ENTER COUNT NUMBER: \n");
    scanf("%d",&count);
    seq(start,stop,count);
    return 0;
}
