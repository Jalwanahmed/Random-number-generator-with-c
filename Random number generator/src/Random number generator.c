/*
 ============================================================================
 Name        : Random.c
 Author      : Jalwan Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    /* It returns the same sequence of random number
    on every execution of the program. */
    printf(" Random Numbers for you are: \n");
    for (i = 0; i <=3; ++i)
    {
        printf(" %d", rand());
     }
     return 0;
}
