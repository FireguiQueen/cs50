# O que é Ciência da Computação
A ciência da computação é fundamentalmente sobre resolução de problemas.
Podemos pensar na resolução de problemas como o processo de pegar algumas informações (detalhes sobre nosso problema - informações) e gerar alguns resultados (a solução para nosso problema - soluções). 
Pense na seguinte imagem: 

![image](https://github.com/FireguiQueen/CC50/assets/98475125/62364135-bb2d-467b-b31e-9bd1114e2061)

Input é 'entrada', ou seja, entrada de informação. Ela será jogada ao nosso programa, onde
há diversas instruções em relação ao tratamento desta informação. Por fim, será retornado para nós um output, ou seja, uma resposta.

</br>
</br>


## Representação de números
Sendo um professor de uma faculdade, podemos começar com a tarefa de marcar presença, contando o número de pessoas em uma sala. Com a nossa mão, podemos levantar um dedo de cada vez para representar cada pessoa, mas não poderemos contar muito alto. Este sistema é denominado unário, onde cada dígito representa um único valor de um.
De certa forma, podemos pensar na seguinte coisa:
Input: há 7 alunos presentes;
Sistema: Há 30 alunos no total, ou seja, 30-7 = 23;
Output: Há 23 alunos faltosos  

Aqui entra um sistema mais avançado: A base decimal, ou base de 10. Essa base vai de 0-9 e serve de alicerce para outros números. Ela não precisa ultrapassar este valor, pois
qualquer outro número após o '9' pode ser criado usando os digitos que estão entre 0 e 9.
Veja bem, 10 é a junção do digito '1' + '0'. O número 420 é a junção de '4' + '2' + '0'. 

<!-- Por outro lado, os computadores também precisam de um sistema capaz de criar outros números.
Mas eles não usam da base decimal, e sim do binário.

O binário se resume a '0' e '1'.
E dão origem a palavra "bits", onde a mesma é derivada de "binary digits". -->

</br>

## Como enxergamos os números
Ao ver estes algarismos - `123`, pensamos no número cento e vinte e três. </br>Isto ocorre pois
o 3 está na coluna das unidades, o 2 está na coluna das dezenas e o 1 está na coluna das centenas. </br>
Portanto, `123` é `100 × 1` + `10 × 2` + `1 × 3` = `100 + 20 + 3` = `123`. </br>
Cada casa de um dígito representa uma potência de dez, pois há dez dígitos possíveis para cada casa.  
Ao se juntarem, eles formam o número 'cento e vinte três', e é assim que nós, os seres humanos, fazemos para contar números além de 0-9.
- __Uma unidade:__ um digíto `(0, 1, 2, 3, 4, 5, 6, 7, 8, 9)`;
- __Uma dezena:__ dois digítos juntos `(10, 20, 30.. 90)`
- __Uma centena:__ três digítos juntos `(100, 200, 300.. 900)` 

Concluímos que, um valor, seja ele 123, 240 ou qualquer outro, na verdade, são digítos da base decimal que foram colocados juntos. E esta junção gera 'n' casas. Cada casa de um digíto representa uma potência de dez. A primeira casa (a casa das unidades) é 10<sup>0</sup>, a segunda casa (dezenas) é 10¹, a terceira casa (centenas) é 10<sup>2</sup>, a quarta casa (unidade de milhar) é 10<sup>3</sup>.
Isto é, se o seu valor possui 4 casas por exemplo, iremos começar a contagem da esquerda para a direita. Então vamos pensar o valor de `4.150`. E ele pode ser traduzido desta forma:
- 4.000 = 10<sup>3</sup> (10 x 10 x 10) * 4 
- 100 = 10<sup>2</sup> (10 x 10) * 1
- 50 = 10<sup>1</sup> (10) * 5

### Na matemática, isso pode ser representado de duas maneiras: 

> Para resultar unidades, basta multiplicar seu digíto por 1. Para resultar em dezenas, multiplicar seu digíto por 10. Para centenas, multiplica-lo por 100. 

![Explicação-1](https://github.com/FireguiQueen/CC50/assets/98475125/cc43c2df-c7c0-4d91-bd86-b6047e0e4a91)

> Também podemos ver o mesmo resultado, mas usando potênciação desta vez. A maneira anterior é exatamente igual a esta, porém, ela faz uso dos resultados das potênciações de maneira direta. Mas no fim é a mesma coisa. 

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76) 



## Como os computadores enxergam
Acontece que, no mundo dos computadores, o sistema deles é fundamentalmente idêntico ao nosso.
A diferença é que os computadores só tem acesso a dois digítos (base de dois), ou seja, dois números: 0 e 1. </br>
Enquanto nós, temos acesso a 10 digítos (0-9), e esta base (base de dez) pode formar infinitos outros resultados. 

* Enquanto nós seguimos esta coluna
> ..10 <sup>4</sup> &nbsp; 10 <sup>3</sup>&nbsp; 10 <sup>2</sup> &nbsp; 10 <sup>1</sup>&nbsp; 10 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c)


* Os computadores seguem esta
> ..10 <sup>8</sup> &nbsp; 2 <sup>4</sup>&nbsp; 2 <sup>2</sup> &nbsp; 2 <sup>1</sup>&nbsp; 2 <sup>0</sup>

![image](https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e)

### Diferenças entre humanos e máquinas na forma de representar números
Há duas principais diferenças entre a nossa base (base decimal) e a base dos computadores (base de dois). A primeira é que nós utilizamos do número 10 seguido a um expoente, por exemplo: `10²`.
Pense no número quinhetos e dez (510). Neste número há 3 casas: 
- Centenas: 5
- Dezenas: 1
- Unidades: 0

Em cada casa deste valor pode haver apenas um número entre 0 até 9, logo, __10__ diferentes digítos podem ser colocados em cada casa, por isso usamos a base decimal (base de dez).
> Caso tenha ficado confuso, levante suas duas mãos e comece contar de 0 até 9. Você irá levantar um dedo por número, e irá começar levantado o dedo para o número 0, até chegar no 9. Você verá que 10 dedos foram levantados, pois há 10 números entre 0 e 9.

#### Resumo
Fazemos o uso do número '10' pois é o total de números que há em nossa base. Há 10 possíveis resultados para cada casa numérica. 







