#include <stdio.h>

//DEMONSTRAÇÃO OPERADORES RELACIONAIS

//Esse código visa demonstrar como uma operação
//relacional tem resultado de 1 - 0 / true - false

int main (){
	
int num1= 2;
int num2= 4;
int num3=6;

int a, b, c;

a= num1 > num2;

printf ("\nnum1 > num2 = %d", a);

b= num1 < num2;

printf ("\nnum1 < num2 = %d", b);

c= num2 == num3;


printf ("\nnum2 == num3 = %d", c);
	
	return 0;
}
