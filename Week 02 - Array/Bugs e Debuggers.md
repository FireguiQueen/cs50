# Algorítimos e seus problemas
Para se entender o que é um 'bug', podemos pensar que eles são nada mais do que problemas lógicos que ocorrem por falta de um raciocinio preciso; lembre-se, as máquinas precisam de todos os detalhes possíveis para fazer corretamente um programa, não deve haver ambiguidades.

Vamos pensar num algoritimo onde você precisa printar o caractere '%' 5 vezes. 
Para construí-lo é bem simples, basta fazer o uso de um loop.
```c
#include <stdio.h>
int main(void)
{
    for(int i = 0; i <= 5; i++)
    {
        printf("$ \n");
    }
}
```

Como output do nosso pequeno programa, veremos o caractere "$" sendo repetido 6 vezes, e não 5
```
$
$
$
$
$
$
```

Bem, queriamos o cifrão sentido repetido 5 vezes, e não 6. O importante agora é pensar em voz alta: "Isto é um bug". O que fazer para solucioná-lo?
Uma ferramenta "arcaica" porém muito útil quando trabalhamos com programas pequenos é a função `printf();` da biblioteca stdio.h.
Com ele podemos fazer com que o valor do nosso "i" (variável de controle/inicialização) seja printada toda vez que nosso "for" rodar, por exemplo:
```c
#include <stdio.h>
int main(void)
{
    for(int i = 0; i <= 5; i++)
    {
        printf("O valor de I é: %i \n", i);  // Variável 'i' sendo chamada.
        printf("$ \n");                      // nosso caractere sendo printado. 
    }
}
```

Após compilar e executar o código acima, teremos o seguinte resultado em nosso terminal:
```
O valor de I é: 0 
$

O valor de I é: 1 
$

O valor de I é: 2 
$

O valor de I é: 3 
$

O valor de I é: 4 
$
 
O valor de I é: 5 
$ 
```