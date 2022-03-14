#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int main()
#include <stdio.h>
#include <string.h>

void fun(char* s, char* t)
{
    /************found************/
    int   i;
    sl = strlen(s);
    for (i = 0; i < sl; i++)
        /************found************/
        t[i] = s[sl - i];
    for (i = 0; i <= sl; i++)
        t[sl + i] = s[i];
    t[2 * sl] = '\0';
}

void main()
{
    char s[100], t[100];
    printf("\nPlease enter string s:"); scanf("%s", s);
    fun(s, t);
    printf("The result is: %s\n", t);
}

