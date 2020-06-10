## Variable Decleration
```c
int N;
int p = 0, memory = 10;
```
## Array Decleration or Initialization
```c
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```
## Array Elements Insertion (User Input)
```c
//Implement in Program

for(p = 0; p<memory; p++)
    {
        scanf("%d ",&array[p]);
    }
 ```
## Print The Array Elements
```c
//Implement in Program

for(p = 0; p<memory; p++)
    {
        printf("%d ", array[p]);
    }
```
## Array Reversing
```c
//Implement in Program

for(p = memory-1; p>=0; p--)
    {
        printf("%d ", array[p]);
    }
```
## Array Access
```c
//Implement in Program

if(p>100)
        {
            printf("Overflow");
            break;
        }
 ```
## End of File
```c
//Implement in Program

while(scanf("%d",&array[p]) != EOF)
    {
        p++;
    }
    
    // or
    
while(scanf("%d",&array[p]) == 1)
    {
        p++;
    }
```

