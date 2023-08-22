# Requisitos para este conteúdo
- Leitura de <a href="https://github.com/FireguiQueen/CC50/blob/main/Week%200%20-%20Scratch/!Ci%C3%AAncia%20da%20computa%C3%A7%C3%A3o%20-%20M%C3%A1quinas%20e%20n%C3%BAmeros.md">Máquinas e números</a> 

________________________________________________

# BITS: o surgimento dos caracteres
O que foi discutido anteriormente nos permite entender que a principal função dos computadores é computar, ou seja, se comportar como calculadoras. E, de fato, foi para isso que os computadores foram criados: facilitar cálculos matemáticos demorados ou complexos para os seres humanos.

Contudo, nos dias atuais, utilizamos os computadores para uma infinidade de outras atividades. O que fazemos no computador, como assistir vídeos, participar de cursos, jogar, comprar e vender ações são coisas muito mais complexas do que simples cálculos matemáticos. No final das contas, todas essas atividades envolvem a combinação de números e caracteres. Afinal, como um humano entenderia com precisão a interface de um programa se não houvesse a presença de palavras e números?

### Então, surge uma pergunta: _como os computadores são capazes de apresentar caracteres (alfabéticos, numéricos..) em interfaces?_
A humanidade teve uma ideia muito simples e útil nos primórdios da computação ao tentar representar caracteres. Foi pensado: Vamos atribuir números do sistema binário a esses caracteres. Por exemplo, a sequência de bits '1000001' forma o número 65; portanto, vamos associar a letra "A" a essa sequência de bits. Basicamente, seria assim: 1000001 = "A".

Para isso, foi criado o ASCII (American Standard Code for Information Interchange), um sistema utilizado para representar letras, algarismos, sinais de pontuação e caracteres de controle por meio de sequências de bits.

O ASCII foi criado não apenas para representar letras, algarismos, sinais de pontuação e outros elementos, mas também para padronizar a maneira como fazemos essa representação. Imagine se existissem 10 diferentes códigos ASCII de distintas empresas. Em um determinado sistema ASCII, a letra 'A' poderia ser representada pelos bits 10001 (17), enquanto em outro, a letra 'A' seria indicada pelos bits 100000 (32); isso causaria uma grande confusão.


Vale ressaltar que tudo o que vemos na tela, ou seja, nas interfaces, são, na verdade, bits que representam caracteres específicos. Experimente abrir o Bloco de Notas e digitar o número '1', salve e feche o arquivo. Agora, localize o arquivo, clique com o botão direito e selecione "Propriedades" para verificar o tamanho do arquivo. Esse tamanho será exatamente a quantidade de bits contidos nele.
Cada caractere do conjunto ASCII é representado por uma sequência de 8 bits. Portanto, quando inserimos o número '1' no Bloco de Notas, por trás das cenas, o que realmente é armazenado é '00000001'. Ao verificar o tamanho do arquivo, constataremos que ele ocupa 8 bits (1 byte).

![image](https://github.com/FireguiQueen/CC50/assets/98475125/c56fffea-5495-441a-ad15-965c8ad4c609)


#### Informações 
- _ASCII foi definido como padrão em 1968_
- _Cada caractere é representado por um código de 8 bits (um byte)_
- _'A' é representado pelos bits 1000001 `(65)`, 'B' pelo 1000010 `(66)` e assim por diante.._

## Contextos diferentes, resultados diferentes
Já aprendemos que, com determinada cadeia de bits, podemos formar letras, pontuções e simbolos. Mas isso tudo está relacionado ao contexto em que colocamos esta cadeia. 

