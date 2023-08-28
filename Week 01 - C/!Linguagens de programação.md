# Linguagens de programação 
Uma linguagem de programação é um vocabulário e um conjunto de regras gramaticais usadas para escrever programas de computador. Esses programas instruem o computador a realizar determinadas tarefas específicas.

Vamos pensar num idioma do mundo, o português. Quando há duas pessoas que falam o idioma nativamente, a tendência é que elas se comuniquem em português. Pense nessas duas pessoas como Pesosa 'a' e pessoa 'b', para a pessoa 'a' pedir que a outra realize uma ação, ela dirá uma frase contendo palavras do idioma. 

Com a linguagem de progração, as diferenças não são muito grandes. Com linguagem de programação, usamos alguns padrões, algumas palavras chaves para determinar como uma ação dentro do computador será realizada. Além disso, na programação, precisamos escrever o nosso código da melhor maneira possível, sendo extremamente detalhistas ao criar um código. Pois qualquer informação erronea em nosso programa, pode gerar bugs ou resultados inesperados. 

</br>
</br>

## Correção, design e estilo
+ Correção: _verificamos se o nosso código funciona corretamente, conforme planejado._
+ Design: _uma medida subjetiva de quão bem escrito nosso código é, com base em quão eficiente, elegante ou logicamente legível ele é, sem repetição desnecessária. Afinal, não queremos um software demandando mais recursos do que o necessário._
+ Estilo: _o quão esteticamente formatado nosso código é, em termos de indentação consistente e outra colocação de símbolos. As diferenças de estilo não afetam a exatidão ou o significado do nosso código, mas afetam o quão legível é visualmente. Um exemplo em javascript é que, caso a estrutura condicional `if` contenha apenas uma linha, podemos escolher não utilizar as chaves._

</br>
</br>

## Erros no código
Vamos desconsiderar a questão relacionada à máquina; vamos assumir que ela seja de excelente qualidade e capaz de executar qualquer software (jogos, editores de imagem/vídeo, modelagem 3D, etc.) tranquilamente. Você provavelmente já se questionou por que ocorrem bugs ou crashes em softwares, principalmente em jogos.

A resposta é bem simples: _certas ações não foram previstas_.

Considere um algoritmo simples:
1. Pegar uma folha _(uma folha de agenda que pode conter números de pessoas)_.
2. Ligar para o primeiro número que você ver na folha.
> Observe que neste algoritmo há um pequeno erro: pode ou não haver um número na folha. No entanto, em nenhum momento foi indicado o que fazer no caso de __não__ haver um número, e isso pode levar a um erro no programa.

É claro que crashes, travamentos ou bugs não ocorrem apenas por causa do motivo mencionado acima. Algo que também pode causar travamentos ou crashes é quando o código, por exemplo, é mal escrito, apresentando muita redundância. Portanto, mesmo com uma máquina extremamente potente, é possível ter problemas com alguns softwares devido a códigos mal elaborados, o que faz com que o software demande muito mais recursos do que o necessário.

</br>
</br>

## IDE (integrated development environment)
Uma IDE é um software que agrega uma variedade de ferramentas e recursos projetados para _auxiliar_ os desenvolvedores durante todo o ciclo de vida do desenvolvimento de software. Seu objetivo é proporcionar um ambiente centralizado e eficiente para escrever, testar, depurar e gerenciar código.

### Mais do que um Editor
Embora seja verdade que um simples editor de texto, como o Bloco de Notas, pode ser usado para escrever código, as IDEs oferecem muito mais. Realce de Sintaxe, Autocompletar e Correção Automática são apenas o começo. A IDE não apenas destaca erros, mas também oferece sugestões úteis para melhorar a qualidade do código.

### Extensões 
A verdadeira força das IDEs reside nas extensões. Elas são complementos que estendem as funcionalidades da IDE. Por exemplo, se você estiver desenvolvendo em Python, pode adicionar uma extensão que ofereça integração direta com o gerenciador de pacotes pip. Se estiver trabalhando com web design, há extensões que facilitam a edição de HTML, CSS e JavaScript. Essa flexibilidade permite que você adapte a IDE às suas necessidades específicas.
Por exemplo, existe uma extensão no VsCode que atualiza em tempo real as mudanças em arquivos .HTML. Por exemplo, ao colocar uma tag `<p>` em seu arquivo, logo em seguida você precisa dar F5 em sua página para ver esta alteração. Agora com esta extensão, ela faz isso de maneira automática para você.

</br>
</br>

## Linguagem interpretada x compilada 
Conforme vimos antes, os computadores se comunicam essencialmente por meio da linguagem binária, aquela composta por zeros e uns. Quando se trata de criar programas de computador, temos dois principais jeitos de fazer isso: linguagens compiladas e linguagens interpretadas.

No universo das linguagens compiladas, como C, C++, Java e Go, os programadores escrevem o código usando uma linguagem mais _próxima_ da humana. Esse código passa por um programa chamado compilador, que transforma (compila) o código em uma linguagem binaria, da qual é compreendida pela máquina. O resultado final é um arquivo executável que o sistema operacional pode rodar diretamente. Essa etapa de compilação age como uma espécie de tradutor do idioma humano para o idioma das máquinas (binário).

Nas linguagens interpretadas, como JavaScript, PHP e Python, o processo é um pouco diferente. Ainda começamos escrevendo o código numa linguagem de alto nível, mas ao invés de ser convertido antecipadamente para linguagem binária, ele necessita de um intérprete. Esse intérprete, como o motor V8 usado no JavaScript, lê e executa o código linha por linha, transformando-o em tempo real em instruções compreensíveis para o hardware. Isso traz flexibilidade e agilidade no desenvolvimento, mas pode levar a um desempenho um pouco menor comparado às linguagens compiladas.

</br>
</br>


## Low-level & high-level
Linguagens "low-level", também conhecidas como linguagens de programação de baixo nível, não são amplamente utilizadas devido a vários fatores. Primeiramente, exigem profissionais mais experientes, uma vez que estão mais próximas da linguagem de máquina e envolvem manipulação direta de recursos do hardware. Além disso, o processo de desenvolvimento nessas linguagens é mais lento e trabalhoso, pois cada detalhe precisa ser especificado. Exemplos de linguagens de baixo nível incluem Assembly e C.

As linguagens "high-level", ou linguagens de alto nível, são mais próximas da linguagem humana, o que as torna mais acessíveis e fáceis de aprender e usar. Elas abstraem muitos detalhes de baixo nível e oferecem bibliotecas e frameworks que facilitam o desenvolvimento. Isso resulta em maior produtividade, uma vez que os programadores podem se concentrar mais na lógica do programa do que em questões técnicas. Exemplos de linguagens de alto nível são Python, Java, e C++.

A razão pela qual muitos programas não são desenvolvidos em linguagens de baixo nível está relacionada à falta de suporte e às dificuldades mencionadas anteriormente. A ausência de bibliotecas e frameworks prontos para uso nessas linguagens pode aumentar drasticamente o tempo necessário para desenvolver um programa. Em contraste, linguagens de alto nível oferecem uma ampla gama de recursos e ferramentas que agilizam o processo de desenvolvimento e permitem que os programadores se concentrem na resolução de problemas.



### Recomendação de vídeos
<a href="https://youtu.be/SNyh-cubxaU">Linguagem Compilada vs Interpretada | Fabio Akita</a>