#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int nomber, p=0, i;
	printf("donner nombre :");
	scanf("%d",&nomber);
	
	for(i=1;i<=nomber;i++){
		if (nomber%i==0){
			p++;
		}
		else if(p==2)
		printf ("le nomber est premier");
		else if (p>2)
		printf ("nomber non premier");
	
		
	}
	
	
	
	
	
	
	
	
}

