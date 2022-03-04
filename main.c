#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define N 100

void print (char str[]);

int main ()
{
    char str[N];
    fgets(str,N,stdin);
    print(str);
    return 0;
}

void print (char str[])
{
    printf("%s",str);
}