#include<stdio.h>
#include<string.h>
void main()
{
 FILE* fichier;
 char nom[25];
 char* texte;
 int n=0;
 scanf("%s",&nom);
 //nom="C:\fotsa.txt";
 //printf("%s ",nom);
 fichier=fopen(nom,"w");
 //scanf("%d",&n);
 n=2;
 //fwrite(&n,sizeof(int),1,fichier);
 texte="ok ";
 fprintf(fichier,"%s\n %d",texte,n);
 fclose(fichier);
}