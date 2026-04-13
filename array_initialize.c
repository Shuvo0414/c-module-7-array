#include <stdio.h>
int main ()
{
    int ar [5]= {10,20,30,40,50}; // value initializetion in array.

/*
    1.If the array size is defined as [5] but only 4 values are provided,
    the remaining element will be automatically initialized to 0.
    
    2.If you want to initialize all elements of the array to 0,
    you can write: int ar[5] = {0};
    This will set every element of the array to 0.
*/

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }
    

    return 0;
}