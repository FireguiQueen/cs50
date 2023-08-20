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
Cada casa deste valor representa uma potência de dez, pois há dez dígitos possíveis para cada casa. E quando juntamos o resultado do digíto da casa vezes o resultado da potência, é formado o número 'cento e vinte três'. A ideia é que cada posição à esquerda de um número em notação decimal é 10 vezes maior do que a posição à direita dela.
- __Unidade:__ _3 `(10^0 * 3 = 3)`_;
- __Dezena:__ _2  `(10¹  * 2 = 20)`_
- __Centena:__ _1  `(10²  * 1 = 100)`_
- __RESULTADO = 100 + 20 + 3__  

Concluímos que, um valor, seja ele 123, 240 ou qualquer outro, na verdade, são digítos da base decimal que foram colocados juntos. E esta junção gera 'n' casas. Cada casa de um digíto representa uma potência de dez. A primeira casa (a casa das unidades) é 10<sup>0</sup>, a segunda casa (dezenas) é 10¹, a terceira casa (centenas) é 10<sup>2</sup>, a quarta casa (unidade de milhar) é 10<sup>3</sup>.
Isto é, se o seu valor possui 4 casas por exemplo, iremos começar a contagem da esquerda para a direita. Então vamos pensar o valor de `4.150`. E ele pode ser traduzido desta forma:
- 4.000 = 10<sup>3</sup> (10 x 10 x 10) * 4 
- 100 = 10<sup>2</sup> (10 x 10) * 1
- 50 = 10<sup>1</sup> (10) * 5

### Na matemática, isso pode ser representado de duas maneiras: 

> Para resultar unidades, basta multiplicar seu digíto por 1. Para resultar em dezenas, multiplicar seu digíto por 10. Para centenas, multiplica-lo por 100. 

![Explicação-1](https://github.com/FireguiQueen/CC50/assets/98475125/cc43c2df-c7c0-4d91-bd86-b6047e0e4a91)

> Também podemos ver o mesmo resultado, mas usando potênciação desta vez. A maneira anterior é exatamente igual a esta, porém, ela faz uso dos resultados das potênciações de maneira direta. Mas no fim é a mesma coisa.  <a name="img1"> </a>

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76) 


</br>

## Como os computadores enxergam
Acontece que, no mundo dos computadores, o sistema deles é fundamentalmente idêntico ao nosso.
A diferença é que os computadores só tem acesso a dois digítos (base de dois), ou seja, dois números: 0 e 1. </br>
Enquanto nós, temos acesso a 10 digítos (0-9), e esta base (base de dez) pode formar infinitos outros valores. 

* Enquanto nós seguimos esta coluna
> ..10 <sup>4</sup> &nbsp; 10 <sup>3</sup>&nbsp; 10 <sup>2</sup> &nbsp; 10 <sup>1</sup>&nbsp; 10 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c)


* Os computadores seguem esta <a name="img2"> </a>
> ..10 <sup>8</sup> &nbsp; 2 <sup>4</sup>&nbsp; 2 <sup>2</sup> &nbsp; 2 <sup>1</sup>&nbsp; 2 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e)

## Diferenças entre humanos e máquinas na forma de representar números
Há duas principais diferenças entre a nossa base (base decimal) e a base dos computadores (base de dois). A primeira é que nós utilizamos do número 10 seguido a um expoente, por exemplo: `10¹` `10²`, `10³`.
Pense no número quinhetos e dez (510). Neste número há 3 casas: 
- Centenas: 5
- Dezenas: 1
- Unidades: 0

Em cada casa deste valor, pode haver apenas um número entre 0 até 9, logo, __10__ diferentes digítos podem ser colocados em cada casa, por isso usamos a base decimal (base de dez).
> _Caso tenha ficado confuso, levante suas duas mãos e comece contar de 0 até 9. Você irá levantar um dedo por número, e irá começar levantado o dedo para o número 0, até chegar no 9. Você verá que 10 dedos foram levantados, pois há 10 números entre 0 e 9._

Por outro lado, os computadores também precisam de um sistema capaz de criar outros números.
Mas eles não usam da base decimal, e sim da base de dois: `2¹`, `2²`, `2³`.

A segunda diferença está na forma como essa coluna é tratada por seres humanos e por máquinas. Na ilustração <a href="#img1">[...]</a>, podemos observar como criamos valores além dos digítos de 0 a 9 utilizando a base decimal. De forma simplificada, a terceira posição deste valor (o número 2) utiliza a base decimal 10, elevada à potência de 2 (10²). Ao resolvermos o cálculo de 10², obtemos o resultado de 100. 
Em seguida, tomamos o dígito localizado na terceira posição e o multiplicamos pelo resultado. Portanto, obtemos: `10² = 100 ; 100 * 2 = 200`.

Agora, resta apenas a segunda posição. Nesta posição, encontramos o número '5', e ela está associada às dezenas, ou seja, 10¹.
Então teremos: `10¹ = 10 ; 10 * 5 = 50`.

Para calcular o valor final, o procedimento é bastante simples: basta somar os resultados (200 + 50). 


Já as máquinas faze uso da base de dois, como podemos ver nesta imagem <a href="#img2">[...]</a>. Aqui, a maneira de compreendermos esta coluna muda um pouco. 
Como podemos ver nesta imagem, casa _casa_ de um digíto representa uma potência de base 2.
A primeira casa é a 2<sup>0</sup>, a segunda é a 2¹, a terceira 2² e assim respectivamente.

![Valores binarios](https://github.com/FireguiQueen/CC50/assets/98475125/10620426-633c-48b8-84c1-2e5331b31b75)



#### Resumo
Fazemos o uso do número '10' pois é o total de números que há em nossa base. Há 10 possíveis resultados para cada casa numérica. 








