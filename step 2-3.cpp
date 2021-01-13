#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
    int  a, b, c;
    float Delta, s1, s2 ;
    printf("entrer a");
    scanf("%d",&a);
    printf("entrer b");
    scanf("%d",&b);
    printf("entrer c");
    scanf("%d",&c);
    Delta = pow(b,2)-4*a*c;
    if (a==0 && b==0 && c==0){
	printf("tout reel est solution");
	}
	else if (a==0 && b==0){
	printf("l'equation nas aucun solution");
	}
	else if (a==0){
	printf("donc c est une equation de 1er degree X= %f", (double)c/b);	
	}
	else if (Delta>0){
	s1= (-b+sqrt(Delta))/2*a;
	s2= (-b-sqrt(Delta))/2*a;
	printf("solution 1:%f solution2:%f",s1 , s2);
	}
	else if (Delta==0){
		s1=-b/2*a;
		printf ("l' equation a un seul resultat %f" ,s1);
}
    else {
    	printf("aucun solution");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
