# Relembrando
Um compilador serve para transformamos o código de determinada linguagem em código de máquina (binário; zeros e uns). É importante notar que você irá usar compiladores diferentes para linguagens diferentes, e claro, uma única linguagem pode conter diversos compiladores. 

## Clang
Para a linguagem C, podemos usar o compilador "Clang". 
Cada compilador gera seus próprios comandos, no caso, da maneira mais básica possível, para transformamos um código em C para binário, iremos dar a seguinte instrução no terminal:
- `clang nomeDoArquivo.c`

Após a compilação, será criado um arquivo chamado "a.out", traduzindo: "assembler.output". 
Você pode se perguntar o por que deste nome, e bem, observe que em nenhum momento foi dito no terminal o nome que desejamos para o arquivo compilado, logo, 'a.out' é o nome padrão dado ao executável compilado.
