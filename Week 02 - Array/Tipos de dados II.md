# Tipos de dados 
Cada tipo de dado ocupa uma quantidade fixa de espaço, e na verdade, diferentes sistemas de computador variam na quantidade de espaço realmente usado para cada tipo. Mas em geral, será desta forma:
- `bool`    _1 byte_
- `char`    _1 byte_
- `double`  _8 bytes_
- `float`   _4 bytes_
- `int`     _4 bytes_
- `long`    _8 bytes_
- ..

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


![memoriaRAMIMG](https://github.com/FireguiQueen/CS50/assets/98475125/edd70d3f-ed4f-4df7-b643-9382b2d9e4d1)
