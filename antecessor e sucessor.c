#include<stdio.h>
#include<stdlib.h>
int main(){
    float x;
    printf("Digite um valor\n");
    scanf("%f", &x);
    printf("Seu antecessor\n%.2f\n", (x-1));
    printf("Seu sucessor\n%.2f\n", (x+1));
    system("Pause");
    return 0;
}    
