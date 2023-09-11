# Relembrando
Um compilador serve para transformar o código de uma determinada linguagem em código de máquina (binário; zeros e uns). É importante notar que você irá usar compiladores diferentes para linguagens diferentes, e claro, uma única linguagem pode conter diversos compiladores.

## Clang
Para a linguagem C, podemos usar o compilador "Clang".
Cada compilador gera seus próprios comandos. No caso, da maneira mais básica possível, para transformar um código em C para binário, iremos dar a seguinte instrução no terminal:
- `clang arquivoParaCompilar.c`

Após a compilação, será criado um arquivo chamado "a.out", traduzindo: "assembler output" (saída do programa montador).
Você pode se perguntar o porquê deste nome. Bem, observe que em nenhum momento foi especificado no terminal o nome que desejamos para o arquivo compilado, logo, 'a.out' é o nome padrão dado ao executável compilado.

> a.out é um formato de arquivo usado em antigas versões de sistemas operacionais baseados no Unix para executáveis, código objeto e, em sistemas posteriores, bibliotecas compartilhadas. O nome vem de assembler output (saída do programa montador). a.out permaneceu como o nome padrão de saída para arquivos executáveis criados a partir de certos compiladores e linkers, quando nenhum nome era especificado, mesmo sendo esses executáveis não mais do formato a.out.

Digamos que você queira compilar e escolher um nome adequado para o programa. Sendo assim, iremos dar a seguinte instrução:
- `clang -o nomeDesejado arquivoParaCompilar.c`

Observe que surgem três argumentos após o comando 'clang'.
O argumento `-o` significa "-output", ou seja, desejamos criar uma saída de informação, criar um arquivo. Após `-o`, iremos colocar o nome para esta saída, ou seja, o nome que desejamos para o arquivo compilado. E, por fim, iremos colocar qual arquivo desejamos compilar.


## Bibliotecas e os compiladores
