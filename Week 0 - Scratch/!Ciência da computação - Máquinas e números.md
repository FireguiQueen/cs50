# O que é Ciência da Computação
A ciência da computação é fundamentalmente sobre resolução de problemas.
Podemos pensar na resolução de problemas como o processo de pegar algumas informações (detalhes sobre nosso problema) e gerar alguns resultados (a solução para nosso problema). 

![image](https://github.com/FireguiQueen/CC50/assets/98475125/62364135-bb2d-467b-b31e-9bd1114e2061)

Input é 'entrada', ou seja, entrada de informação. Ela será jogada ao nosso programa, onde
há diversas instruções em relação ao tratamento desta informação. Por fim, será retornado para nós um output, ou seja, uma resposta.

</br>
</br>


# Representação de números
Imagina-se sendo um professor lesionando uma aula, ao final dela, você resolve ver quantos alunos estão presentes. Para isso, você pode levantar um dedo de cada vez para representar cada pessoa, mas não poderá contar muito alto. Este sistema é denominado 'unário', onde cada dígito representa um único valor de um.

Mas existe um sistema mais eficiente do que este para representar os alunos.
Este sistema é denominado decimal, ou base 10, uma vez que existem dez valores diferentes que um dígito pode representar. Então utilizaremos números para representar os estudantes. 
Essa base vai de 0-9 e serve de alicerce para outros números. Então mesmo que haja mais de 2000 alunos presentes, não haverá limitação nenhuma, pois qualquer outro número pode ser criado usando os digitos que estão entre 0 e 9.

#### E esta ação também pode ser traduzida num contexto de 'sistema'
1. Entrada (input): _há 7 alunos presentes e 30 ao todo_ 
2. Sistema (tratando a informação): _há 30 alunos no total, ou seja, 30-7 = 23_
3. Saída (output): _há 23 alunos faltosos_


</br>
</br>

## Como enxergamos os números
Quando olhamos para o valor de `123` pensamos no número cento e vinte e três. </br>Isto ocorre pois o 3 está na coluna das unidades, o 2 está na coluna das dezenas e o 1 está na coluna das centenas. </br>
Portanto, `123` é `1 × 100` + `2 × 10` + `3 × 1` = `100 + 20 + 3` = `123`. </br>
Cada casa deste valor representa uma potência de dez, pois há dez dígitos possíveis para cada casa.  E quando multiplicamos nosso digíto único (1 - localizado na terceira casa) pelo resultado da potência, é formado o número 'cento e vinte três'. A ideia é que cada posição à esquerda de um número em notação decimal é 10 vezes maior do que a posição à direita dela.
- __Unidade:__ _3 `(10^0 * 3 = 3)`_;
- __Dezena:__ _2  `(10¹  * 2 = 20)`_
- __Centena:__ _1  `(10²  * 1 = 100)`_
- __RESULTADO = 100 + 20 + 3__  

Chegamos à conclusão de que qualquer valor, seja ele 123, 240 ou qualquer outro, na verdade, consiste em dígitos da base decimal que foram agrupados. E esta junção de dígitos gera 'n' casas. Cada casa deste valor representa uma potência de dez. A primeira casa (a casa das unidades) é 10<sup>0</sup>, a segunda casa (dezenas) é 10¹, a terceira casa (centenas) é 10<sup>2</sup>, a quarta casa (unidade de milhar) é 10<sup>3</sup>.

Isto é, se um valor possui 4 casas, `3.150` por exemplo, iremos começar a contagem da esquerda para a direita. Se são 4 casas, temos: unidade de milhar; centenas; dezenas & unidades. E este valor pode ser traduzido desta forma.:
- 3 -> Quarta casa   = 10<sup>3</sup> (10 x 10 x 10) * 3
- 1 -> Terceira casa = 10<sup>2</sup> (10 x 10) * 1
- 5 -> Segunda casa  = 10<sup>1</sup> (10) * 5
- 0 -> Primeira casa = 10<sup>0</sup> (1)  * 0

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
- Terceira posição 3: 2² (4)
> Com este metódo, podemos obter 7 unidades ao total, enquanto no outro, apenas 3 unidades.

E é dessa maneira que o computador opera. Apesar de o sistema binário ser "limitado" por utilizar bits, é possível criar uma variedade infinita de outros valores. Em última análise, nos computadores, há milhões de interruptores (conhecidos como transistores) que podem assumir os estados de desligado ou ligado, 0 ou 1.
Assim sendo, se você tem a habilidade de alterná-los entre esses estados, é possível criar uma sequência de dígitos de zeros e uns. Afinal, 0 representa "desligado" e 1, "ligado".
Com essa sequência, é possível gerar números cada vez maiores.


* Nossa base (decimal)
> ..10 <sup>4</sup> &nbsp; 10 <sup>3</sup>&nbsp; 10 <sup>2</sup> &nbsp; 10 <sup>1</sup>&nbsp; 10 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c)


* Base das máquinas (binário) <a name="img2"> </a>
> ..10 <sup>8</sup> &nbsp; 2 <sup>4</sup>&nbsp; 2 <sup>2</sup> &nbsp; 2 <sup>1</sup>&nbsp; 2 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e)

## Diferenças entre humanos e máquinas na forma de representar números
Há duas principais diferenças entre a nossa base (base decimal) e a base dos computadores (base de dois). A primeira é que nós utilizamos do número 10 seguido a um expoente, por exemplo: `10¹` `10²`, `10³`.
Pense no número quinhetos e dez (510). Neste número há 3 casas: 
- Centenas: 5
- Dezenas: 1
- Unidades: 0

Em cada casa deste valor, pode haver apenas um número entre 0 até 9, logo, __10__ diferentes dígitos podem ser colocados em cada casa, por isso usamos a base decimal (base de dez).
> _Caso tenha ficado confuso, levante suas duas mãos e comece contar de 0 até 9. Você irá levantar um dedo por número, e irá começar levantado o dedo para o número 0, até chegar no 9. Você verá que 10 dedos foram levantados, pois há 10 números entre 0 e 9._

Por outro lado, os computadores também precisam de um sistema capaz de criar outros números.
Mas eles não usam da base decimal, e sim da base de dois: `2¹`, `2²`, `2³`.

A segunda diferença está na forma como essa coluna é tratada por seres humanos e por máquinas. Na ilustração <a href="#img1">[...]</a>, podemos observar como criamos valores além dos dígitos de 0 a 9 utilizando a base decimal. De forma simplificada, a terceira posição deste valor (o número 2) utiliza a base decimal 10, elevada à potência de 2 (10²). Ao resolvermos o cálculo de 10², obtemos o resultado de 100. 
Em seguida, tomamos o dígito localizado na terceira posição e o multiplicamos pelo resultado. Portanto, obtemos: `10² = 100 ; 100 * 2 = 200`.

Agora, resta apenas a segunda posição. Nesta posição, encontramos o número '5', e ela está associada às dezenas, ou seja, 10¹.
Então teremos: `10¹ = 10 ; 10 * 5 = 50`.

Para calcular o valor final, o procedimento é bastante simples: basta somar os resultados (200 + 50). 


Com as máquinas, a maneira de compreendermos esta coluna muda um pouco. 
Como podemos ver nesta imagem, cada _casa_(ou posição) representa uma potência de base 2.
A primeira posição é a 2<sup>0</sup>, a segunda é a 2¹, a terceira 2² e assim respectivamente.

Conforme já mencionado previamente, há uma razão especial pela qual as máquinas usam o sistema binário. E com essa coluna abaixo, conseguimos entender como números maiores que zero e um são formados.
Se '1' representa 'ligado', isso quer dizer que, ao colocar o '1' em uma determinada posição, estamos ativando o valor correspondente. Na imagem, os números em laranja representam os valores que foram ativados devido à presença de energia.
Ao somarmos todos os números em laranja, obtemos 68 como resultado, e é dessa maneira que os valores em binário são construídos, uma cadeia de zeros e uns.

![Valores binarios](https://github.com/FireguiQueen/CC50/assets/98475125/736efe04-d419-4ace-9d14-83132d0a73a4)


#### Resumo
Fazemos o uso do número '10' pois é o total de números que há em nossa base. Há 10 possíveis resultados para cada casa numérica. 








