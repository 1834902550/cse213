#include<stdio.h>
int main()
{
    int a[100];
    int i = 0, j;

    while(scanf("%d",&a[i]) == 1){
        i++;
        if(a[i] == 0){
            break;
        }
    }
    for(j = 0; j < i; j++)
    {
        printf("%d ",a[j]);
    }



    return 0;
}
