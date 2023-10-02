# Tipos de dados 
Cada tipo de dado ocupa uma quantidade fixa de espaço na memória, embora seja importante notar que a quantidade de espaço realmente usada para cada tipo pode variar em diferentes sistemas de computador. No entanto, em geral, pode-se considerar o seguinte:
- `bool`    _1 byte_
- `char`    _1 byte_
- `double`  _8 bytes_
- `float`   _4 bytes_
- `int`     _4 bytes_
- `long`    _8 bytes_
- ..

Nós sabemos que linguagens compiladas terão seu código fonte transformado em Assembly, e por fim, código de máquina (binário). 
E apenas esta informação já nos mostra a importância de definir o tipo de dado que estamos trabalhando. Por exemplo, ao definir uma variável contendo números inteiros, usaremos o __int__:
```c
int num = 5; 
```

Após a compilação, tudo irá se transformar em zeros e uns, então já é de se esperar que aquele '5' irá virar um número binário. E aqui que a palavra-chave "int" entra. Já que foi definido que estamos trabalhando com números inteiros, o computador compreende que este '5' precisa virar um binário referente ao número em questão.
```c
int num = 5; // na verdade, a variável 'num' irá receber o binário 101.
```

Mas o comportamento seria um _pouco diferente_ caso mudássemos o tipo de dado da variável. Se colocarmos o __char__ (tipo de dado para caracteres), o computador compreende que aquele '5' precisa virar um binário referente à tabela ASCII. 
> Na tabela ASCII, o caracter '5' é o binário 110101.
```c
char num = 5; // agora, a variável 'num' irá receber o binário 110101. 
```



</br>
</br>


# RAM (random acess memory) & HD (hard disk) 
Há muita confusão no que se diz a respeito de memória RAM e HD. 
O HD (hard disk) é um dispositivo usado para armazenar dados. Ele não apenas armazena os dados, mas também os lê quando necessário. Para entender seu funcionamento, podemos imaginar um HD como sendo semelhante a uma vitrola, com um prato mecânico (onde salvamos os dados) e uma agulha móvel (para ler e gravar informações).
Os HDs são essenciais para preservar dados que não podem ser perdidos. Nossos jogos, arquivos e sistema operacional residem nele, e por isso ele foi feito para ser um tipo de __armazenamento não volátil__ que mantém os dados intactos mesmo quando o dispositivo está desligado.
>  armazenamento não volátil consiste no tipo de armazenamento em que se pode persistir dados; isto é: uma vez gravados, os dados são conservados e portanto não há perda ao se retirar a fonte de energia.

A memória RAM (Random Access Memory), ou memória de acesso aleatório, é uma parte temporária e ágil do computador. Basicamente, é como um depósito temporário de informações digitais usado pelo processador para guardar dados temporariamente. Tudo o que fazemos em nossos computadores depende da memória RAM.
Vamos pensar em um programa que permite ao usuário digitar dois números, e a soma deles é retornada. Para que isso aconteça, os valores digitados pelo usuário são atribuídos a variáveis, que são temporariamente armazenadas na memória RAM.
Um dos principais protagonistas dos computadores é o sistema operacional. Ele fica guardado no HD, mas para ser usado, precisa da ajuda da memória RAM. A RAM é muito mais rápida do que o HD, permitindo que o processador acesse rapidamente as informações necessárias para realizar tarefas. No entanto, é importante destacar que a RAM é volátil, o que significa que os dados são apagados quando o computador é desligado, ao contrário do HD, que mantém os dados a longo prazo.
__A memória RAM é reponsável por manter os dados que estão em processamento__ 
> A memória RAM foi projetada para ser volátil, não faria sentido que ela desempenhasse outro papel. Ela serve apenas como um meio para que nossos processadores tenham dados disponíveis para leitura e armazenamento temporário. Esses dados sempre serão temporários, como, por exemplo, manter seu navegador aberto.

</br>

### Acesso aleatório & sequencial
A Memória de Acesso Aleatório é chamada assim porque você pode acessar qualquer posição de memória nela de forma direta e rápida, independentemente de onde os dados estejam armazenados. Isso significa que, se você precisa ler ou gravar dados em uma localização específica na RAM, não é necessário percorrer todos os dados anteriores ou posteriores para chegar a essa posição. Você pode acessar diretamente o __endereço__ de memória desejado.
> Podemos pensar na memória RAM como uma rua extensa. O dado que você deseja ler é a última casa desta rua. Em vez de você percorrer a rua inteira até chegar ao seu destino, você é instantaneamente teleportado para o endereço da casa desejada.

Em contraste, dispositivos de armazenamento sequencial, como as fitas magnéticas, exigem que você leia ou escreva os dados sequencialmente a partir de um ponto de partida. Se você quiser acessar os dados no final de uma fita, precisará percorrer todos os dados anteriores na fita, o que pode ser um processo demorado, especialmente se a fita for longa. Essa é uma das razões pelas quais a RAM é muito mais rápida para acesso aleatório do que dispositivos de armazenamento sequencial.


Os discos rígidos (HDDs) são considerados dispositivos de armazenamento de acesso sequencial em um nível técnico. Isso se deve ao fato de que, fisicamente, as cabeças de leitura/gravação precisam se mover para acessar diferentes trilhas (cylinders) e setores no disco. Esse movimento das cabeças e a espera pela rotação do disco podem causar atrasos no acesso aos dados, especialmente quando os dados estão localizados em locais físicos diferentes no disco.
No entanto, do ponto de vista do usuário e do sistema operacional, o HDD é geralmente visto como um dispositivo de armazenamento de acesso direto, graças ao sistema de endereçamento e às tabelas de alocação de arquivos mantidas pelo sistema operacional. Isso permite que os usuários acessem rapidamente arquivos e pastas específicos sem a necessidade de percorrer todo o disco.

+ Memórias de acesso aleatório: _SDD, RAM, Pendrives_
+ Memórias de acesso sequencial: _fitas magnéticas, HD_

</br>

![Random_vs_sequential_access](https://github.com/FireguiQueen/CS50/assets/98475125/5904c1dd-a65a-4116-8a50-0042aac2b8e7)

</br>
</br>

# Diferentes tipos de dados sendo armezenados em memória
Vimos que cada tipo de dado ocupa uma quantidade fixa de espaço na memória, mas como exatamente funciona esse armazenamento? Primeiro, vejamos o que é a memória RAM em si.
![ramMemoryIMG0](https://github.com/FireguiQueen/CS50/assets/98475125/b1df96f0-5f12-48af-833d-9bf1c53d3d64)

Nesta imagem, o que nos interessa são aqueles pequenos chips. Podemos colocar uma figura em formato de grade para entender de maneira mais simples como funciona o endereçamento e a ocupação de dados na memória. A memória RAM tem uma capacidade limitada de armazenamento temporário; em geral, os pentes de memória RAM variam entre 2 GB a 64 GB. Para este exemplo, seremos um pouco mais limitados. Vamos imaginar que cada quadradinho representa 1 byte (8 bits).
 
![ramMemoryIMG1](https://github.com/FireguiQueen/CS50/assets/98475125/013c99dc-0d76-498a-99e3-b2bd75ce8e75)

</br>

Quando definimos uma variável, ela é alocada na nossa memória RAM em algum lugar. E aqui vemos a importância dos nomes e dos tipos de dados para essas variáveis. Os nomes desempenham um papel de endereçamento; não seria muito útil definir que em algum lugar da memória será armazenado o número 5, se não conseguíssemos localizar esse valor para usá-lo posteriormente. 
Já a definição de tipos (int, char, long) define a quantidade de bytes que iremos utilizar para armazenar o valor da variável. Além disso, ela também é reponsável por dizer ao computador como aquele valor de variável será armazenado em memória. 
 
> o long é um tipo de dado usado para números inteiros que são muito altos, geralmente acima de 2 bilhões. No entanto, também podemos atribuir valores pequenos a uma variável do tipo long. Isso, obviamente, não é recomendado, considerando que esse tipo de dado ocupa 8 bytes; poderíamos simplesmente usar o int, que ocupa 4 bytes.

```c
// Pode ser feito. Mas não há sentido em fazê-lo.
long num = 5;

// É o recomendado.
int num = 5;
```

Ao definir uma variável, ela ocupará uma quantidade de espaço referente ao seu tipo. Por exemplo, o tipo `int` exige 4 bytes de armazenamento, então 4 bytes em nossa memória RAM serão ocupados.

![ramMEMORY2](https://github.com/FireguiQueen/CS50/assets/98475125/147c4bc4-e08d-4752-abc2-c23e03815cf1)

Para deixar tudo mais claro, vamos pensar na memória RAM como uma grande grade. E as coisas continuam iguais, cada quadradinho ocupa 1 byte.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/749a8901-a28b-4d8b-ab09-0aa6c791aa37)

Definir tipos não serve apenas para especificar quanto de memória será ocupada pela variável, mas também define como aquele determinado valor deve ser armazenado num formato binário.
Considere o seguinte código:
```c
int num = 5;
char letra = 'A';
```

Na memóriam RAM, podemos considerar esta seguinte representação: 

![image](https://github.com/FireguiQueen/CS50/assets/98475125/684515ac-75d6-4860-b4df-5466d97edff7)



