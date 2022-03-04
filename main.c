#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define N 100

void print (char str[]);
char * reverse (char str[]);

int main ()
{
    char str[N];
    int i =0,j=0;
    fgets(str,N,stdin);
    print(reverse(str));
    print("\n");
    print(str);
    return 0;
}

void print (char str[])
{
    printf("%s",str);
}
char * reverse (char str[]){
    char  res [strlen(str)];
    int j=0;
    for (int i = 0; i < strlen(str); ++i) {
        res[i]='\0';
    }
    for (int i = 0; i < strlen(str); ++i) {
        if(str[strlen(str)-i-1]!='\0'){
            j++;
            res[j]=str[strlen(str)-i-1];
        }
    }
    return res;
}