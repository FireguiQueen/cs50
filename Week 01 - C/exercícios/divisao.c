#include <stdio.h>

int main(void){
    int x, y;
    
    printf("Digite o valor de X: ");
    scanf("%i", &x);

    printf("Digite o valor de Y: ");
    scanf("%i", &y);

    // permitimos que o Z armazene números quebrados ou inteiros. 
    // transformamos X e Y em números quebrados. Pois se forem inteiros, o resultado será um número inteiro. 
    // Por exemplo: 4/2 = 2.0000 (resultado correto). 4/3 = 1.0000 (resultado errado, deveria ser 1.3333. 
    // isso acontece pois ao dividirmos numeros inteiros, obrigatoriamente o resultado será um inteiro.
    // o tipo de dado da variável Z não importa. Ele apenas define que a variável Z pode receber números quebrados.
    // lembra-se, primeiro é obtido o resultado ao lado direito da atrubuição. o C pega este valor e envia para a variável Z.  
    float z = (float)x / (float)y; 
    printf("A divisão entre X e Y é: ")
}