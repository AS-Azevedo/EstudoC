#include <stdio.h>
#include <stdlib.h>


int main() {

int num[10], cont=0, menor=0, maior=0, a=0, b=0;



printf("Digite 10 numeros\n");

		while(cont<10){
	
	scanf("%i", &num[cont]);

	if(cont[num]>=0&&cont[num]<=5)
	
	a++;

	if(cont[num]>=6&&cont[num]<=10)

	b++;

	if(cont[num]<0)

		menor++;
	
	if (cont[num]>10)

	maior++;

	cont++;

}

	printf("Quantidade de numeros entre 0 e 5: %i\n",a);

	printf("Quantidade de numeros no intervalo de 6 a 10: %i\n",b);

	printf("Quantidade de numeros maiores que dez: %i\n",menor+maior);
	
	system ("Pause");
	return 0;

}

