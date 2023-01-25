#include <stdio.h>

//esse código tem como objetivo demonstrar
//o funcionamento do operador ternário

int main () {
	
int A, B;
A=5;

	// if (A > 0){
	//	B= 10;
	//} else {
	//	B= 0; 
	//} 
	
	 B = (A > 6) ? 10 : A*3;  
	
	printf ("B == %d", B);
	
	return 0;
}

