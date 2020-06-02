#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int tag = 0;

    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
            tag++;
    }
    if(tag==1)
        printf("Found\n");
    else
        printf("Not Found");

    return 0;
}
