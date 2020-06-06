

#include<stdio.h>
int main()
{
    int i, min, min_2nd;
    int array[100] = {41, 87, 98, 42, 33, 77, 57, 92, 5, 2};
    int size=10;

    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    min = min_2nd = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]<min)
        {
            min_2nd = min;
            min = array[i];
        }
        else if(array[i]<min_2nd && array[i]!=min)
            min_2nd = array[i];
    }
    printf("%d\n",min_2nd);
    return 0;
}
