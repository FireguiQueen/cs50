# Leitura recomendada 
- <a href="https://github.com/FireguiQueen/CC50/blob/main/Week%200%20-%20Scratch/!Ci%C3%AAncia%20da%20computa%C3%A7%C3%A3o%20-%20M%C3%A1quinas%20e%20n%C3%BAmeros.md">Máquinas e números</a> 

________________________________________________

# BITS: o surgimento dos caracteres
A discussão anterior nos permite compreender que a principal função dos computadores é computar, ou seja, atuar como calculadoras. Eles foram originalmente criados para facilitar cálculos matemáticos demorados ou complexos para os seres humanos.

Porém, hoje em dia, os computadores são usados para uma variedade infinita de tarefas. As ações que realizamos neles, como assistir vídeos, fazer cursos, jogar e negociar ações, são muito mais complexas do que simplesmente cálculos. Observamos que, todas essas atividades envolvem a interação de números e caracteres. Afinal, como um humano entenderia a interface de um programa sem palavras e números?

### Surge uma pergunta: _como os computadores são capazes de apresentar caracteres (alfabéticos, numéricos..) em interfaces?_
A humanidade teve uma ideia muito simples e útil nos primórdios da computação ao tentar representar caracteres. Foi pensado: Vamos atribuir caracteres aos números em binário. Por exemplo, a sequência de bits '1000001' forma o número 65; portanto, vamos associar a letra "A" a essa sequência de bits. 

Para isso, foi criado o ASCII (American Standard Code for Information Interchange), um sistema utilizado para representar letras, algarismos, sinais de pontuação e caracteres de controle por meio de sequências de bits.

O ASCII foi desenvolvido não apenas para representar letras, números e símbolos, mas também para padronizar como realizamos essa representação. Imagine ter 10 padrões ASCII distintos, cada um usado por organizações diferentes. Se um computador X usar um padrão onde a letra 'A' seja representada pelo valor 65, e um computador Y usar um padrão diferente onde 'A' seja representada pelo valor 97, isso causaria confusão. Por exemplo, ao enviar um arquivo de texto do seu computador X para o computador Y, os caracteres no arquivo pareceriam diferentes no computador Y. Isso ocorre porque por trás dos caracteres estão os BITS. Uma sequência de BITS representa 'A', mas essa mesma sequência no computador Y poderia ser interpretada como 'J'.


Vale ressaltar que tudo o que vemos na tela, são, na verdade, bits. Experimente abrir o Bloco de Notas e digitar o número '1', salve e feche o arquivo. Agora, localize o arquivo, clique com o botão direito e selecione "Propriedades" para verificar o tamanho do arquivo. Esse tamanho será exatamente a quantidade de bits contidos nele.
Cada caractere do conjunto ASCII é representado por uma sequência de 8 bits. Portanto, quando inserimos o número '1' no Bloco de Notas, por trás dos panos, o que realmente é armazenado é '00000001', ou seja, 8 bits (oito dígitos binários). Ao verificar o tamanho do arquivo, constataremos que ele ocupa 8 bits (1 byte).

<details>
    <summary>Clique aqui para ver a imagem</summary>
    <img src="https://github.com/FireguiQueen/CC50/assets/98475125/c56fffea-5495-441a-ad15-965c8ad4c609"/>
</details>


### O grande problema do ASCII
Para representar cada caractere, o ASCII utiliza um conjunto de 8 bits (00000000). A princípio, essa abordagem atenderia às necessidades do sistema americano, uma vez que 8 bits possibilitam a representação de até 256 caracteres distintos _(0, %, G, !, ?..)_.

Contudo, ao considerarmos o panorama completo, percebemos a existência de inúmeros outros idiomas pelo mundo, cada um contendo letras, e até mesmo pontuações e sinais únicos. Tornar-se inviável representar todos esses algarismos, letras e acentuações com apenas 256 caracteres disponíveis.

Um exemplo simples que é impossível representar tudo com somente 256 caracteres são os emojis. Eles são formados por sequências de bits. Um dos emojis mais famosos é o '😂'. Na realidade, essa simples representação de um simples rostinho, exige 17 bits (0000000000000000). 
> Sequência de bits para colocar o emoji: 11111011000000010. Decimal: 128.514

Consequentemente, o uso do ASCII para codificar emojis não seria viável, já que o ASCII apenas permite alocar 8 bits para a representação de um único caractere.

À medida que o tempo avança, testemunhamos o surgimento de novas abordagens de representação que permitem a utilização de 16 ou até mesmo 32 bits para codificar caracteres. Passamos do antigo padrão ASCII para o UNICODE, que oferece uma gama mais ampla de possibilidades de representação.

#### Informações 
- _ASCII foi definido como padrão em 1968_
- _Cada caractere é representado por um código de 8 bits (um byte)_
- _'A' é representado pelos bits 1000001 `(65)`, 'B' pelo 1000010 `(66)` e assim por diante.._

</br>
</br>

# BITS: o surgimento das cores
Vimos anteriormente como os caracteres são representados por meio de bits, e com as cores, não é muito diferente. 
O ASCII é um padrão para representar caracteres usando sequências de bits, enquanto o RGB é uma das maneiras mais comuns de representar cores por meio de bits. 

#### Mas, antes de tudo, vamos entender por que usamos o RGB 
Os monitores são compostos por milhões de pequenos quadradinhos de luz chamados pixels. Cada pixel contém três pontos, conhecidos como "fósforos," que correspondem aos cones na retina do olho humano e são essenciais para perceber as cores.
Cada pixel possui três fósforos: vermelho, verde e azul (RGB). 
Usando bits, nós controlamos a quantidade de luz enviada a cada fósforo em um pixel. Quanto mais "luz" enviamos, maior será a intensidade da cor nesse fósforo.

#### Fontes
- [Gizmodo - Tela verde ou preta?](https://gizmodo.uol.com.br/tela-verde-preto/)
- [A Matemática por Trás das Cores do Computador](https://mentalidadesmatematicas.org.br/a-matematica-por-tras-das-cores-do-computador/)

### Criação das cores
Vamos começar pelo básico quando se trata de cores. Todos nós sabemos que há uma quantidade finita de cores, mas como exatamente essas cores são geradas? A resposta é surpreendentemente simples: _através da combinação de três cores fundamentais - vermelho, verde e azul_. Essas três cores primárias nos permitem criar uma ampla variedade de tonalidades. </br>
Esse conceito também se aplica no mundo da computação. Imagina ter que atribuir uma sequência única de bits a cada possível cor existente - essa abordagem seria praticamente inviável. Seria necessário um grande número de bits para representar todas as cores possíveis em nossos computadores. Como solução, adotamos um método que se baseia nas cores primárias, conhecidas pelo acrônimo RGB (red - green - blue, ou vermelho, verde e azul). </br>
Através da atribuição de três sequências de bits distintas, uma para cada uma das cores primárias, somos capazes de criar uma infinidade de novas cores ao combinar esses bits de maneiras variadas. Esse sistema de cores RGB forma a base para todas as representações visuais digitais que vemos em telas de computador, televisores e dispositivos móveis.
No sistema ASCII, usamos 8 bits para representar um caractere, e no sistema RGB, também usamos 8 bits para representar uma cor, que corresponde a um fósforo de um pixel.

</br>

Para entender melhor o sistema RGB, considere a sequência de bits abaixo:
- 111111110000000000000000

Essa sequência contém 24 bits (3 bytes) no total. Vamos dividi-la em três partes, cada uma com 8 bits (1 byte):
1. 11111111
2. 00000000
3. 00000000
   
Agora ficou mais fácil compreender o sistema RGB, onde cada parte representa uma COR. Lembrando o que foi dito anteriormente: "Um pixel é formado por três fósforos - vermelho, azul e verde". </br>
Portanto, a primeira parte representa o fósforo vermelho do pixel, a segunda parte representa o fósforo verde do pixel, e, por fim, a terceira parte representa o fósforo azul do pixel. Como resultado desta sequência de bits `(111111110000000000000000)`, teremos uma cor vermelha extremamente intensa. Isso ocorre porque atribuímos a sequência "11111111" ao quanto de "luz" o fósforo vermelho irá receber. E essa sequência de bits "1111..." representa o número 255, ou seja, um valor máximo de intensidade. Já que os outros fósforos receberam "00000000" (número 0), nenhum deles emite sua respectiva cor, já que o nível de intensidade é zero. Agora, surge a pergunta: "Por que a maior intensidade de um fósforo é representada pela sequência '11111111' (255)?" A resposta é simples, mas antes, vamos fazer uma breve incursão na matemática:
Imagine que temos 8 posições (8 bits) para representar uma cor (um fósforo). Em cada dígito desses 8 bits, podemos ter apenas 0 ou 1 (duas possibilidades). Com 8 posições e duas possibilidades em cada uma, podemos expressar isso como 2^8 (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2). Na matemática, 2^8 resulta em 256, mas estamos trabalhando com computadores, o que significa que começamos a contar do zero, então temos 255. Portanto, o número 0 representa uma intensidade baixa (indicando a ausência de luz para aquele fosfóro), enquanto o número 255 simboliza a intensidade máxima de luz para o outro fósforo. Os valores de intensidade de cada componente são combinados para criar uma cor específica.
 
#### Isso resultaria em uma cor vermelha intensa, pois somente o canal vermelho está recebendo intensidade.
- Red: 255
- Green: 0
- Blue: 0
> Por trás dos panos, teremos esta sequência de bits: _111111110000000000000000_

</br>

#### Isso resultaria em uma cor vermelha menos intensa, pois o fósforo da cor vermelha está recebendo menos 'luz'.
- Red: 120
- Green: 0
- Blue: 0
> Por trás dos panos, teremos esta sequência de bits: _011110000000000000000000_

</br>

#### Aumentar a intensidade de outras cores, como o azul, resulta em cores mais azuladas, que podem se aproximar de tons de roxo e rosa:
- Red: 210
- Green: 0
- Blue: 120
> Por trás dos panos, teremos esta sequência de bits: _11010010000000001111000_

</br>
</br>

# BITS: o surgimento das imagens
Da explicação acima, compreendemos que a criação de uma cor requer 24 bits (3 bytes) e que podemos associar uma cor a um pixel. Um pixel é simplesmente um pequeno quadrado preenchido com uma cor.
E, como sabemos, uma imagem é composta de muitos e muitos pixels. Portanto, podemos concluir que tanto as imagens nada mais são do que bits.
> Caso tenha ficado confuso, é bem fácil de entender. As três cores principais que se combinam para formar outras cores são 'vermelho', 'verde' e 'azul'. Cada cor exige 8 bits, os quais controlam a intensidade dessa cor. Como há três cores, teremos 8 bits + 8 bits + 8 bits = 24 bits (3 bytes).

</br>

# Formatos de arquivo
No universo computacional, tudo o que percebemos se resume a um conjunto de bits, representando zeros e uns. No entanto, é essencial decifrar esses bits de maneiras diversas para alcançarmos o resultado almejado. Ao lidar com um arquivo .TXT, nosso desejo é visualizar texto, e para isso, requeremos que os bits sejam traduzidos em caracteres legíveis. Já no caso dos arquivos .JPG, nossa intenção é visualizar imagens, o que implica na conversão dos bits em pixels coloridos.

No entanto, a incrível diversidade do mundo digital não se limita apenas a textos e imagens. Músicas, vídeos, planilhas e muito mais também encontram sua origem nos mesmos zeros e uns. Em um arquivo .MP3, por exemplo, os bits são traduzidos em notas musicais que compõem melodias envolventes. Em arquivos de vídeo como o .MP4, os bits se transformam em sequências de quadros em movimento, criando a ilusão de cenas dinâmicas.

