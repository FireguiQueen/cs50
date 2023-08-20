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
o 3 está na coluna das unidades, o 2 está na coluna das dezenas e o 1 está na coluna das centenas.
Portanto, `123` é `100 × 1` + `10 × 2` + `1 × 3` = `100 + 20 + 3` = `123`.
Cada casa de um dígito representa uma potência de dez, pois há dez dígitos possíveis para cada casa.  
Ao se juntarem, eles formam o número 'centro e vinte três', e é assim que nós, os seres humanos, fazemos para contar números além de 0-9.
- __Uma unidade:__ um digíto `(0, 1, 2, 3, 4, 5, 6, 7, 8, 9)`;
- __Uma dezena:__ dois digítos juntos `(10, 20, 30.. 90)`
- __Uma centena:__ três digítos juntos `(100, 200, 300.. 900)` 

Com isso, concluímos que, através da junção de digitos únicos (0, 1, 2, 3... 9) podememos formar
números maiores.

### Na matemática, isso pode ser representado de duas maneiras: 

> Podemos pensar que, para resultar unidades, basta multiplicar seu digíto por 1. Para resultar em dezenas, multiplicar seu digíto por 10. Para centenas, multiplica-lo por 100. Por exemplo:
![Explicação-1](https://github.com/FireguiQueen/CC50/assets/98475125/cc43c2df-c7c0-4d91-bd86-b6047e0e4a91)

> Também podemos ver o mesmo resultado, mas usando potênciação desta vez. A maneira anterior é apenas uma forma de representar esta imagem abaixo, porém, de uma maneira mais simples.
![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76) 



## Como os computadores enxergam
Acontece que, no mundo dos computadores, o sistema deles é fundamentalmente idêntico ao nosso.
A diferença é que os computadores só tem acesso a dois números: 0 e 1.
Enquanto nós, temos acesso a 10 digítos (0-9), e eles (a base decimal ou base dez) podem formar infinitos outros resultados. 

* Enquanto nós seguimos esta coluna

![image](https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c)


* Os computadores seguem esta

![image](https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e)








