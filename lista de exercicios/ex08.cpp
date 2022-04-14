#include <stdlib.h>
#include <stdio.h>.

main(){
	int maior5, num, resp;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num > 5){
			maior5++;
		}
		
		printf("Deseja continuar? digite 1 para sim e 0 para nao ");
		scanf("%d", &resp);
	} while(resp != 0);
	
	printf("Quantidade de numeros maiores que 5:  %d", maior5);
	
	return(0);
}
