#include <stdio.h>
int main ()
{
    // To demonstrate a practical example of using arrays, let's create a program that calculates the average of different ages:

    int ages [] ={20, 22, 18, 35, 48, 26, 87, 70};
    float avg , sum = 0;
    // Get the length of the array
    int length = sizeof(ages[0] / sizeof(ages));

    // Loop through the elements of the array and accumulate the sum
    for (int i = 0; i < length; i++)
    {
        // Loop through the elements of the array and accumulate the sum
        sum+=ages[i];
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / length;
    printf("The average age is : %.2f", avg);
    
    return 0;
}