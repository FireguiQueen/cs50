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

## CPP (pre-processors C)
O CPP (ou Pré-processador C) não é, na verdade, parte do compilador. O CPP é uma etapa preliminar no processo de 'compilação', mas faz parte da própria linguagem C. Você já deve ter notado o uso frequente do caractere '#' em nosso código. Bem, os compiladores C não são projetados para interpretar esse caractere e suas palavras-chave, e nem deveriam ser. O C é responsável por traduzir determinadas instruções de texto em código executável.
Por exemplo, quando escrevemos #include <stdio.h>, estamos informando ao C que desejamos usar a biblioteca 'stdio'. Essa biblioteca, na verdade, é um arquivo separado que contém as definições de todas as funções da biblioteca. Quando usamos a biblioteca 'stdio', geralmente estamos interessados na função printf();, e foi exatamente nesse outro arquivo que essa função foi definida. Portanto, o CPP é uma ferramenta de substituição de texto que permite a transformação de instruções em código.
Podemos entender melhor com a imagem abaixo.:

![image](https://github.com/FireguiQueen/CS50/assets/98475125/b748ddc3-8412-4ccd-a038-39c6d7cb3326)

</br>

## Compiling
Nesta etapa, nosso código em C é traduzido para a linguagem assembly. 
Talvez você possa se perguntar: </br>
<q>Por que nosso código em C precisa ser traduzido para assembly invés de virar diretamente linguagem de máquina (código binário)?</q> A grosso modo, isto seria inviável.





## Assembling
