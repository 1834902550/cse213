

#include<stdio.h>
int main()
{
    int *p;
    int i, X, location;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int tag = 0;

    scanf("%d",&X);

    p = &array[0];

    for(i=0; i<size; i++)
    {
        if(*(p+i)==X)
        {
            location = i;
            tag++;
        }
    }

    if(tag==1)
        printf("%d",location);
    else
        printf("-1");

    return 0;
}
