#include <stdio.h>
int main ()
{
    int ages [] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages[0] / sizeof(ages));

     // Create a 'lowest age' variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    for (int i = 0; i < length; i++)
    {
        // Check if the current age is smaller than current the 'lowest age'
        if (lowestAge > ages[i])
        {
            // If the smaller age is found, update 'lowest age' with that element.
            lowestAge = ages[i];
        }
        
    }
    printf("The lowest age in the array is :%d", lowestAge);
    
    return 0;
}