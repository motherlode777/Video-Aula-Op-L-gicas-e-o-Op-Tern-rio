#include <stdio.h>

//esse código tem o objetivo de 
//demonstrar na prática operações lógicas em C

int main () {
	
	int A, B, C;
	A= 5; B= 2; C= 3;
	
	
	
	//primeira questão
	
	printf ("1- ");

	if (A > B && B < C){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	

	
	//segunda questão
	
	printf ("2- ");

	if (A > B || !(B < C)){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	
	

	//terceira questão
	
	printf ("3- ");
	
	if (A != A || B >= C){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	
	
	
	//quarta questão
	
	printf ("4- ");
	
	if (!(A-B) && A <= C){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	
	return 0;
}
