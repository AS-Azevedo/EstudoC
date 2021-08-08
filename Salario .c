#include<stdio.h>
#include<stdlib.h>

int main()
{	
	
	float DSR=0, INSS=0, salario_liquido=0, IR=0, valor=0, horas=0, salario=0, salario_mes=0, salario_bruto=0, ir;
	
	printf("Quantas horas o senhor(a) trabalha pro dia?\n");
	scanf("%f", &horas);
	printf("Qual eh o valor da hora?\n");
	scanf("%f", &valor);
	
	salario = (horas*valor);
	salario_mes = (salario*30);
	DSR = (salario_mes/6);
	salario_bruto = (salario_mes + DSR);
	INSS = (salario_bruto*0.11);
	IR = (salario_bruto-INSS);
	
	
	if (IR <= 1903.98)
	{
		ir = 1;
		salario_liquido = (IR*ir);
	}
	
	if((IR >= 1903.99)&& (IR <= 2826.65))
	{
		ir = 0.075; 
		salario_liquido = (IR*ir);
		
	}
	
	if((IR >= 2826.66) && (IR <=3751,05))
	{
		ir = 0.15;	
		salario_liquido = (IR*ir);		
	}	
	
	if ((IR >= 3751.06) && (IR<= 4664.68))
	{
		ir=0.225;
		salario_liquido = (IR*ir);
	}
	if(IR>4664.68)
	{
		ir=0.275;
		salario_liquido = (IR*ir);
	}
	
	printf("O salario bruto  eh: %.2f\n", salario_bruto);
	printf("O INSS eh: %.2f\n", INSS);
	printf("O imposto de renda eh: %.2f\n", (IR-salario_liquido));
	printf("O salario liquido eh: %.2f \n", salario_liquido);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("Pause");
	return 0;	
}
