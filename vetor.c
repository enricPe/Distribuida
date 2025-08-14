#include <stdio.h>

int main() {
  
    int n;
    printf("\nQuantidade de dados a serem lidos:");
    scanf("%d", &n);
    
    int idades[n];

    float soma = 0;
    for (int i = 0; i < n; i++){
        printf("\nInforme a %d ª idade: ", i+1);
        scanf("%d", idades[i]);
        soma += idades[i]; 
    }
    float media = soma/n;

    int a;
    while (a < n){
        printf("\nIdade na posição %d:", idades[a]);
        a++;
    }
    
    printf("\nMédia das idades: %f", media);

    return 0;
}