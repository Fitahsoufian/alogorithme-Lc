#include<stdio.h>
#include<stdlib.h>

int main() 
{

    int a=21, b=15, produit, reste;
    reste=a%b;
    while(reste != 0){
    	a=b;
    b=reste;
    reste=a%b;
	}
   printf("le pgcd est :%d",b);
    




}
