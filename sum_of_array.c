#include <stdio.h>
int main ()
{
    int n ; // Variable to store size of the array.
    scanf("%d", &n);
    int ar[n];// Declare an array of size n (dynamic array)
   

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);// Take input for each element of the array
    }

     int sum = 0;// Initialize sum variable to store total

    for (int i = 0; i < n; i++)
    {
        sum+=ar[i];// Add each array element to sum
        
    }
    printf("The total sum of array is : %d",sum);
    
    return 0;
}