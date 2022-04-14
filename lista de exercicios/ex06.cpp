#include <stdlib.h>
#include <stdio.h>

main(){
	int num;
	int cont = 0;
		do{
	
	
		printf("Digite um numero: ");

	
		scanf("%i", &num);
		

		if(num >= 0 && num <= 25){
			cont = cont + 1;
		} else if(num >= 26 && num <= 50){
			cont = cont + 1;
		} else if(num >= 51 && num <= 75){
			cont = cont + 1;
		} else if(num >= 76 && num <= 100) {
			cont = cont + 1;
		}
	} while(num > 0);
		
		

	
	printf("Quantidade de numeros entre os intervalos: %i", cont);
	
	return(0);
}
