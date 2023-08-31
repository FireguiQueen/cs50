#include <stdio.h> 

int main(void){
    int x, y;  // define duas variáveis do tipo inteiro: x e y.

    printf("Olá! Vamos somar números inteiros?")
    printf("Digite o valor de X: ");
    scanf("%d", &x); // pega o valor inserido pelo usuário e define como ele será lido. Neste caso, o valor inserido pelo usuário se transforma num binário para números inteiros. Após isso, manda para o binário do valor para o endereço da variável X.

    printf("Digite o valor de Y: ");
    scanf("%d", &y); // pega o valor inserido pelo usuário e manda para o endereço da variável Y.


    printf("A soma entre X e Y é = %d", x + y); // faz a soma de x e y, pega o resultado em binário e o %d define como aquele binário será lido.
}