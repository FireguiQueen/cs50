# Parâmetros e argumentos
Para o desenvolvimento de programas complexos, a presença de parâmetros desempenha um papel fundamental, uma vez que são os elementos responsáveis por receber entradas, ou seja, informações fornecidas ao programa. Um parâmetro é uma variável que está pronta para aceitar um valor dentro de uma função.

Essa situação é comumente encontrada em várias circunstâncias, como, por exemplo, quando utilizamos a função `strlen` da biblioteca `string`. A função `strlen()` possui apenas um parâmetro, por consequência, ela requer apenas um único argumento. 
> Os parâmetros se assemelham a variáveis, e os argumentos são os valores que são atribuídos a essas variáveis.

```c
char nome[] = {'p', 'a', 'u', 'l', 'o'};
int quantasLetrasHa = strlen(nome);
```
Neste exemplo, o `nome` (que está dentro dos parênteses da função strlen) atua como o argumento. 
Dentro do corpo da função `strlen()`, há várias instruções que indicam o que fazer com o parâmetro. E quando passamos um argumento, esse parâmetro é substituído pelo valor do argumento fornecido.
