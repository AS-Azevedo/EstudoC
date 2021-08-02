#include <stdio.h>
#include <stdlib.h>
int main()
{
	int carteiraMotorista;
	int numeroMultas;
	int dividaMotorista;
	int totalArrecadado;
	int aux;
	int maximoMultas = -1;
	int maiorInfrator;
	
	
	do
	{
		printf("Numero da carteira:");
		scanf("%d", &carteiraMotorista);
		if (carteiraMotorista != 0)
		{
			printf("Quantas Multas?\n");
			scanf("%d", &numeroMultas);
			if (numeroMultas > maximoMultas)
			{
				maiorInfrator = carteiraMotorista;
			}
			dividaMotorista = 0;
			int i;
			for(i = 1; i <= numeroMultas; i++)
			{
				printf ("valor dessa Multa:");
				scanf ("%d:", &aux);
				dividaMotorista += aux;	
			}
			printf ("%d:%d\n", carteiraMotorista, dividaMotorista);
			totalArrecadado = totalArrecadado + dividaMotorista;
		}
		else
		{
			printf("Ate logo!");
		}
	} while (carteiraMotorista != 0);
	printf("Total arrecadado: %d\n", totalArrecadado);
	printf("Maior infrator: %d", maiorInfrator);
	
	
	
	
	system("Pause");
	return 0;
}
