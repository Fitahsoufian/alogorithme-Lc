#include<stdio.h>
int main ()
{
	int nbr, i, R ;
	printf("veuillez entrer un nombre");
	scanf("%d",&nbr);
	for(i=1;i<=10;i++){
		R=nbr *i;
		printf("%d * %d= %d\n :",nbr, i, R);
		
	}
	return 0;
	
}
