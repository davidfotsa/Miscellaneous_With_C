 //Programme table des multiplication
 #include <stdio.h>
 #include <stdio.h>
 #include <stdio.h>;
 #include <math.h>
 int i,j,k,l,m,n,a1,a2,b1,b2;
 int t[50][50];
 int p[50][50];
 int z[50][50];
 void main()
 {  printf("Entrer le nombre de ligne de la matrice A ");
	 scanf ("%d",&a1) ;
	 printf("Entrer le nombre de colonne de la matrice A ");
	 scanf ("%d",&a2) ;
	 for (i=0;i<a1;i=i+1){
	  for (j=0;j<a2;j=j+1){
		 printf ("A[%d,%d] = ",i+1,j+1) ;
		 scanf ("%d",&t[i][j]) ; }}
		 //printf("A[%d,%d]= %d \n",i+1,j+1,t[i][j]);}}


	 printf("Entrer le nombre de ligne de la matrice B\n");
	 scanf ("%d",&b1) ;
	 printf("Entrer le nombre de colonne de la matrice B\n");
	 scanf ("%d",&b2) ;
		 for (k=0;k<b1;k=k+1){
		  for (l=0;l<b2;l=l+1){
			printf ("B[%d,%d] = ",k+1,l+1) ;
			scanf ("%d",&p[k][l]) ;}}
			//printf("B[%d,%d]= %d \n",k+1,l+1,p[k][l]);}}

		  /*	for (m=0;m<a1;m=m+1){
			 for (n=0;n<b2;n=n+1){
			  printf("C[%d,%d]= %d \n",m+1,n+1,z[m][n]=0);}}  */

			  if (a2==b1)
			  {
				printf("La matrice C vaut:\n");
				for (i=0;i<a1;i=i+1)
				{
				  for (l=0;l<b2;l=l+1)
				  {
					z[i][l]=0;
					for (k=0;k<a2;k=k+1)
					{
					 z[i][l]=z[i][l]+t[i][k]*p[k][l];
					}
               printf("%d ",z[i][l]);
				  }
              printf("\n");
				}
			  }
				else
				{
				 printf("le nombre de ligne de la matrice A doit etre egal au nombre de colonne de la matrice B");
				}


 }

