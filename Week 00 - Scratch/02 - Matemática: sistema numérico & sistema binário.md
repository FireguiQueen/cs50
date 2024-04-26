#### Leitura recomendada: [Ciência da Computação: Introdução](https://github.com/FireguiQueen/CS50/blob/main/Week%2000%20-%20Scratch/01%20-%20Ci%C3%AAncia%20da%20computa%C3%A7%C3%A3o%3A%20Introdu%C3%A7%C3%A3o.md)

## Representação de Números
Imagine-se como um professor em sala de aula verificando a presença dos alunos. Para isso, você pode levantar um dedo de cada vez, representando cada pessoa. Esse sistema é chamado de 'sistema unário', onde cada dígito representa uma única unidade. No entanto, a contagem não permite ir muito longe. Somando os dedos erguidos, o máximo possível seria contar até 10 alunos.

Por outro lado, existem outras formas de representar números maiores usando o sistema unário.
Por exemplo, você poderia desenhar pequenos traços em uma folha, onde cada traço representa um aluno presente. 
Essa representação visual pode ser capaz de indicar uma alta quantidade de alunos presentes.

Mas existe um método ainda mais eficiente e prático para representar os alunos, conhecido como __sistema decimal ou base 10__. Neste método, agrupamos diferentes unidades numéricas (0, 1, 2, 3..). Ao combinar esses números distintos teremos um valor final, e cada __posição__ neste valor pode conter dez valores distintos, variando de 0 a 9. 

![analogia](https://github.com/FireguiQueen/CS50/assets/98475125/0f560714-8f1f-44fb-a092-3a2833aa61de)

Isso nos permite criar valores para representar a quantidade de alunos presentes de forma precisa e escalável.

<br>

## Como os humanos compreendem valores? 
Quando olhamos para o valor `250`, pensamos no número _duzentos e cinquenta__. Isso ocorre pois o 0 está na coluna das unidades, o 5 está na coluna das dezenas e o 2 está na coluna das centenas. 
- **Unidade:** 3 _(10⁰ * __3__ = 3)_;
- **Dezena:** &nbsp; 2  _(10¹ * __2__ = 20)_.
- **Centena:** 1 _(10² * __1__ = 100)_.
- **RESULTADO = 100 + 20 + 3**

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76)
> A regra fundamental da notação decimal é que cada posição à __esquerda__ de um número é _dez vezes maior do que a posição à sua direita_. Por isso que uma dezena é composta por 10 unidades, uma centena por dez dezenas, e assim por diante.

<br>

## Sistema Binário, eletricidade e a estrutura numérica
Acontece que, no mundo dos computadores, o sistema deles é fundamentalmente idêntico ao nosso.
A diferença é que os computadores só tem acesso a dois números: 0 e 1, em outras palavras, só tem acesso a dois bits. Por isso, eles fazem uso da base de dois (binário) para a criação de outros números.
> Bits é derivado de "binary digits". Dígitos binários são 0 e 1.

__Mas qual é o motivo pelo qual as máquinas operam exclusivamente com o binário?__
Antes disso, vamos refletir um pouco sobre como nós, seres humanos, interpretamos informações.
1. __INPUT:__ _Entrada de uma informação (seja ouvindo ou lendo)_
2. __PROCESSAMENTO:__ _Tratamento desta informação (pensamos como podemos resolver este problema)_
3. __OUTPUT:__ _Saída de uma solução (falamos ou escrevemos a resposta pensada na etapa anterior)_

Percebemos que nosso cérebro simplifica muito as coisas. O nosso 'input' (nossa entrada de informação) pode ser captada de diversas maneiras: ouvindo, vendo ou até mesmo pelo tato.
__No entanto, o que os computadores utilizam como INPUT?__ Na realidade, apenas eletricidade.
Algo que todos nós fazemos ao utilizar um dispositivo eletrônico é garantir que esteja conectado à tomada ou que tenha energia na sua bateria/pilha.
Através dessa eletricidade, começamos a representar informações. </br>
Um dispositivo que recebe eletricidade possui dois estados: desligado/ligado. Esse comportamento de ligar/desligar pode ser denominado de forma binária, 0 e 1.

Dado que os computadores possuem basicamente um único tipo de ENTRADA física (eletricidade), podemos aproveitar isso para armazenar informações.

Pense em três lâmpadas de luz. Se seguirmos um método convencional de contagem, teremos 3 como resultado, já que cada lâmpada representa uma unidade.

Porém, e se, ao invés disso, atribuirmos a cada posição das lâmpadas uma potência da base 2?
- Primeira posição:   2<sup>0</sup> (1)
- Segunda posição:    2¹ (2)
- Terceira posição:   2² (4)
> Com este metódo, podemos obter 7 unidades ao total, enquanto no outro, apenas 3 unidades.

E é dessa maneira que o computador opera. O sistema binário aparenta ser limitado por utilizar bits, mas é possível criar uma variedade infinita de outros valores. Em última análise, nos computadores, há milhões de interruptores (conhecidos como transistores) que podem assumir os estados de desligado ou ligado, 0 ou 1. Assim sendo, se você tem a habilidade de alterná-los entre esses estados, é possível criar uma sequência de dígitos de zeros e uns. Com essa sequência gerada entre '0' e '1', é possível gerar números cada vez maiores.

<details>
    <summary>Base decimal x base binária</summary>
    <h4>..10 <sup>4</sup> &nbsp; 10 <sup>3</sup>&nbsp; 10 <sup>2</sup> &nbsp; 10 <sup>1</sup>&nbsp; 10 <sup>0</sup> </h4>
    <img src="https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c"/>
    <h4>..10 <sup>8</sup> &nbsp; 2 <sup>4</sup>&nbsp; 2 <sup>2</sup> &nbsp; 2 <sup>1</sup>&nbsp; 2 <sup>0</sup> </h4> <a name="img2">
    <img src="https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e"/>
</details>


## Como os computadores criam outros números
Os computadores precisam de um sistema capaz de criar outros números além de 0 e 1. Mas eles não usam da base decimal `(10¹, 10², 10³..)`, e sim da base de dois: `2¹`, `2²`, `2³`.

Aprendemos que '1' representa 'ligado' pois na computação, o '1' representa passagem de energia, isso quer dizer que, ao colocar o '1' em uma determinada posição, estamos ativando o valor correspondente. Ao somarmos todos os números em laranja, obtemos 68 como resultado, e é dessa maneira que os _valores em binário são construídos_, __uma cadeia de zeros e uns__.

> Na imagem, os números em laranja representam os valores que foram ativados devido à presença de energia.
![Valores binarios](https://github.com/FireguiQueen/CC50/assets/98475125/736efe04-d419-4ace-9d14-83132d0a73a4)




