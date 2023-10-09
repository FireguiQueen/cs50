# Funções e suas Declarações: Estruturando a Lógica do Programa
Uma função é um componente essencial em programação, frequentemente comparado a um "miniprograma" dentro do programa principal. Para entender melhor, podemos pensar na utilidade de uma função para um software de controle financeiro, onde suas várias funcionalidades exemplificam o poder das funções em um contexto mais amplo.

O software abrange uma série de funcionalidades, incluindo:
- Registrar seus ganhos (entrada de dinheiro).
- Registrar suas despesas (saída de dinheiro).
- Gerar gráficos para avaliar a lucratividade.
- Criar gráficos que detalham as origens de seus ganhos (PIX, boleto, dinheiro em espécie, bitcoin, etc.).
- Apresentar gráficos que destacam as principais categorias de gastos (aluguel de escritório, eletricidade, água, etc.).

Essas são apenas algumas das funcionalidades que nosso software pode oferecer, e cada uma delas pode ser implementada como uma função distinta.
A importância das funções vai além da organização do código. Elas também desempenham um papel fundamental na reutilização de informações e na eliminação da redundância de código. Ao encapsular a lógica em uma função separada, evitamos repetir o mesmo código várias vezes.
Ao criar funções, estamos na verdade construindo blocos reutilizáveis que podem ser chamados sempre que necessário, tanto no contexto do mesmo programa quanto em diferentes projetos. Isso promove a modularidade e escalabilidade do código, permitindo adicionar, modificar ou remover funcionalidades com facilidade.
Dominar o uso de funções é uma habilidade crucial para desenvolvedores. Elas permitem a criação de programas mais organizados, flexíveis e eficientes, além de promover a colaboração e compartimentalização do trabalho em equipes de desenvolvimento. Portanto, ao criar software complexo, aproveite ao máximo o poder das funções.

#### Ao declarar uma função é esperado duas coisas:  
Esta função vai retornar um valor __OU__ vai executar aquele bloco, realizando ações no programa.
> _Ou ela fará ambas as coisas._

</br>

## int _(integer)_
Ao utilizar a palavra-chave `int`, indicamos que a função retornará um valor inteiro. É importante notar que a função _não é_ obrigada a retornar um valor; no entanto, caso você precise retornar um valor inteiro, utilize o 'int'.
```c
int retornarIdade(){
    return 17;
}
```
 
</br>

## void _(vazio)_
A palavra-chave `void` é usada para declarar funções que não retornam nenhum valor. Você pode estar se perguntando por que usar void se também poderíamos usar int para funções que não retornam valores. Acontece que é uma boa prática utilizar 'void' para funções que não retornam valores, mas executam ações.
```c
void frase(){
    printf("Hello, world! I'm learning C");
}
```

</br>

## Ponto e vírgula _(;)_
Quando nos aventuramos no mundo da programação em C, percebemos rapidamente que todas as linhas que contêm instruções, seja a chamada de funções, declaração de variáveis, retornos dentro de funções e muito mais, terminam com um ponto e vírgula (;). Você já parou para se perguntar por quê?

A razão por trás dessa prática é fundamental: cada ponto e vírgula sinaliza ao compilador C que uma instrução foi concluída. É como se fosse o fechamento de um pensamento, um marco que separa uma ação da próxima. Para entender melhor, considere a seguinte analogia linguística.

+ Imagine a seguinte frase em português: </br>
<q>Eu irei viajar amanhã. Será divertido.</q>

+ Agora, retiremos o ponto final: </br>
<q>Eu irei viajar amanhã Será divertido.</q>

Embora ainda seja possível entender a frase, fica evidente que algo está errado devido à falta do ponto final. A mesma lógica se aplica à linguagem C: a ausência do ponto e vírgula pode resultar em um código incorreto ou, em muitos casos, até mesmo em erros de compilação. A diferença crucial é que enquanto nossos cérebros podem lidar com ambiguidades na linguagem falada, uma linguagem de programação não possui essa flexibilidade.

Quando o compilador C analisa seu código, ele segue um conjunto rígido de regras. Cada ponto e vírgula indica que uma instrução foi terminada, o que permite que o compilador interprete corretamente a sequência de ações que você deseja executar. Portanto, esses pequenos símbolos desempenham um papel vital na estruturação e na clareza do seu código.

</br>

### Parâmetros em Funções em C 
Os parâmetros desempenham um papel fundamental no funcionamento das funções em linguagem C. Eles representam a maneira pela qual as funções recebem informações de entrada. Para compreender melhor esse conceito, considere uma função de soma como exemplo. O objetivo dessa função é adicionar dois valores e retornar o resultado da soma. No entanto, para que essa função seja flexível e não se limite a somar valores fixos, é necessário permitir que os valores a serem somados variem, dependendo da escolha do usuário. Como podemos tornar essa entrada de informação possível?

A resposta está nos parâmetros. Os parâmetros são variáveis que recebem valores quando a função é chamada. Eles permitem que você informe às funções os valores que deseja manipular e usar como base para as operações da função.

> Aqui está um exemplo de como usar parâmetros em C para criar uma função de soma:
```c
#include <stdio.h>

int somar(int x, int y){
    printf("A soma entre X e Y é: %i", x + y);
}
int main(){
    somar(4, 5) // retorna 9 
    somar(1, 2) // retorna 3 
    somar(3, 3) // retorna 6 
    somar(8, 4) // retorna 12 
}
```
Neste exemplo, a função somar recebe dois parâmetros, x e y, que representam os valores a serem somados. Os valores são passados como argumentos quando a função é chamada. Os parâmetros x e y permitem que a função realize a soma e retorne o resultado. Além disso, cada chamada da função pode produzir resultados diferentes, tornando-a versátil e reutilizável. Lembre-se sempre de declarar o tipo de retorno da função e usar return para retornar valores apropriados.

</br>
</br>

## Para que servem e como funcionam as bibliotecas
Uma biblioteca em C é um conjunto de funções, constantes e declarações que podem ser utilizadas por programas escritos nessa linguagem. Elas permitem aos programadores reutilizar códigos já desenvolvidos por outras pessoas, economizando tempo e esforço ao não precisarem "reinventar a roda" a cada novo projeto. As bibliotecas em C fornecem uma série de funcionalidades prontas para uso, como manipulação de strings, operações matemáticas, interação com o sistema operacional, entre outros.

A convenção de usar o sufixo ".h" nas bibliotecas em C vem da sigla "header", que em inglês significa cabeçalho. Um arquivo de cabeçalho contém declarações das funções, constantes e tipos definidos na biblioteca, permitindo que os programadores saibam como usar essas funcionalidades sem precisar examinar o código fonte completo da biblioteca. Além disso, esses arquivos também podem conter macros, estruturas de dados e outras informações necessárias para a integração da biblioteca com o código do programa.

Aqui estão algumas razões pelas quais as bibliotecas em C são importantes e tornam a programação mais prática:

+ Reutilização de código: _As bibliotecas oferecem um conjunto de funcionalidades testadas e otimizadas, permitindo que os programadores aproveitem o trabalho de outros e evitem a necessidade de escrever código semelhante repetidamente._

+ Eficiência: _Bibliotecas costumam ser desenvolvidas por programadores experientes e otimizadas para desempenho. Isso significa que você pode usar algoritmos e estruturas de dados eficientes sem precisar implementá-los do zero._

+ Abstração: _As bibliotecas fornecem interfaces abstratas para tarefas complexas. Isso permite que os programadores utilizem funções e métodos sem precisar conhecer todos os detalhes internos._

+ Padronização: _Bibliotecas populares, como a biblioteca padrão de C (libc), são padronizadas e amplamente suportadas em diferentes plataformas. Isso ajuda a criar programas portáveis que funcionam em diversos sistemas._

+ Economia de tempo: _Usar bibliotecas permite que você se concentre na lógica específica do seu programa, em vez de gastar tempo na implementação de funcionalidades genéricas._

+ Maturidade: _Bibliotecas bem estabelecidas são frequentemente testadas e atualizadas ao longo do tempo, o que contribui para a confiabilidade e estabilidade do seu código._

Um exemplo prático disso é a função printf. Essa função é usada para exibir informações na saída padrão, como o console. Imagine ter que escrever o código necessário para interagir com a saída do console toda vez que você quisesse exibir algo na tela. Seria um processo demorado e propenso a erros. Graças à biblioteca padrão de C, que inclui o arquivo de cabeçalho `<stdio.h>`, você pode simplesmente usar a função printf para exibir informações, economizando tempo e esforço.

É interessante observar que as bibliotecas seguem um padrão de "estilo". Por exemplo, o nome "stdio" é uma abreviação de "standard input output" (entrada e saída padrão), e esse nome nos indica imediatamente que o propósito dela é fornecer funções para o gerenciamento de informações de entrada e saída. Além disso, as funções oferecidas por essa biblioteca, como a "printf()", também têm nomes bem pensados. Pelo próprio nome, compreendemos que essa função tem o propósito de imprimir informações na saída, como resultado, no nosso console.

</br>
</br>

## Executavel pós compilação
Você já se perguntou o porquê dos caracteres aleatórios no seu bloco de notas ao tentar editar um arquivo executável? 

![image](https://github.com/FireguiQueen/CS50/assets/98475125/29a6caee-f0af-4d16-ae14-664c1e56ba77)

Antes de responder a esta pergunta, vamos pensar na compilação. Após criar o seu arquivo em C, você irá compilá-lo, pois todo aquele código precisa ser transformado em zeros e uns para a máquina poder entender. Após a compilação, será criado um arquivo executável (um arquivo que contém diversos zeros e uns). Sendo assim, caso você tente abri-lo pelo bloco de notas, vários caracteres "aleatórios" serão mostrados. Isso ocorre porque o bloco de notas é um software para fazer a leitura de bits e transformar-los em caracteres. Todos aqueles zeros e uns no arquivo executável são lidos pelo bloco de notas usando a tabela ASCII.

</br>
</br>

## Variáveis: o que são e como definir elas 
Antes de tudo, vamos entender como a memória RAM funciona.
A memória RAM é uma forma de memória volátil que o computador utiliza para armazenar dados que estão sendo ativamente usados pelo sistema operacional e pelos programas em execução. Ela é volátil porque frequentemente estamos abrindo e fechando softwares; assim, após fechar um software, não há necessidade alguma de manter informações dele em nossa memória RAM.

As variáveis são utilizadas para armazenar valores em nossa memória RAM. Quando você declara uma variável em um programa, o sistema operacional aloca um espaço na memória RAM para armazenar o valor dessa variável. Durante a execução do programa, é possível acessar e modificar o valor da variável diretamente na memória RAM. 
</br>
Uma analogia simples pode ser feita: a memória RAM é como um bairro, e as variáveis são como casas. Quando uma casa é construída no bairro, ela recebe um endereço. Afinal, essa casa irá acomodar seus moradores, receber entregas de comida, produtos e até visitantes.

Portanto, uma variável precisa conter um endereço, já que o valor dessa variável será utilizado posteriormente pelo programa. Como poderíamos utilizar esse valor se não soubermos onde ele está armazenado? Daí a importância do endereço.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/378b946f-f56e-4a0a-b7b9-a1dceb222a32)


Na matemática também existem variáveis, por exemplo: 'Y = 3' e 'X = Y + 1'. </br> Nesse caso, a nossa variável é 'Y' e recebe o valor '3'. O sinal de igual (=) que fica entre a variável e o valor não denota igualdade, mas sim atribuição de valor. Estamos atribuindo um valor a uma determinada variável.


#### Variáveis também podem receber funções, as quais, por sua vez, retornam um valor.
> Um exemplo prático com a linguagem JavaScript ilustra esse conceito. A função 'prompt' é empregada para criar uma janela na página, onde o usuário pode inserir um valor. Quando o usuário clica em 'OK', o valor digitado é passado como o segundo argumento para a função. Essa função, por sua vez, retorna (return) o valor inserido pelo usuário. No código a seguir, a variável 'nomeUsuario' armazena o valor inserido pelo usuário através do 'prompt', e esse valor é exibido no console. Sem o uso da variável, o valor inserido pelo usuário no 'prompt' não seria armazenado e acessível para uso posterior.
```js
const nomeUsuario = prompt('Qual o seu nome?');
console.log(nomeusuario) // retorna o nome digitado
```

</br>

## Tipos de Dados em JavaScript e C

### JavaScript

Em JavaScript, não é necessário definir o tipo de dado de uma variável. Por exemplo, ao criar uma variável para armazenar uma string, basta utilizar `const nome_da_variavel = "sua string aqui :D"`. O mesmo se aplica a outros tipos de dados:
- `const saldoDaConta = 4000`
- `const umNumeroMuitoGrande = 40000000000000000000000`
- `const umNumeroQuebrado = 4.13134101`
- `const fraseAleatoria = "Olá, meu nome é Kelvin Scott"`

### Linguagem C

No entanto, na linguagem C, essa liberdade não existe. Ao criar uma variável, é necessário especificar qual será o tipo de dado que ela irá conter. Por exemplo, se você deseja criar uma variável para armazenar um número inteiro, você usaria `int nome_da_variavel`.
Aqui, 'int' indica que o tipo dessa variável será um número inteiro.

### Alguns tipos de dados em C
- `int`  &nbsp; _(para números inteiros: -400, -200... 0, 1, 20, 200...)_
- `long` &nbsp; _(para números inteiros mais longos: -5000000000, 0, 490000000000)_
- `float` &nbsp; _(para números quebrados: 4.120, 7.9, 42.2...)_
- `char` &nbsp; _(para caracteres: '#', 'o', 'j'...)_

Ao observarmos esses dados, vemos que existem duas formas de representar os números inteiros: `long` e `int`, mas por quê?
A resposta é simples: o "int" possui uma limitação de 32 bits (4 bytes), ou seja, números que precisam de mais bits não conseguem ser representados pelo `int`. O 'int' utiliza 32 bits para armazenar os números, então o cálculo que usamos é "2^32", o resultado é 4.294.967.296 (4 bilhões, 249 milhões, 967 mil e 296), porém, lembre-se que o `int` serve tanto para representar números positivos quanto negativos, então precisamos dividir este resultado: metade será o limite de representação para números positivos e a outra metade para os números negativos.
No final de tudo, o tipo `int` pode representar no máximo 2 bilhões positivos ou 2 bilhões negativos.

Por esses motivos, foi criado o tipo `long`, que significa "longer integer" ou, em português, "número inteiro mais longo". O `long` possui uma limitação de 64 bits (8 bytes), ou seja, com o 'long', podemos representar números muito maiores.


___________________________________________________________

## Entendendo Algumas Funções

### printf()
A função `printf();` é uma função de saída, ou seja, ela gera saída de informações.
Essa função é responsável por exibir (imprimir) no console o que passamos como argumento.
Esta função é da biblioteca `<stdio.h>`.

```c
#include <stdio.h>

int main(){
    printf("Hello, world!"); // imprime "Hello, world" no console.
}
```

### scanf()
A função scanf() é uma função de entrada, ou seja, ela lida com a entrada de informações.
Essa função é responsável por permitir que o usuário insira um valor como argumento através do console. A função recebe dois argumentos:
1. Indica como interpretar o valor inserido pelo usuário.
2. Endereço de memória da variável onde o valor convertido será armazenado.
Esta função também faz parte da biblioteca <stdio.h>.
```c 
#include <stdio.h>

int main(){
    int numeroDigitado;
    scanf("%i", &numeroDigitado);
}
```

</br>


## O Operador "&" (E Comercial)
Como mencionado anteriormente, a função `scanf()` requer um segundo argumento, o qual é indicado por um "&" seguido pelo nome da variável. A razão para isso é simples: ao usar o "&" antes do nome da variável, estamos indicando o endereço de memória onde o valor inserido pelo usuário será armazenado. Sem o "&", estaríamos nos referindo ao valor da variável. Sendo assim, a função `scanf()` pode ser resumida na seguinte frase:
"Quero que você pegue o valor digitado pelo usuário e o converta de acordo com o primeiro argumento passado para a função. Em seguida, pegue o valor convertido e o armazene no LOCAL onde está a variável, realizando uma atribuição."

</br>
</br>

## Syntactic sugar (açúcar sintático)
Em ciência da computação, açúcar sintático refere-se à sintaxe dentro de uma linguagem de programação que é projetada para facilitar a leitura e a expressão de conceitos. Essa abordagem torna a linguagem mais amigável para uso humano, permitindo uma expressão mais clara, concisa ou até mesmo em um estilo preferido por alguns programadores.

Um exemplo ilustrativo disso é a maneira como expressamos que uma variável é incrementada em 1. No formato padrão, faríamos da seguinte maneira:
```c
int saldo = 500;
saldo = saldo + 1;
```

No entanto, com açúcar sintático, podemos simplificar para:
```c
int saldo = 500; 
saldo++     // faz a mesma coisa que 'saldo = saldo + 1'. 
saldo += 1  // faz a mesma coisa que 'saldo = saldo + 1'. 
```
A diferença entre 'saldo++' e 'saldo += 1' é que 'saldo++' é mais restrito, permitindo apenas o incremento de 1. Enquanto saldo += 1 possibilita a alteração do valor, por exemplo: 
- `saldo += 500` -> equivalente a `saldo = saldo + 500`.

E também permite a substituição do operador matemático, por exemplo: 
- `saldo *= 2` -> equivalente a `saldo = saldo * 2`.

</br>
</br>

## Diferenças entre Aspas Duplas e Simples em C
Ao programar em C, entender a diferença entre aspas duplas e simples é crucial para manipular caracteres individuais e cadeias de caracteres (strings) adequadamente.

+ __Aspas Simples (' '):__ As aspas simples são usadas para representar caracteres individuais. Quando você envolve um caractere com aspas simples, está declarando um único caractere. Por exemplo, 'a' representa o caractere 'a', '5' representa o caractere numérico 5 e '!' representa o caractere de exclamação.

+ __Aspas Duplas (" "):__ As aspas duplas são usadas para delimitar strings, que são sequências de caracteres. Uma string é uma coleção de caracteres, como palavras ou frases. Por exemplo, "hello" é uma string que contém os caracteres 'h', 'e', 'l', 'l' e 'o'.

Quando estamos comparando uma variável com um caractere individual, devemos utilizar aspas simples. Isso se deve ao fato de que aspas simples denotam um único caractere, permitindo uma comparação direta, como neste exemplo:
```cs
char c = 'y';
if (c == 'y') {
    printf("Agreed");
}
```

</br>

___________________________________________

# Estruturas condicionais
As estruturas condicionais são usadas para estabelecer condições. Quando a condição é verdadeira, um determinado bloco de código é executado. A principal estrutura condicional é o "IF" (e sim, existem outras). A sintaxe do "IF" é bastante simples de entender. "If" significa "se", e após o "if", inserimos uma expressão booleana (valores que são verdadeiros ou falsos).

Aqui está um exemplo em que definimos uma variável do tipo "integer" e atribuímos um valor a ela. Em seguida, apresentamos uma expressão: "Se X for maior do que 100, execute o seguinte bloco de código:"
```c
int x = 5;
if(x > 100){
    // se X for maior que 100, este bloco será executado.
    printf("X é um valor alto! É maior do que 100!");
}
```
> Note que para a expressão ser verdadeira, o X precisa ser _MAIOR_ que 100, não pode ser igual.

Agora, imagine que precisamos lidar com ainda mais condições. Em uma perspectiva mais ampla, o valor de X pode ser maior que 100, menor que 100 ou igual a 100. Isso nos dá três possibilidades. No entanto, não queremos utilizar três blocos "IF", uma vez que cada "IF" é sempre avaliado, independentemente de os anteriores serem verdadeiros ou falsos. Para ilustrar esse conceito, considere o seguinte código com três "IFs":
```c
int idadeDoVovo = 89;
if(idadeDoVovo > 70){ // caso a idade do "vovo" seja maior que 70:
    printf("O vovo tem mais de 70 anos!");
} 
if(idadeDoVovo < 70){ // caso a idade do "vovo" seja menor que 70:
    printf("O vovo tem menos de 70 anos!");
}
if(idadeDoVovo == 70){ // caso a idade do "vovo" seja igual a 70:
    printf("O vovo tem 70 anos!");
}
```
Você pode se perguntar o que há de errado com o código, e eu respondo: há uma coisa errada, mas ele funciona como deveria. Sim, isso mesmo, este código funciona perfeitamente, o problema está em relação ao design dele. O código funciona, porém, irá perder eficiencia. Isto ocorre pois os "ifs" são sempre lidos. Perceba que na primeira expressão já é __TRUE__: `caso a idade do "vovo" seja maior que 70`. Mas os outros IF serão lidos também, mas não deveriam, afinal, o primeiro já foi considerado verdadeiro e seu bloco foi executado, mas como há outros "IF", o compilador do C continuara fazendo a leitura. 
Como solução para este problema, temos o surgimento de mais duas palavras chaves: else if e else. 
O else if serve para nós adicionarmos uma condição que será lida caso o IF seja falso, ou caso o else if anterior seja falso. Por exemplo:
```c
int minhaIdade = 17;

if (minhaIdade > 50) { // Se a idade for maior que 50, esta condição é falsa, e a próxima será avaliada.
    printf("Você está ficando mais velho.."); 
} 
else if (minhaIdade > 30) { // Se a idade for maior que 30, esta condição é falsa, e a próxima será avaliada.
    printf("Você está no caminho para começar a ficar mais velho..");
}
else if (minhaIdade > 15) { // Esta condição é verdadeira porque o valor da variável "minhaIdade" é maior do que 15. Nenhum "else if" posterior será avaliado, encerrando a leitura aqui.
    printf("Você tem mais de 15 anos de vida!");
}
else if (minhaIdade == 10) {
    printf("Você tem 10 anos de vida!");
}

```

No exemplo acima, o "else" não foi mencionado, mas ele é bem simples de se entender. Podemos compreendê-lo como: "CASO NENHUMA CONDIÇÃO ACIMA FOR TRUE, FAÇA ISSO".
```c
int x = 10;
if(x > 10){ // o valor da variavel X não é maior do que 10. 
    printf("X é maior que 10!");
} else if (x < 10) // o valor da variavel X não é menor do que 10
{
    printf("X é menor que 10!");
} else{ // como nenhuma condição acima foi verdadeira. Excute isto:
    printf("Se X não é menor e nem igual a 10, X é igual a 10!");
}
```

De forma resumida:
- if: _se._
- else if: _se a condição anterior for falsa, tente isto. Se isto for verdade, acabe a leitura aqui._
- else: _se nada anteriormente for verdadeiro, execute este bloco._

E, claro, precisamos entender como uma condição é avaliada. Bem, é bastante simples. Linguagens de programação, incluindo o C, simplesmente avaliam se uma determinada expressão é "verdadeira" (true). Por exemplo:
```c
int x = 10;
if(x > 5){
    printf("X é maior do que 5.");
}
```
A primeira coisa a ser feita é a análise da expressão "x > 5". A variável X recebe o valor 10, portanto, esta expressão será avaliada como verdadeira. Tudo se resume a analisar a expressão e verificar se ela é falsa ou verdadeira.

</br>

### Como fazer duas expressões em único IF? 
A resposta é simples: utilizando operadores lógicos. Os operadores lógicos são como as conexões no mundo da programação. Temos dois principais operadores que serão apresentados agora:
+ || - significa "OR"
+ && - siginifica "AND" 

Podemos pensar que, para realizar uma ação em situações do mundo real, geralmente precisamos de condições e conjunções. Por exemplo:
- Paulo desafiou Julia a pular no rio;
- Julia concordou em fazê-lo __SE__ ele pagar R$5 para ela __E__ ele pular junto com ela.

Outro exemplo seria:
- Paulo desafiou Marcos a pular do barco;
- Marcos concordou em fazê-lo __SE__ Paulo pagar R$5 para ele __OU__ se Paulo andar de calcinha na rua.

No primeiro exemplo, existem duas condições para Julia pular no rio:
1. Paulo precisa pagar cincão pra ela;
2. Paulo precisa pular junto com ela. 

No segundo exemplo, existem duas condições para Marcos pular do barco, mas apenas uma delas precisa ser atendida:
1. Paulo precisa pagar cincão ao Marcos.
-  __OU__
- Paulo precisa andar de calcinha na rua no próximo dia.

Agora, deixando de lado as brincadeiras, vamos pensar em um pequeno programa que analisa a idade de uma pessoa usando operadores lógicos e informa se ela pode comprar bebidas alcoólicas ou não:
```c 
int idade = 18; 
bool pessoaTemDinheiro = true;
if (idade >= 18 && pessoaTemDinheiro)
{
    printf("Você pode comprar bebidas!");
}
else
{
    printf("Você não pode comprar bebidas!");
}
```

Ao analisar nosso código, podemos notar algo importante: os dois sinais >= juntos. Esse sinal está perguntando: "A idade é MAIOR ou IGUAL a 18?" Em seguida, encontramos o operador lógico && (E). E, por fim, temos uma variável chamada "pessoaTemDinheiro". Nesse caso, o nosso programa imprimirá "Você pode comprar as bebidas!" porque a variável "pessoaTemDinheiro" possui o valor "true".

Em resumo, estamos questionando: "A idade é maior ou igual a 18? E, além disso, a pessoa tem dinheiro?" Ambas as expressões serão avaliadas como 'true'. É importante notar que, devido ao uso do operador &&, a pessoa precisa satisfazer ambas as condições: ter 18 anos ou mais E ter dinheiro. 

</br>
</br>

# Laços de repetição
Os laços de repetição são uma parte fundamental da programação, usados para executar um bloco de código repetidamente até que uma condição específica seja atendida. Eles são uma maneira eficaz de automatizar tarefas que precisam ser executadas várias vezes ou de processar coleções de dados, como listas ou arrays.
> Enquanto uma condição for verdadeira, determinado bloco de código será executado. 

### for
O for é uma das estruturas de repetição disponíveis em C. Sua sintaxe pode parecer confusa à primeira vista, mas é, na verdade, bastante simples. Veja um exemplo:
```c
for(int num = 0; num < 5; num++){
    printf("isto será impresso no console 5 vezes.");
}
```
Certo, agora vamos entender o que cada informação antes do ";" significa dentro dos parentesis.
- `int num = 0;`: neste trecho, estamos realizando a inicialização do loop. Aqui, declaramos e inicializamos a variável de controle num.
- `num < 5`: esta é a condição do loop. Perguntamos: "A variável _num_ é _menor que_ 5?". Se essa condição for verdadeira, o código dentro do loop será executado. A variável de controle é crucial aqui, pois ela determina se a condição é verdadeira ou falsa.
- `num++`: esta é a etapa de incremento. A cada iteração do loop, adicionamos 1 ao valor da variável de controle num. Isso é importante para evitar um loop infinito. Se não incrementássemos num, o loop continuaria indefinidamente.

### while
O while acaba sendo um pouco mais simples. O while se traduz como "enquanto", ou seja, "enquanto isto for verdade, excute isto". Iremos definir nossa variável de controle fora do escopo do `while`. E o nosso incremento será feito dentro da repetição (para o loop não ficar infinito.). 

```c
int num = 0;
while(num > 2){
    printf("Isto será executado 2 vezes!");
    num++;
}

```

</br>

#### Como funciona o incremento e a condição
Esta explicação é aplicável tanto à estrutura 'for' quanto ao 'while'. Em ambos os tipos de laços, você precisa definir variáveis de controle.

Nos exemplos fornecidos anteriormente, essas variáveis foram inicializadas com o valor '0'. Vamos usar o 'while' como exemplo para entender melhor o processo.

Quando o programa entra no laço 'while' pela primeira vez, ele faz a seguinte pergunta: "O valor atual da variável é igual a 0 (o valor inicial) e é menor do que 2?" Se essa pergunta for respondida com "sim", o código dentro do 'while' é executado, e em seguida, somamos 1 à nossa variável de controle.

Na segunda iteração, o programa pergunta: "O valor atual da variável é igual a 1 (o resultado da iteração anterior) e é menor do que 2?" Se a resposta ainda for "sim", o código é executado novamente, e mais 1 é adicionado à variável de controle.

No terceiro ciclo, o valor da variável de controle agora é 2. O programa faz a pergunta: "O valor atual da variável é igual a 2 e é menor do que 2?" Neste ponto, a resposta é "não", pois 2 não é menor do que 2. Portanto, o código dentro do 'while' não é executado nesta iteração, e o laço é encerrado.

Em resumo, o incremento (adição de 1 à variável de controle em cada iteração) e a condição (verificação se a variável de controle atende a uma condição específica) são componentes fundamentais para controlar a execução dos laços 'for' e 'while'. Eles permitem que você execute o código repetidamente até que a condição não seja mais atendida. É importante entender como esses elementos funcionam para criar loops eficientes em seus programas.



### Recomendação de vídeos
- <a href="https://youtu.be/vVLhdyte9PA">Para que servem as bibliotecas stdio.h e stdlib.h | toCode</a> 
- <a href="https://youtu.be/yOyaJXpAYZQ">Comparing C to machine language
| Ben Eater</a> 
