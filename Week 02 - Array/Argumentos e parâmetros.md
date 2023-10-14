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


## Sintaxe 
Vamos criar uma função que recebe dois argumentos e retorna a soma deles. Para isso, precisamos lembrar que 
os parâmetros, como foi mencionado anteriormente, são como variáveis. Então quando criamos uma função que possui um parâmetro, precisamos espeificiar o tipo dele. 

```c
int somar(int x, int y)
{
    return x + y;
}

int main(void)
{
    int num0 = 10; 
    int num1 = 50;

    somar(num0, num1);
}
```

No exemplo acima, a função `somar` é a responsável por retornar a soma entre dois números. 
O `int x` e o `int y` são os __parâmetros__ desta função.

Enquanto o `num0` e `num1` que estão __dentro__ do somar (linha 30), são os argumentos. 