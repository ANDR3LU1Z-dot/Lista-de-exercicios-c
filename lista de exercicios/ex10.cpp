#include <stdlib.h>
#include <stdio.h>

void bemVindo(){
	printf("Bem Vindo(a)\n");
	printf("Calculos\n");
	printf("Digite um numero inteiro: \n");
}

int soma (int a, int b){
	return a + b;
}

int mult (int a, int b){
	return a * b;
}

main(){
	int n1, n2, resSoma, resMult;
	
	bemVindo();
	scanf("%d", &n1);
	
	printf("Digite outro numero inteiro: \n"); 
	scanf("%d", &n2);
	
	resSoma = soma(n1, n2);
	printf("A soma dos numeros e: %d\n", resSoma);
	
	resMult = mult(n1, n2);
	printf("O produto dos numeros e: %d\n", resMult);
	
	
	return(0);
	
}
