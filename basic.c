//Faça um programa que leia dois números, calcule a soma entre eles, depois leia mais um número e subtraia esse número da soma calculada anteriormente.


#include<stdio.h>
int main()
{
	int a,b, x, soma, resultado;
	printf("digite dois numeros inteiros:\n ");
	scanf("%d%d", &a, &b);
	soma = a + b;
	printf("A soma dos numeros e:%d\n " , soma);
	printf("digite outro numero\n");
	scanf("%d", &x);
	resultado = soma - x;
	printf("subtraindo o valor digitado pela soma dos outros dois numeros, o resultado e:%d\n" , resultado);
	return 0;
}