
#include<stdio.h>
int main()
{
    int i, max;
    int array[100] = {41, 87, 98, 42, 33, 77, 57, 92, 95, 74};
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    max = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]>max)
            max = array[i];
    }

    printf("%d\n",max);

    return 0;
}
