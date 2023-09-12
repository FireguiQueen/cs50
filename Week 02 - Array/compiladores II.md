# O básico
Um compilador serve para transformar o código de uma determinada linguagem em código de máquina (binário; zeros e uns). É importante notar que você irá usar compiladores diferentes para linguagens diferentes, e claro, uma única linguagem pode conter diversos compiladores.

</br>

## Clang
Para a linguagem C, podemos usar o compilador "Clang". Cada compilador gera seus próprios comandos. Neste caso, a maneira mais básica possível para transformar um código em C para binário,será dando a seguinte instrução no terminal:
- `clang arquivoParaCompilar.c`

Após a compilação, será criado um arquivo chamado "a.out", traduzindo: "assembler output" (saída do programa montador). Você pode se perguntar o porquê deste nome. Bem, observe que em nenhum momento foi especificado no terminal o nome que desejamos para o arquivo compilado, logo, 'a.out' é o nome padrão dado ao executável compilado.
> a.out é um formato de arquivo usado em antigas versões de sistemas operacionais baseados no Unix para executáveis, código objeto e, em sistemas posteriores, bibliotecas compartilhadas. O nome vem de assembler output (saída do programa montador). a.out permaneceu como o nome padrão de saída para arquivos executáveis criados a partir de certos compiladores e linkers, quando nenhum nome era especificado, mesmo sendo esses executáveis não mais do formato a.out.

Digamos que você queira compilar e escolher um _nome adequado_ para o programa. Sendo assim, iremos dar a seguinte instrução:
- `clang -o nomeDesejado arquivoParaCompilar.c`

Observe que surgem três argumentos após o comando 'clang'.
O argumento `-o` significa "-output", ou seja, desejamos criar uma saída de informação, criar um arquivo. Após `-o`, iremos colocar o nome para esta saída, ou seja, o nome que desejamos para o arquivo compilado. E, por fim, iremos colocar qual arquivo desejamos compilar.

</br>


## Bibliotecas e os compiladores
Quando incluímos alguma biblioteca em nosso programa #include <stdio.h>, podemos pensar que elas estão adicionando funções prontas novas ao nosso programa, para que não precisemos criá-las do zero. Por exemplo, a função printf() é uma função da biblioteca <stdio.h>. Poderíamos até recriar esta função, mas seria algo extremamente trabalhoso. A biblioteca stdio.h não traz apenas o printf() para uso, mas também é responsável por gerar todo um sistema para possibilitar a entrada e saída de informações.
Mas onde entram os compiladores nesta história? Quando fazemos uso de algumas bibliotecas (não são todas), precisamos especificar ao nosso compilador como encontrar e incorporar essas bibliotecas em nosso código. As funções já foram criadas, mas agora, nosso compilador precisa entender como lê-las para transformar todo o nosso programa em zeros e uns.

____________________________________________

# Funcionamento Interno da Compilação em C
Até o momento, nosso saber sobre compilação é bem superficial; até então, a única coisa que sabemos é que compilar uma linguagem significa transformar aquele código em linguágem de máquina (binário), mas existem algumas etapas a serem seguidas antes de ação de compilar ser concluída. 

# CPP (pre-processors C)
O CPP (ou pré-processadores C) na verdade __não__ faz parte do compilador. 
O CPP é uma etapa dentro para concluirmos o ato de 'compilar', mas o CCP faz parte da própria linguagem C. 
Você já notou em que muitas das vezes utilizamso o "#" em nosso código. Pois bem, os compiladores C _não_ foram feitos para entender aquele caractere e sua palavra chave, e nem deveriam. O C é o responsável por traduzir determinada instrução de texto, por exemplo em código. 
Por exemplo, quando colocamos `#include <stdio.h>` estamos informando ao C que desejamos fazer uso da biblioteca 'stdio'.  