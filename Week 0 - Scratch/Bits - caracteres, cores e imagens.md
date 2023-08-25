# Leitura recomendada 
- <a href="https://github.com/FireguiQueen/CC50/blob/main/Week%200%20-%20Scratch/!Ci%C3%AAncia%20da%20computa%C3%A7%C3%A3o%20-%20M%C3%A1quinas%20e%20n%C3%BAmeros.md">Máquinas e números</a> 

________________________________________________

# BITS: o surgimento dos caracteres
A discussão anterior nos permite compreender que a principal função dos computadores é computar, ou seja, atuar como calculadoras. Eles foram originalmente criados para facilitar cálculos matemáticos demorados ou complexos para os seres humanos.

Porém, hoje em dia, os computadores são usados para uma variedade infinita de tarefas. As ações que realizamos neles, como assistir vídeos, fazer cursos, jogar e negociar ações, são muito mais complexas do que cálculos simples. Observamos que, todas essas atividades envolvem a interação de números e caracteres. Afinal, como um humano entenderia a interface de um programa sem palavras e números?"

### Surge uma pergunta: _como os computadores são capazes de apresentar caracteres (alfabéticos, numéricos..) em interfaces?_
A humanidade teve uma ideia muito simples e útil nos primórdios da computação ao tentar representar caracteres. Foi pensado: Vamos atribuir caracteres aos números em binário. Por exemplo, a sequência de bits '1000001' forma o número 65; portanto, vamos associar a letra "A" a essa sequência de bits. 

Para isso, foi criado o ASCII (American Standard Code for Information Interchange), um sistema utilizado para representar letras, algarismos, sinais de pontuação e caracteres de controle por meio de sequências de bits.

O ASCII foi desenvolvido não apenas para representar letras, números e símbolos, mas também para padronizar como realizamos essa representação. Imagine ter 10 padrões ASCII distintos, cada um usado por organizações diferentes. Se um computador X usar um padrão onde a letra 'A' seja representada pelo valor 65, e um computador Y usar um padrão diferente onde 'A' seja representada pelo valor 97, isso causaria confusão. Por exemplo, ao enviar um arquivo de texto do seu computador X para o computador Y, os caracteres no arquivo pareceriam diferentes no computador Y. Isso ocorre porque por trás dos caracteres estão os BITS. Uma sequência de BITS representa 'A', mas essa mesma sequência no computador Y poderia ser interpretada como 'J'.


Vale ressaltar que tudo o que vemos na tela, ou seja, nas interfaces, são, na verdade, bits que representam caracteres específicos. Experimente abrir o Bloco de Notas e digitar o número '1', salve e feche o arquivo. Agora, localize o arquivo, clique com o botão direito e selecione "Propriedades" para verificar o tamanho do arquivo. Esse tamanho será exatamente a quantidade de bits contidos nele.
Cada caractere do conjunto ASCII é representado por uma sequência de 8 bits. Portanto, quando inserimos o número '1' no Bloco de Notas, por trás dos panos, o que realmente é armazenado é '00000001', ou seja, 8 bits (oito dígitos binários). Ao verificar o tamanho do arquivo, constataremos que ele ocupa 8 bits (1 byte).

<details>
    <summary>Clique aqui para ver a imagem</summary>
    <img src="https://github.com/FireguiQueen/CC50/assets/98475125/c56fffea-5495-441a-ad15-965c8ad4c609"/>
</details>


### O grande problema do ASCII
Para representar cada caractere, o ASCII utiliza um conjunto de 8 bits (00000000). A princípio, essa abordagem atenderia às necessidades do sistema americano, uma vez que 8 bits possibilitam a representação de até 256 caracteres distintos.

Contudo, ao considerarmos o panorama completo, percebemos a existência de inúmeros outros idiomas pelo mundo, cada um contendo letras, e até mesmo pontuações e sinais únicos. Tornar-se inviável representar todos esses algarismos, letras e acentuações com apenas 256 caracteres disponíveis.

Os emojis são formados por sequências de bits. Um dos emojis mais instantaneamente reconhecíveis é o '😂'. Na realidade, o seu valor decimal equivale a 128.514. Na forma binária, essa representação exige cerca de 17 bits (0000000000000000).

Consequentemente, o uso do ASCII para codificar emojis não seria viável, já que o ASCII apenas permite alocar 8 bits para a representação de um único caractere.

À medida que o tempo avança, testemunhamos o surgimento de novas abordagens de representação que permitem a utilização de 8, 16 ou até mesmo 32 bits para codificar caracteres. Passamos do antigo padrão ASCII para o UNICODE, que oferece uma gama mais ampla de possibilidades de representação.

#### Informações 
- _ASCII foi definido como padrão em 1968_
- _Cada caractere é representado por um código de 8 bits (um byte)_
- _'A' é representado pelos bits 1000001 `(65)`, 'B' pelo 1000010 `(66)` e assim por diante.._

</br>
</br>

# BITS: o surgimento das cores
Já vimos como os caracteres são representados, e com as cores isto não é diferente.
O ASCII é um padrão para representar caracteres com bits, já o RGB é __uma das__ maneiras para representarmos cores usando bits.

Vamos começar pelo básico quando se trata de cores. Todos nós sabemos que há uma quantidade limitada de cores, mas como exatamente essas cores são geradas? A resposta é surpreendentemente simples: através da combinação de três cores fundamentais - vermelho, verde e azul. Essas três cores primárias nos permitem criar uma ampla variedade de tonalidades. </br>
Esse conceito também se aplica no mundo da computação. Imagina ter que atribuir uma sequência única de bits a cada possível cor existente - essa abordagem seria praticamente inviável. Seria necessário um grande número de bits para representar todas as cores possíveis em nossos sistemas de computador. Como solução, adotamos um método que se baseia nas cores primárias, conhecidas pelo acrônimo RGB (red - green - blue, ou vermelho, verde e azul). </br>
Através da atribuição de três sequências de bits distintas, uma para cada uma das cores primárias, somos capazes de criar uma infinidade de novas cores ao combinar esses bits de maneiras variadas. Esse sistema de cores RGB forma a base para todas as representações visuais digitais que vemos em telas de computador, televisores e dispositivos móveis.


No sistema ASCII, utilizamos 8 bits para representar um único caractere, e no sistema RGB também usamos 8 bits para indicar a intensidade de cada componente de cor. 
</br>
Imagine que temos 8 posições (8bits) para representar um valor, e em cada posição, podemos ter somente 0 ou 1 (duas possibilidades).
Com 8 posições e duas possibilidades em cada uma, podemos expressar isso como 2^8 ou 2.2.2.2.2.2.2.2.
Na matematica, 2^8 nos resulta em 256, mas estamos trabalhando com computadores, ou seja, começamos pelo 0, então teremos 255. 
</br>
Agora, ao abordar o sistema RGB, é essencial notar que nesse contexto, o número 0 representa uma intensidade baixa (indicando ausência daquela cor), enquanto o número 255 simboliza a intensidade máxima da cor.

Os valores de intensidade de cada componente são combinados para criar uma cor específica. Por exemplo, se você define os valores como:

#### Isso resultaria em uma cor vermelha intensa, pois somente o canal vermelho está recebendo intensidade.
- Red: 255
- Green: 0
- Blue: 0
> Por trás dos panos, teremos esses números: _11111111 00000000 00000000_, em que os primeiros 8 dígitos representam o canal vermelho, os próximos 8 dígitos representam o canal verde e os últimos 8 dígitos representam o canal azul. Em decimal, a cadeia '11111111' é igual a 255. Isso forma uma cadeia de 24 bits.

</br>

#### Agora, ao adicionar intensidade a outra cor, como o azul, teremos uma cor mais azulada. À medida que aumentamos a intensidade do azul, começamos a ver cores próximas ao roxo e ao rosa.
- Red: 210
- Green: 0
- Blue: 120
> Por trás dos panos, teremos esses números: _11111111 00000000 1111000_. Os primeiros 8 dígitos representam o canal vermelho, os próximos 8 dígitos representam o canal verde e os últimos 8 dígitos representam o canal azul. Em decimal, 11111111 é igual a 210, e 1111000 é igual a 210.Todos juntos formam uma cadeia de 24 bits.


## Contextos diferentes, resultados diferentes
Já aprendemos que, com determinada cadeia de bits, podemos formar letras, pontuções e simbolos. Mas isso tudo está relacionado ao contexto em que colocamos esta cadeia. 

