#include<stdio.h>
int main()
{
    int n, i = 0;
    int a[100];

    scanf("%d",&n);
    while(scanf("%d",&a[i]) == 1){
    i++;
    if(i > n){
        printf("Array Overflow\n");
        break;
        }
    }
    int j;
    for(j = 0; j < i; j++)
    {
        printf("%d ",a[j]);
    }

    return 0;
}
