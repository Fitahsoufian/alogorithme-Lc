# include <stdio.h>

int num1, num2, a, b, resultat;

int main(){
	printf("veuillez entrer deux nombres \n Numero 1: ");
	scanf("%d",&num1);
	printf("veuillez entrer deux nombres \n Numero 2: ");
	scanf("%d",&num2);
	if (num1 > num2){
		a=num1;
		b=num2;
		}
	else{
	
		a=num2;
		b=num1;
	
	}
	while (b != 0){
	if (b % 2 == 1){
		b --;
		resultat += a;
		printf("= %d %d %d \n",a ,b ,resultat);
	}
	else {
		a *= 2;
		b /= 2;
		printf("= %d %d %d \n",a ,b ,resultat);
	}
		
		
		
		
		
	}
	printf("= %d",resultat);
	
	return 0;
	
	
}

