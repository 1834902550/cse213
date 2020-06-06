

#include<stdio.h>
int main()
{
    int i;
    int array[100] = {2, 4, 4, 4, 5, 5, 7, 9};
    int size=92;

    array[0]=0;
    array[1]=1;

    for(i=2; i<=size; i++)

        array[i] = array[i-1]+array[i-2];

    for (i = 0; i <= size; i++)

        printf("%d  ", array[i]);

    return 0;
}
