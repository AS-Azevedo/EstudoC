#include<stdio.h>
#include<stdlib.h>
int main(){
    /*int x;
    int i = 10;
    printf("Digite um valor");
    scanf("%i", &x);*/
    
    //for(declaraçao da variavel; condicao do tetse logico; incremento ou decremento)
    /*for(int y = 0; y <= 10; y++) //y++ <=> y = y + 1, caso eu quisesse  de 2 em 2 seria y = y + 2
    {
    printf("%i X %i = %i\n",x,y,(x*y));
    }*/
    
    //while(condição ou teste lógico)
  
    /*while(i>=0)
    {
    printf("%d X %d = %d\n", x, i, (x*i));
    i--;     
    }*/
    
    /*do
    {
    printf("%d X %d = %d\n", x, i, (x*i));
    i--;
    }while (i>=0);*/       
    int x;
    char op;
          
    do 
    {
        printf("Digite um valor");
        scanf("%i", &x);
        for(int i = 0; i <= 10; i++)
        {
                printf("%i X %i = %i \n", x, i, (x*1));  
        }  
    
        printf("Deseja continuar s - sim ou n - não");
        scanf("%s", &op);
    }
    printf("Prontinho!!");
    system ("Pause");
    return 0;
}
