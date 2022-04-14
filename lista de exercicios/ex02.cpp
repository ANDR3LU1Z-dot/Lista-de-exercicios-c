#include<stdio.h>
#include<stdlib.h>
#include <string.h>

main(){
	char sigla[3];
	int i;
	printf("Digite a sigla do seu estado: \n");
	
	//Função para atribuir a string a variavel
	fgets(sigla, 3, stdin); 
	
	//stricmp ira retornar o valor (0) se as duas strings forem iguais e não faz distinções entre letrar maiusculas e minusculas
	if(stricmp(sigla,"am") == 0){ 
		printf("Amazonense\n");
	} else if(stricmp(sigla,"sp") == 0){
		printf("Paulista\n");
	} else if(stricmp(sigla,"ba") == 0){
		printf("Baiano(a)\n");
	} else if(stricmp(sigla,"rj") == 0){
		printf("Carioca \n");
	} else if(stricmp(sigla,"pa") == 0){
		printf("Paraense\n");
	} else if(stricmp(sigla,"ce") == 0){
		printf("Cearense\n");
	} else{
		printf("Outros estados");
	}
	
	//printf("%s", sigla);
	return (0);
}
