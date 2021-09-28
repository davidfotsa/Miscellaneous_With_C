#include<stdio.h>
//Liste chainée
#include<alloc.h>
#include<string.h>
#define l 10
typedef struct element
{
 char nom [l];
 element* suiv;
 element* prec;
}*pointeur;
pointeur p,q,r,t,s;
int n;
void main()
{
  printf("Longueur de la liste : ");
  scanf("%d",&n);
  //n=4;
  printf("Entrer la liste : \n");
  p=(element *)malloc(sizeof(element));
  scanf("%s",&p->nom);
  p->prec=NULL;
  p->suiv=NULL;
  q=p;
  //printf("%s\n",q->nom);
  int i;
  for(i=1;i<n;i++)
  {
	q->suiv=(element *)malloc(sizeof(element));
	scanf("%s",&(q->suiv)->nom);
	//printf("%s\n",(q->suiv)->nom);
	(q->suiv)->prec=q;
	q=q->suiv;
	q->suiv=NULL;
  }
  t=p;
  printf("Voici la liste saisie: ");
  while (t!=NULL)
  { printf("%s ",t->nom);
	 t=t->suiv;
  }
  t=p;
  r=q;
  while (t!=q)
  {r=q;
	//printf("\n*t= %s\n ",t->nom);
	while (r!=t)
	  {
		  if (strcmp(r->nom,(r->prec)->nom)<0)
		  {
			 (r->prec)->suiv=r->suiv;
			 if (r->suiv!=NULL) {(r->suiv)->prec=r->prec;};
			 r->suiv=r->prec;
			 r->prec=(r->prec)->prec;
			 (r->suiv)->prec=r;
			 if (r->prec!=NULL) {(r->prec)->suiv=r;};

			 if (r->suiv==p){p=r;t=r;/*printf("*p= %s ",p->nom);*/};
			 if (r->suiv==t){t=r;/*printf("*t= %s ",t->nom);*/};
			 if (r==q){q=r->suiv;/*printf("*q= %s ",q->nom);*/};

		  } else {r=r->prec;}
		  //printf("*r= %s ",r->nom);
		  s=p;
		  printf("\n\nLa liste actuelle: ");
		  while (s!=NULL)
			{ printf("%s ",s->nom);
			  s=s->suiv;
			}
	  }
	  t=t->suiv;
  }
  t=p;
  printf("\n\nVoici la liste triée: ");
  while (t!=NULL)
  { printf("%s ",t->nom);
	 t=t->suiv;
  }
  free(p); //libère l'espace d'adresse p
  free(q);
  /*free(t); déjà fait, vu que t=q
  free(r);  déjà fait, vu que r=t
  free(s);déjà fait, vu que s=nil
  */
}

