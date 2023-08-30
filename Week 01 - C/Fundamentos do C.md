# Funções e suas Declarações: Estruturando a Lógica do Programa
Uma função é um componente essencial em programação, frequentemente comparado a um "miniprograma" dentro do programa principal. Para entender melhor, podemos comparar uma função a um software de controle financeiro, onde suas várias funcionalidades exemplificam o poder das funções em um contexto mais amplo.

Imagine que estamos desenvolvendo um software de controle financeiro que abrange uma série de tarefas, incluindo:
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
> _Ou ela fará ambas as coisas. Mas isso geralmente é feito em funções separadas_

</br>

## int _(integer)_
Ao utilizar a palavra-chave `int`, indicamos que a função retornará um valor inteiro. É importante notar que a função _não é_ obrigada a retornar um valor; no entanto, essa é uma possibilidade.
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

Maturidade: _Bibliotecas bem estabelecidas são frequentemente testadas e atualizadas ao longo do tempo, o que contribui para a confiabilidade e estabilidade do seu código._

Um exemplo prático disso é a função printf. Essa função é usada para exibir informações na saída padrão, como o console. Imagine ter que escrever o código necessário para interagir com a saída do console toda vez que você quisesse exibir algo na tela. Seria um processo demorado e propenso a erros. Graças à biblioteca padrão de C, que inclui o arquivo de cabeçalho `<stdio.h>`, você pode simplesmente usar a função printf para exibir informações, economizando tempo e esforço.




</br>
</br>

## Compilação do código
Nosso código-fonte foi escrito em caracteres que podemos ler, mas precisa ser compilado: _convertido em código de máquina, padrões de zeros e uns que nosso computador possa entender diretamente._

### Recomendação de vídeos
- <a href="https://youtu.be/vVLhdyte9PA">Para que servem as bibliotecas stdio.h e stdlib.h | toCode</a> 
