#include<stdio.h>
int main(void)
{
    int i,sum=0;
    int techhunt[5] = {
                            00001,
                            00010,
                            00100,
                            01000,
                            10000,
                        };
    for (i = 0; i < 5; ++i)
        sum=sum+techhunt[i];
    printf("%d ",sum);
    printf("\n");
    return 0;
}
