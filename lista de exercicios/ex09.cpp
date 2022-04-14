#include <stdlib.h>
#include <stdio.h>.


main(){
	
	int num, resp;
	int soma = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num > 15 && num < 250){
			if( num % 2 != 0 && num % 3 == 0 ){
			soma = num + soma;
			}
		
		}
		
		printf("Deseja continuar? digite 1 para sim e 0 para nao ");
		scanf("%d", &resp);

	} while(resp != 0);
	
	printf("A soma de todos os números: %d", soma);
	return(0);
	
}
