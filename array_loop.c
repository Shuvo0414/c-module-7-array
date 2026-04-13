#include <stdio.h>
int main()
{
    int ar[] = {5, 10, 20, 30, 40};
    int length = sizeof(ar) / sizeof(ar[0]); // if i use it then i need to write like this otherwise its give me wrong .
    /*
    Because:

   1️⃣ sizeof(ar)
    *gives total memory size of the array.
    *In my case:
    5 elements × 4 bytes = 20 bytes.

    2️⃣ sizeof(ar[0])
    gives size of one element
    = 4 bytes
    ✅ So:
    length = 20 / 4 = 5 ✔



    */

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}