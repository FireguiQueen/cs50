#include <stdio.h>


int main(void)
{
    char myName[9] = {'G', 'u', 'i', 'l', 'h', 'e', 'r', 'm', 'e'};

    for (int i = 0; i < 9; i++)
    {
        printf("%c", myName[i]);
    }
}