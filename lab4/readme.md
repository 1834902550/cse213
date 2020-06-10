## Variable Decleration
```c
int i, j;
int size = 10; 
int size1 = 10; 
int size2 = 10; 
int tag = 0;
```
## Array Decleration or Initialization
```c
int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int array1[100] = {8, 2, 18, 19, 11, 14, 15, 7, 1, 4};
int array2[100] = {10, 5, 20, 12, 16, 13, 17, 3, 6, 9};
```
## Copy an Array Into Another Array
```c
for(i=0; i<size; i++)
    {
        tag = array1[i];
        array2[i] = tag;
    }
```
## Reverse an Array and Store Into Another Array
```c
for(i=0; i<=size; i++)
    {
        tag = array1[size-i];
        array2[i-1] = tag;
    }
```
## Reverse an Array and Store Into the Same Array
```c
int tag = 0; 
for(i=size-1, j=0; j<i; i--, j++){
        tag = array[j];
        array[j] = array[i];
        array[i] = tag;
    }
```
## Array Compare
```c
for(i=0; i<size; i++)
    {
        if(array1[i]==array2[i]) // Check equality between both array
            same++;
    }

if(same==size)                              
        printf("\n\nTwo array are same\n");
else                                        
        printf("\n\nTwo array are not same\n");
```
## Array Merge
```c
size = size1 + size2; // Summation of two array size

for(i=size1, j=0; i<=size; i++,j++)
        array1[i]=array2[j];
```
## Merge the Elements of Two Sorted Array
```c
for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array1[i]>array1[j]) // Sorting the array after merging
            {
                tag = array1[i];
                array1[i] = array1[j];
                array1[j] = tag;
            }
        }
    }
```
## Split an Array Into Two Different Arrays
```c
scanf("%d",&K); 
for(i=0; i<size; i++)
    {
        if(i<K)
        {
            array1[i] = array[i]; 
            size1++; // Count the size of array1
        }
        else
        {
            array2[j++] = array[i]; // Copying array to another array
            size2++; // Count the size of array2
        }
    }
```
## Cyclically Permute
```c
array[size] = array[0]; 

for (i=0; i<size; i++)
        array[i] = array[i+1];
 ```
