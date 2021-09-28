//Programme division entière
#include<stdio.h>
long x=2;
long y=3;
long q=0;
long r=0;
long reste=0;

void diveucpos(long x,long y,long &q,long &r)
{
  if (y==0)
  {printf("Division par zéro!\n");
  }else
  {
	if (x<0){x=-x;}
	if (y<0){y=-y;	}
	r=x;
	q=0;
	while (r>=y)
	{
	 q=q+1;
	 r=r-y;
	}
  }
}

void main()
{
 do
 {
  printf("Entrer deux nombres x et y, puis obtenez le quotient et le reste de la division entière de x par y\n");
  printf("x = ");
  scanf("%ld",&x);
  printf("y = ");
  scanf("%ld",&y);
  diveucpos(x,y,q,r);
  reste=0;
  while (r!=0)
  {
	reste=reste+1;
	diveucpos(x-reste,y,q,r);
  }
  if ((x-reste)*y<0){q=-q;}
  printf("Le quotient et le reste de la division entière de %ld par %ld sont respectivement\n q= %ld et r= %ld\n\n",x,y,q,reste);
 }while (1==1);
}

