
#include<stdio.h>
int main()
{
    int i, max, max_2nd;
    int array[100] = {41, 87, 98, 42, 33, 77, 57, 92, 5, 25};
    int size=10;

    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    max = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max_2nd = max;
            max = array[i];
        }
        else if(array[i]>max_2nd && array[i]<max)
            max_2nd = array[i];
    }
    printf("%d\n",max_2nd);
    return 0;
}
