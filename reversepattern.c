// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int a,b,i;
    printf("enter a no of rows");
    scanf("%d",&a);

    for(i=a;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
        printf(" *");
        }
        printf("\n");
    }
}
