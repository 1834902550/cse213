#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int i, j, X, tag=0, array_size=10;
    scanf("%d",&X);
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for( j = 0; j < array_size; j++)
    {
        if(X==array[j])
        {
            for( i = X-1; i <= array_size; i++)
            {
                array[i] = array[i+1];
            }
            tag++;
        }
    }
    array_size--;
    if(tag!=1)
    {
        printf("\nNot Found\n");
    }
    else
    {
        for( i = 0; i < array_size; i++)
        {
            printf("%d ",array[i]);
        }
    }

    return 0;
}
