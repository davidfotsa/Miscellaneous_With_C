#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char name[15];
void main()
{
 flushall();
 scanf("%s",&name);
 printf("Salut %d", strlen(name));
}