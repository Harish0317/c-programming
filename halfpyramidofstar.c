#include <stdio.h>

void main() {
    int a,b,i;
    printf("enter a no of rows");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        for(int j=0;j<i+1;j++)
        {
        printf(" *");
        }
        printf("\n");
    }
}
