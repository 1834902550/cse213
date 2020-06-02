#include<stdio.h>
int main ()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 4, 7, 8, 9};
    int i, j, X, tag=0, array_size=10;
    scanf("%d",&X);
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for( j = 0; j <= array_size; j++)
    {
        if(X==array[j])
        {
            for( i = j; i <= array_size; i++)
            {
                array[i] = array[i+1];
            }
            array_size--;
            tag++;
            j--;
        }
    }
    if(tag==0)
    {
        printf("\nNot Found\n");
    }
    else
    {
        for( i = 0; i < array_size; i++)
            printf("%d ",array[i]);
    }
    return 0;
}
