#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	float m, a, imc;
	
	printf("Massa (kg): \n");
	scanf("%f", &m);
	
	printf("Altura (m): \n");
	scanf("%f", &a);
	
	imc = m / pow(a, 2);
	printf("IMC: %2.f \n", imc);
	
	if(imc < 18.5){
		printf("Abaixo do peso ideal\n");
	} else if(imc > 18.5 && imc < 25.0){
		printf("Peso Normal");
	} else if(imc > 25.0 && imc < 30){
		printf("Acima do peso \n");
	} else{
		printf("Obeso \n");
	}
	return (0);
}
