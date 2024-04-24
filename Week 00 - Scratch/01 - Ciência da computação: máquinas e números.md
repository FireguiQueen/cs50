# Ciência da Computação 
A Ciência da Computação é a ciência que desenvolve soluções por meio de máquinas. 
Podemos pensar que seu objetivo principal é automatizar resoluções de problemas do 
mundo real por meio de  um simples processo que se resume em: 
1. Coletar informações (entradas de informação) 
2. Gerar resultados (saídas de informação).

_______ 

![analogia](https://github.com/FireguiQueen/CS50/assets/98475125/f0285159-3d9c-41ba-9c06-f63f87babd8b)
> "Input" é 'entrada', ou seja, entrada de informação. Este 'input' será jogado ao nosso programa (a caixa preta), onde há diversas instruções em relação ao tratamento desta informação. Por fim, será retornado para nós um "output" (saída de informação), ou seja, uma resposta. E todas essas etapas podem resumir o que conhecemos como "ciência da computação". 

A Ciência da computação engloba tudo aquilo que se origina da computação.: algoritimos, softwares, rede, IA.. Mas no fim, todas essas ferramentas citadas tem um único propósito; __desenvolver seoluções por meio de máquinas__.

<br>

## Entendendo o conceito de input/ouput através de uma conversa entre duas pessoas
Essencialmente, assim como as máquinas, nós também necessitamos do que é conhecido como "input" (para receber informações sobre nosso problema) e também "output" para transmitir a resolução deste problema.

Na analogia seguinte, ocorre uma conversa entre duas pessoas. A mulher fez uma pergunta ao garoto, e após ponderar sobre a resposta, o garoto respondeu.

A pergunta chegou ao garoto como o que chamamos de "Input", uma entrada de informação. Para gerar uma resposta, ele processou essa entrada de informação (input) utilizando uma instrução simples (5.5.5; 5.5 = 25, 25.5 = 125). E após chegar a uma conclusão, ele respondeu à mulher, e isso é o que chamamos de saída de informação (output). 

Resumidamente, podemos dizer que o garoto recebeu uma entrada de informação (uma pergunta) e gerou uma saída de informação (uma resposta).

![analogia](https://github.com/FireguiQueen/CS50/assets/98475125/7fa663ed-7394-40e8-8bc7-0432a941f65b)


</br>
</br>


## Representação de Números
Imagine-se como um professor em sala de aula verificando a presença dos alunos. Para isso, você pode levantar um dedo de cada vez, representando cada pessoa. Esse sistema é chamado de 'sistema unário', onde cada dígito representa uma única unidade. No entanto, a contagem não permite ir muito longe. Somando os dedos erguidos, o máximo possível seria contar até 10 alunos.

Por outro lado, existem outras formas de representar números maiores usando o mesmo sistema, o sistema unário. 
Por exemplo, para cada aluno presente na sala, você poderia fazer um pequeno risco na folha, e dependendo do tamanho dela, seria possível colocar muitos riscos, representando uma alta quantidade de alunos presentes.

Mas há um método ainda mais eficiente para representar os alunos, conhecido como sistema decimal ou base 10. 
Nele, agrupamos diferentes unidades numéricas (0, 1, 2, 3..). 
Após juntar diferentes números, cada posição neste valor pode conter dez valores distintos, variando de 0 a 9, o que nos permite criar números para representar a quantidade de alunos presentes.

Essa ação também pode ser traduzida para os computadores, onde facilitaria o seu trabalho:
- **Entrada (input):** _há 7 alunos presentes e um total de 30._
- **Processamento (algoritimo(s) para a resolução do problema):** _há 30 alunos no total e 7 presentes. Sendo assim, 30 - 7 = 23 alunos faltosos._
- **Saída (output):** _há 23 alunos ausentes._
<details>
    <summary>Exemplo em código Javascript:</summary>
<code>  function alunosFaltosos(alunosPresentes, totalAlunos){
            console.log(totalAlunos - alunosPresentes);
        }
        alunosFaltosos(7, 30);
</code>
</details>


</br>
</br>

## Entendendo a Estrutura Numérica
Quando olhamos para o valor `123`, pensamos no número cento e vinte e três. Isso ocorre porque o 3 está na coluna das unidades, o 2 está na coluna das dezenas e o 1 está na coluna das centenas. </br>
Cada posição nesse valor representa uma potência de base dez, uma vez que há dez dígitos possíveis para cada posição. A regra é que cada posição à esquerda de um número em notação decimal é dez vezes maior do que a posição à sua direita.
- **Unidade:** 3 _(10<sup>0</sup> * __3__ = 3)_;
- **Dezena:** &nbsp; 2  _(10¹ * __2__ = 20)_.
- **Centena:** 1 _(10² * __1__ = 100)_.
- **RESULTADO = 100 + 20 + 3**

Chegamos à conclusão que um valor consiste em unidades foram agrupadas. E esse agrupamento de dígitos gera um valor com 'n' posições. 
> Como o valor `3.150` (há 4 posições), contamos da esquerda para a direita: unidade de milhar (10^3 * 3), centenas (10^2 * 1), dezenas (10^1 * 5) e unidades (10^0 * 0).


### Na matemática, isso pode ser representado desta maneira: 
> Cada posição possui a mesma base, porém com expoentes diferentes. A primeira posição possui o expoente 0 (10<sup>0</sup> = 1), a segunda possui o expoente 1 (10<sup>1</sup> = 10), e assim sucessivamente.  <a name="img1"> </a>

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76) 


</br>

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










