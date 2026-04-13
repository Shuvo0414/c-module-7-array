#include <stdio.h>
int main()
{
    // int myNumber [] ={10,20,30,40};
    // printf("%zu", sizeof(myNumber)); //output is :16


    int myNumbers[] = {10, 25, 30, 40, 50};
    int length = sizeof(myNumbers[0]);

    printf("%d", length); // output is :  5
    
    return 0;
}