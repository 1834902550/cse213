

#include<stdio.h>
int main()
{
    int i, min;
    int array[100] = {41, 87, 98, 42, 33, 77, 57, 92, 95, 25};
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    min = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]<min)
            min = array[i];
    }

    printf("%d\n",min);

    return 0;
}
