 #include <stdio.h>
 
 main(){
 	
 	int number1,number2,addition,subtraction,multiply,modulo;
 	float divide;
 	
 	printf("Enter number1\n");
 	scanf("%d",&number1);
 	printf("Enter number2\n");
 	scanf("%d",&number2);
 	
 	addition = number1 + number2;
 	subtraction = number1 - number2;
 	multiply= number1 * number2;
 	divide = number1 / number2;
 	modulo = number1 % number2;
 	
 	printf("Addition = %d\n",addition);
 	printf("Multiplication = %d\n",multiply);
 	printf("Subtraction = %d\n",subtraction);
 	printf("Divide = %.1f\n",divide);
 	printf("Modulo = %d\n",modulo);
 	
 }
 	
