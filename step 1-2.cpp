#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a, b;
	char op;
	printf ("donner le premier nombre:");
	scanf("%d" ,&a);
	printf("donner le deuxieme nombre:");
	scanf("%d", &b);
	printf("donner operattion :");
	scanf(" %c",&op);
	
	switch (op){
	
	case'+' :printf("%d + %d = %d",a,b,a+b);
	break;
	case'-' :printf("\n%d - %d =%d",a,b,a-b);
	break;
	case'*' :printf("\n%d * %d =%d",a,b,a*b);
	break;
	case'/' :if(b!=0){
		printf("%d / %d =%d",a,b,a/b);
		printf("%d mod %d =%d",a,b,a%b);
	}
	else{
		printf ("\n error math");
		}
		
		}
	
	
	
	
	
}
