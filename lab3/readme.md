## Variable Decleration
```c
int i, max, min, max_2nd, min_2nd;
double sum = 0, avg = 0, variance = 0;
int size = 10;
```
## Array Decleration or Initialization
```c
int array[100] = {73, 80, 8, 40, 33, 57, 70, 92, 99, 85};
```
## Find Maximum
```c
max = array[0]; // Lets Take any one value from given array as a maximum
for(i=0; i<size; i++)
    {
        if(array[i]>max) // Any index value are greater from maximum
            max = array[i];
    }
```
## Find Minimum
```c
min = array[0]; // Lets Take any one value from given array as a minimum
for(i=0; i<size; i++)
    {
        if(array[i]>max)  
            if(array[i]<min) // Any index value are less then from maximum
                min = array[i];
    }
```
## Find Second Maximum
```c
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
```
## Find Second Minimum
```c
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
```
## Summation of Given Array
```c
for(i=0; i<size; i++)
        sum += array[i];
```
## Average of Given Array
```c
for(i=0; i<size; i++)
        sum += array[i];
    avg = sum/size; 
```
## Calculate Standard Deviation (For Non-Grouped Data)
```c
for(i=0; i<size; i++)
        variance += pow(array[i]-avg,2); // For each number: Subtract the Mean and square the result 

variance = sqrt(variance/10);
```
## First 92 Fibonacci Numbers
```c
array[0] = 0;
array[1] = 1;

for(i=2; i<size; i++)
        array[i] = array[i-1] + array[i-2];
```

