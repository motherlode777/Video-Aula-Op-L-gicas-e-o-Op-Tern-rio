#include <stdio.h>

//esse c�digo tem o objetivo de 
//demonstrar na pr�tica opera��es l�gicas em C

int main () {
	
	int A, B, C;
	A= 5; B= 2; C= 3;
	
	
	
	//primeira quest�o
	
	printf ("1- ");

	if (A > B && B < C){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	

	
	//segunda quest�o
	
	printf ("2- ");

	if (A > B || !(B < C)){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	
	

	//terceira quest�o
	
	printf ("3- ");
	
	if (A != A || B >= C){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	
	
	
	//quarta quest�o
	
	printf ("4- ");
	
	if (!(A-B) && A <= C){
		printf ("Verdadeiro!\n");
	} else {
		printf ("falso!\n");
	}
	
	system("pause");
	
	
	return 0;
}
