#include <stdio.h>
int main()
{
    int n; // Take input size of the array--> array[].
    scanf("%d", &n);
    int ar[n];

    // Then take n elements from the user and store them in the array[]={};.
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &ar[i]);
    }

    /*
    o print the array in reverse order:
    - We start from (n - 1) because array index always starts from 0.
      So the last element is at index (n - 1), not n.
    
    - Condition (i >= 0) means we continue the loop until we reach
      the first element (index 0).
    
    - i-- means we decrease the index step by step,
    moving from the last element to the first.
    order.

    🧠 Easy trick to remember
    Forward:  i = 0 → n-1 → i++
    Reverse:  i = n-1 → 0 → i--

    */
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}