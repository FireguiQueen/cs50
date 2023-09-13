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

Como output do nosso pequeno programa, veremos o caractere "%" sendo repetido 6 vezes, e não 5
```
$
$
$
$
$
$
```

