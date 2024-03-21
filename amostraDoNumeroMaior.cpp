#include<stdio.h>

int main(void){
	float num1, num2;
	
	printf("Digite o valor do primeiro numero :");
	scanf("%f", &num1);
	
	printf("\n Digite o valor  do segundo numero :");
	scanf("%f", &num2);
	
	if (num1 > num2){
		printf("%.f %.f", num1, num2);
	}else{
		printf("%.f %.f", num2, num1);
	}
	
	
	return 0;
}
