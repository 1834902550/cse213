

#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double sum = 0;
    double avg = 0;
    double stan_devi = 0;
    int array[100] = {2, 4, 4, 4, 5, 5, 7, 9};
    int size=8;

    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }

    for(i=0; i<size; i++)
    {
        sum += array[i];
    }

    printf("\n%.2lf",sum);

    avg = sum/size;

    printf("\n%.2lf",avg);

    for(i=0; i<size; i++)
    {
        stan_devi += pow(array[i]-avg,2);
    }
    printf("\n%.2lf",stan_devi);

    stan_devi = sqrt(stan_devi/8);

    printf("\n%.2lf\n",stan_devi);

    return 0;
}

