/*Programme Table de Multiplication*/
#include<stdio.h>
//const float pi=3.14;
//#define pi 3.14
int a=1,b=10,x=7;
int i=a;
char rep[3];
void main()
{
 printf("Vous voulez la table de mutiplication de... ");
 scanf("%d",&x);
 printf(" Voulez vous préciser les bornes, oui ou non? ");
 scanf("%s",&rep);
 if ((rep[0]=='o')&(rep[1]=='u')&(rep[2]=='i'))
 {
  printf("  Entrer la borne inférieure ");
  scanf("%d",&a);
  printf("  Entrer la borne supérieure ");
  scanf("%d",&b);
  if (a>b)
  {
	a=a+b;
	b=a-b;
   a=a-b;
  }
 }
 for (i=a;i<=b;i=i+1)
 {
  printf("\n%d * %d = %d\n",x,i,x*i);
 }
}