//Programme partie enti�re
#include<stdio.h>
float x=0;
long i=0;
void main()
{
 do
 {
  printf("Entrer un nombre pour obtenir sa partie enti�re ");
  scanf("%f",&x);
  if (x>0)
  {for(i=0;i+1<=x;i++){i=i;}
  }else
  {for(i=0;i>x;i--){i=i;}
  }
  printf("La partie enti�re de %f est %ld\n\n",x,i);
 }while (1==1);
}