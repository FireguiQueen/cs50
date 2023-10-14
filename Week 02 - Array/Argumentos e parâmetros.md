# Parâmetros e argumentos
Vamos criar uma função que recebe dois argumentos e retorna a soma deles. Para isso, é importante lembrar que os parâmetros, como mencionado anteriormente, funcionam como variáveis. Quando criamos uma função que possui um ou mais parâmetros, precisamos especificar o tipo de dado que esses parâmetros aceitarão

Essa situação é comumente encontrada em várias circunstâncias, como, por exemplo, quando utilizamos a função `strlen` da biblioteca `string`. A função `strlen()` possui apenas um parâmetro, por consequência, ela requer apenas um único argumento. 
> Os parâmetros se assemelham a variáveis, e os argumentos são os valores que são atribuídos a essas variáveis.

```c
char nome[] = {'p', 'a', 'u', 'l', 'o'};
int quantasLetrasHa = strlen(nome);
```
Neste exemplo, o `nome` (que está dentro dos parênteses da função strlen) atua como o argumento. 
Dentro do corpo da função `strlen()`, há várias instruções que indicam o que fazer com o parâmetro. E quando passamos um argumento, esse parâmetro é substituído pelo valor do argumento fornecido.


## Sintaxe 
Vamos criar uma função que recebe dois argumentos e retorna a soma deles. 
Para isso, vamos precisar de dois parâmetros. E como mencionado anteriormente, eles funcionam como variáveis, sendo assim, precisamos definir o tipo de dado deles.

```c
int somar(int x, int y)
{
    return x + y;
}

int main(void)
{
    int num0 = 10; 
    float num1 = 50.4;

    somar(num0, num1);
}
```

No exemplo acima, a função `somar` é a responsável por retornar a soma entre dois números. 
O `int x` e o `int y` são os __parâmetros__ desta função.

Enquanto o `num0` e `num1` que estão __dentro__ do somar (linha 30), são os argumentos. 