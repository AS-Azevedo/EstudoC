#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int turma;
	int alunos;
	float media_nota;
	int total;
	float media_total = 0;
	int aprovados = 0;
		
		
		
	printf ("Quantas turmas?\n");
	scanf("%i", &turma);
				
	int i;
	for (i = 0; i <= turma; i++){
		printf ("Qual o numero de alunos dessa turma?\n");
		scanf("%i", &alunos);
		total += alunos;
		media_total = 0;
		int j;
		for (j = 1; j <= alunos; j++)
		{
			printf("Qual a media desse aluno?\n");
			scanf("%f", media_nota);
			if (media_nota >= 7)
				aprovados++;
			media_total += media_nota;
			
		}
		printf ("media da turma: %.2f\n", media_total/ alunos);
	}
	printf ("Qtde aprovados: %d\n", aprovados);
	printf("Percentual aprovados: %2.f%%\n", (aprovados/total)*100);
	system ("pause");
	return 0;
}
