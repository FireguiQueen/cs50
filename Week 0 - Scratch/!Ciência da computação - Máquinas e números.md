# O que é Ciência da Computação
Ciência da computação é a ciência que estuda as técnicas, metodologias, instrumentos computacionais e aplicações tecnológicas, que informatizem os processos e desenvolvam soluções de processamento de dados de entrada e saída pautados no computador.
Podemos pensar na resolução de problemas como o processo de pegar algumas informações (detalhes sobre nosso problema) e gerar alguns resultados (a solução para nosso problema). 

![image](https://github.com/FireguiQueen/CC50/assets/98475125/62364135-bb2d-467b-b31e-9bd1114e2061)

Input é 'entrada', ou seja, entrada de informação. Ela será jogada ao nosso programa, onde
há diversas instruções em relação ao tratamento desta informação. Por fim, será retornado para nós um output, ou seja, uma resposta.

</br>
</br>


## Representação de Números
Imagine-se como um professor dando aula e, ao final dela, você decide verificar quantos alunos estão presentes. Para isso, você pode levantar um dedo de cada vez, representando cada pessoa, mas não pode contar muito alto. Esse sistema é chamado de 'unário', onde cada dígito representa uma única unidade.

No entanto, existe um sistema mais eficiente para representar os alunos. Esse sistema é conhecido como sistema decimal, ou base 10, pois existem dez valores diferentes que um dígito pode representar. Assim, usaremos números para representar os estudantes. Essa base vai de 0 a 9 e serve como base para outros números. Portanto, mesmo se houver mais de 2000 alunos presentes, não haverá limitação, pois qualquer número pode ser criado usando os dígitos de 0 a 9.

Essa ação também pode ser traduzida para os computadores, onde facilitaria o seu trabalho:
- **Entrada (input):** Há 7 alunos presentes e um total de 30.
- **Sistema (processamento da informação):** Há 30 alunos no total, o que significa que faltam 30 - 7 = 23 alunos.
- **Saída (output):** Portanto, há 23 alunos ausentes.


</br>
</br>

## Como compreendemos os números
Quando olhamos para o valor `123`, pensamos no número cento e vinte e três. Isso ocorre porque o 3 está na coluna das unidades, o 2 está na coluna das dezenas e o 1 está na coluna das centenas.
Cada posição nesse valor representa uma potência de dez, uma vez que há dez dígitos possíveis para cada posição. A regra é que cada posição à esquerda de um número em notação decimal é dez vezes maior do que a posição à sua direita.
- **Unidade:** 3 _(10^0 * 3 = 3)_;
- **Dezena:** 2 _(10¹ * 2 = 20)_.
- **Centena:** 1 _(10² * 1 = 100)_.
- **RESULTADO = 100 + 20 + 3**

Chegamos à conclusão de que qualquer valor consiste em unidades foram agrupadas. E esse agrupamento de dígitos gera um número com 'n' posições. Por exemplo, se tivermos um valor com 4 posições, como `3.150`, contamos da esquerda para a direita: unidade de milhar (10^3 * 3), centenas (10^2 * 1), dezenas (10^1 * 5) e unidades (10^0 * 0).


### Na matemática, isso pode ser representado de duas maneiras: 

> Para resultar unidades, basta multiplicar seu digíto por 1. Para resultar em dezenas, multiplicar seu digíto por 10. Para centenas, multiplica-lo por 100. 

![Explicação-1](https://github.com/FireguiQueen/CC50/assets/98475125/cc43c2df-c7c0-4d91-bd86-b6047e0e4a91)

> Também podemos ver o mesmo resultado, mas usando potênciação desta vez. A maneira anterior é exatamente igual a esta, porém, ela faz uso dos resultados das potênciações de maneira direta. Mas no fim é a mesma coisa.  <a name="img1"> </a>

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76) 


</br>

## Sistema Binário e a Eletricidade
Acontece que, no mundo dos computadores, o sistema deles é fundamentalmente idêntico ao nosso.
A diferença é que os computadores só tem acesso a dois bits: 0 e 1, em outras palavras, só tem acesso a dois dígitos binários. 
> Bits é derivado de "binary digits". Dígitos binários são 0 e 1. 

Mas qual é o motivo pelo qual as máquinas operam exclusivamente com o binário?
Antes disso, vamos refletir um pouco sobre como nós, seres humanos, interpretamos informações.

1. Entrada de uma informação (seja ouvindo ou lendo)
2. Tratamento desta informação (pensamos como podemos resolver este problema)
3. Saída de uma solução (falamos ou escrevemos a resposta pensada na etapa anterior)

Certamente, percebemos que nosso cérebro simplifica muito as coisas. O nosso 'input' (nossa entrada de informação) pode ser captada de diversas maneiras. Exemplos:
> Pessoa 'a' pergunta a pessoa 'b' quanto é 1+1. Nesse contexto o INPUT usado pela pessoa 'b' foram seus ouvidos.

> Pessoa 'a' escreve uma carta perguntando a pessoa 'b' quanto é 1+1. Nesse contexto o INPUT usado pela pessoa 'b' foram seus olhos.

No entanto, o que os computadores utilizam como INPUT? Na realidade, apenas eletricidade.
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


* Nossa base (decimal)
> ..10 <sup>4</sup> &nbsp; 10 <sup>3</sup>&nbsp; 10 <sup>2</sup> &nbsp; 10 <sup>1</sup>&nbsp; 10 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c)


* Base das máquinas (binário) <a name="img2"> </a>
> ..10 <sup>8</sup> &nbsp; 2 <sup>4</sup>&nbsp; 2 <sup>2</sup> &nbsp; 2 <sup>1</sup>&nbsp; 2 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e)

## Diferenças entre humanos e máquinas na forma de representar números
Os computadores também precisam de um sistema capaz de criar outros números.
Mas eles não usam da base decimal, e sim da base de dois: `2¹`, `2²`, `2³`.

Na ilustração <a href="#img1">[...]</a>, podemos observar como criamos valores além dos dígitos de 0 a 9 utilizando a base decimal. 

Com as máquinas, a maneira de compreendermos esta coluna muda um pouco. 
Como podemos ver nesta imagem, cada _casa_(ou posição) representa uma potência de base 2.
A primeira posição é a 2<sup>0</sup>, a segunda é a 2¹, a terceira 2² e assim respectivamente.

Conforme já mencionado previamente, há uma razão especial pela qual as máquinas usam o sistema binário. E com essa coluna abaixo, conseguimos entender como números maiores que zero e um são formados.
Se '1' representa 'ligado', isso quer dizer que, ao colocar o '1' em uma determinada posição, estamos ativando o valor correspondente. Na imagem, os números em laranja representam os valores que foram ativados devido à presença de energia.
Ao somarmos todos os números em laranja, obtemos 68 como resultado, e é dessa maneira que os valores em binário são construídos, uma cadeia de zeros e uns.

![Valores binarios](https://github.com/FireguiQueen/CC50/assets/98475125/736efe04-d419-4ace-9d14-83132d0a73a4)


#### Resumo
Fazemos o uso do número '10' pois é o total de números que há em nossa base. Há 10 possíveis resultados para cada casa numérica. 








