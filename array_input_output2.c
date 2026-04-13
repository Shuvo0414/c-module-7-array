#include <stdio.h>
int main()
{
    int ar [5];
    //this loop for input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]); // for user input. 
        // printf("ar[%d]\n", i);
    }
    // this loop for prit ar[i];
    for (int i = 0; i < 5; i++)
    {
         printf("ar[%d] = %d\n", i, ar[i]);
    }
    
    return 0;
}