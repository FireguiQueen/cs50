#include <stdio.h> 

int main(void)
{
    printf("Olá, isso é o início de um texto. Aqui ocorrerá uma quebra de linha. \n");
    printf("Esta quebra só ocorreu devido ao '\\n'. ");
    printf("O printf anterior não possui o \\n, logo, esta frase não será printada em outra linha.");
}