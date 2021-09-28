#include<stdio.h>
enum sex {masculin=1,feminin=2} ;
typedef struct
{
	char nom[10];
	float age;
	sex sexe;
} personne;
void main()
{
	personne p;
	printf("Entrer votre nom ");
	scanf("%s",&p.nom);
	printf("Entrer votre age ");
	scanf("%f",&p.age);
	printf("Entrer votre sexe, 1 pour masculin, et 2 pour féminin");
	scanf("%d",&p.sexe);
   //p.sexe=masculin;
	printf("Bonjour %d !",p.sexe);
}