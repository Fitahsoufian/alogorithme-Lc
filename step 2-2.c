#include<stdio.h>
#include<conio.h>

main(){

    int a,b;
    char op;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("%ld  et 0x%x\n",sizeof(a),a);
    printf("%ld et 0x%x\n",sizeof(b),b);

    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Rest\n");
    scanf(" %c",&op);


   switch(op)
    {
    case '1'	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case '2'	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case '3'	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case '4'	:
        if (b != 0){
            printf("Division of Two Numbers is %d : ",a/b);
         } else {
            printf("Math error");
        }
        break;
    case '5':
        printf("Rest of Two Numbers is %d : ",a%b);
        break;
    }



}
