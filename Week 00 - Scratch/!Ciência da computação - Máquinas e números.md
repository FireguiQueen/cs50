# O que é Ciência da Computação
Ciência da computação é a ciência que estuda as técnicas, metodologias, instrumentos computacionais e aplicações tecnológicas, que informatizem os processos e desenvolvam soluções de processamento de dados de entrada e saída pautados no computador.
Podemos pensar na resolução de problemas como o processo de pegar algumas informações (detalhes sobre nosso problema) e gerar alguns resultados (a solução para nosso problema). 


![image](https://github.com/FireguiQueen/CC50/assets/98475125/62364135-bb2d-467b-b31e-9bd1114e2061)

Input é 'entrada', ou seja, entrada de informação. Ela será jogada ao nosso programa, onde
há diversas instruções em relação ao tratamento desta informação. Por fim, será retornado para nós um output, ou seja, uma resposta.

</br>
</br>


## Representação de Números
Imagine-se como um professor em sala de aula verificando a presença dos alunos. Para isso, você pode levantar um dedo de cada vez, representando cada pessoa. Esse sistema é chamado de 'unário', onde cada dígito representa uma única unidade. No entanto, a contagem não permite ir muito longe. Somando os dedos erguidos, o máximo possível seria contar até 10 alunos.

Há um método mais eficiente para representar alunos, conhecido como sistema decimal ou base 10. Nele, iremos agrupar diferentes unidades, e cada posição neste valor pode abranger dez valores distintos, de 0 a 9, o que nos possibilita empregar números para identificar estudantes. Independentemente da quantidade de alunos, como mais de 2000, não existem restrições, já que é possível criar qualquer número por meio de sequências de zeros e noves.

Essa ação também pode ser traduzida para os computadores, onde facilitaria o seu trabalho:
- **Entrada (input):** Há 7 alunos presentes e um total de 30.
- **Processamento (algoritimo(s) para a resolução do problema):** Há 30 alunos no total e 7 presentes. Sendo assim, 30 - 7 = 23 alunos faltosos.
- **Saída (output):** Portanto, há 23 alunos ausentes.
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
Quando olhamos para o valor `123`, pensamos no número cento e vinte e três. Isso ocorre porque o 3 está na coluna das unidades, o 2 está na coluna das dezenas e o 1 está na coluna das centenas.
Cada posição nesse valor representa uma potência de base dez, uma vez que há dez dígitos possíveis para cada posição. A regra é que cada posição à esquerda de um número em notação decimal é dez vezes maior do que a posição à sua direita.
- **Unidade:** 3 _(10^0 * 3 = 3)_;
- **Dezena:** 2 _(10¹ * 2 = 20)_.
- **Centena:** 1 _(10² * 1 = 100)_.
- **RESULTADO = 100 + 20 + 3**

Chegamos à conclusão que um valor consiste em unidades foram agrupadas. E esse agrupamento de dígitos gera um valor com 'n' posições. Por exemplo, se tivermos um valor com 4 posições, como `3.150`, contamos da esquerda para a direita: unidade de milhar (10^3 * 3), centenas (10^2 * 1), dezenas (10^1 * 5) e unidades (10^0 * 0).


### Na matemática, isso pode ser representado desta maneira: 
> Cada posição possui a mesma base, porém com expoentes diferentes. A primeira posição possui o expoente 0 (10<sup>0</sup> = 1), a segunda possui o expoente 1 (10<sup>1</sup> = 10), e assim sucessivamente.  <a name="img1"> </a>

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76) 


</br>

## Sistema Binário e a Eletricidade
Acontece que, no mundo dos computadores, o sistema deles é fundamentalmente idêntico ao nosso.
A diferença é que os computadores só tem acesso a dois bits: 0 e 1, em outras palavras, só tem acesso a dois dígitos binários. 
> Bits é derivado de "binary digits". Dígitos binários são 0 e 1. 

__Mas qual é o motivo pelo qual as máquinas operam exclusivamente com o binário?__
Antes disso, vamos refletir um pouco sobre como nós, seres humanos, interpretamos informações.
1. __INPUT:__ _Entrada de uma informação (seja ouvindo ou lendo)_
2. __PROCESSAMENTO:__ _Tratamento desta informação (pensamos como podemos resolver este problema)_
3. __OUTPUT:__ _Saída de uma solução (falamos ou escrevemos a resposta pensada na etapa anterior)_

Certamente, percebemos que nosso cérebro simplifica muito as coisas. O nosso 'input' (nossa entrada de informação) pode ser captada de diversas maneiras: ouvindo, vendo ou até mesmo pelo tato.
__No entanto, o que os computadores utilizam como INPUT?__ Na realidade, apenas eletricidade.
Algo que todos nós fazemos ao utilizar um dispositivo eletrônico é garantir que esteja conectado à tomada ou que tenha energia na sua bateria/pilha.
Através dessa eletricidade, começamos a representar informações. Um dispositivo que recebe eletricidade possui dois estados: desligado/ligado. Esse comportamento de ligar/desligar pode ser denominado de forma binária, 0 e 1.

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










