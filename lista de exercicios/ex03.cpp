#include<stdio.h>
#include<stdlib.h>
#include <string.h>

main(){
	int idade;
	char nome [31];
	char sexo [2];
	
	printf("Digite seu nome: \n");
	fgets(nome, 31, stdin);
	
	printf("Digite seu sexo: [M] masculino, [F] feminino\n");
	fgets(sexo, 2, stdin);
	
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	
	if(stricmp(sexo, "f") == 0 && idade < 25){
		printf("%s", nome);
		printf("ACEITA\n");
	} else{
		printf("%s", nome);
		printf("NAO ACEITA\n");
	}
	
	//printf("%s\n", nome);
	//printf("%s\n", sexo);
	//printf("%i\n", idade);
	
	return(0);
	
}
