# Algorítimos e seus problemas
Para se entender o que é um 'bug', podemos pensar que eles são nada mais do que problemas lógicos que ocorrem por falta de um raciocinio preciso; lembre-se, as máquinas precisam de todos os detalhes possíveis para fazer corretamente um programa, não deve haver ambiguidades.

## Importância do `printf()`
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

##### Como output do nosso pequeno programa, veremos o caractere "$" sendo repetido 6 vezes, e não 5
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

Agora ficou bem simples de solucionar o nosso bug. Podemos observar que o valor do "I" foi de 0 a 5, e cada valor diferente, ele printava o nosso caractere "$". Fazendo uma contagem rápida, temos 6 números totais como resultado: 0, 1, 2, 3, 4, 5.  

Vamos analisar o algoritimo feito:
- Inciar um loop
    1. Definir uma variável de inicialização: I = 0    (variável i recebe zero);
    2. Definir uma condição: Enquanto I for menor ou igual a 5 continue o loop (I <= 5);
    3. Se a condição acima for verdadeira (ou seja, se I for menor ou igual a 5), printe o caractere '$' no terminal.
    4. Por fim, adicionar +1 a nossa variável de controle. Na segunda vez que o "for" ser executado, o valor da nossa variável de inicialização será '1'. 

Vemos que o resultado no terminal nos mostrou que o valor de I foi até 5, e isto ocorreu justamente pela segunda etapa do nosso algoritimo, onde a condição era "I <= 5", isto significa que, se o "i" for menor do que 5, o nosso algoritmo ainda pode ser executado, por fim, a ultima vez que o 'for' se executou, o valor de sua variável valia 5, então foi perguntado: 
5 <= 5? Será considerado 'true', pois 5 não é menor do que 5, mas cinco é __igual__ a 5. 
Então para resolver nosso bug, basta tirarmos o operador aritmético de igualdade.
```c
#include <stdio.h>
int main(void)
{
    for(int i = 0; i < 5; i++)
    {
        printf("$ \n");              
    }
}
```


# 