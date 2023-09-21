# Linguagens de programação 
Uma linguagem de programação é um vocabulário e um conjunto de regras gramaticais usadas para escrever programas de computador. Esses programas instruem o computador a realizar determinadas tarefas específicas.
Vamos pensar no idioma português, e há duas pessoas se comunicando através dele. Pense nessas duas pessoas como Pessoa 'A' e Pessoa 'B'. Para que a Pessoa 'A' peça que a outra realize uma ação, ela dirá uma frase contendo palavras do idioma português. No entanto, não basta apenas usar palavras-chave; é necessário seguir as leis gramaticais daquele determinado idioma, o português.

Vamos analisar o seguinte diálogo entre elas:
- pessoa A: você quer um copo de refrigerante?
- pessoa B: não, quero um copo de água

Observe a frase da Pessoa A; a ideia é fazer uma pergunta se a pessoa deseja refrigerante. A frase não poderia simplesmente ser "Você quer copo de refrigerante", pois isso seria uma formulação incorreta. Em vez disso, para encurtar a frase num contexto mais informal, seria algo como: "Você quer refrigerante?"

Agora, vamos analisar a resposta da Pessoa B. Há algo muito importante na frase dela, a vírgula.
Sem o uso dela, a frase mudaria de sentido, expressando "Não quero um copo de água" (não desejo água).
Essa frase em si (sem a vírgula) estaria correta, porém, não neste contexto, já que em nenhum momento foi perguntado se ela deseja água.


Com a linguagem de programação, as diferenças não são muito grandes. Com elas, usamos alguns padrões e palavras-chave para determinar como uma ação dentro do computador será realizada. Além disso, na programação, precisamos escrever o nosso código da melhor maneira possível, sendo extremamente detalhistas ao criar um código. Qualquer informação errônea em nosso programa pode gerar bugs, resultando em comportamentos indesejados ou falhas no funcionamento do software.
É importante entender que a linguagem de programação é como a gramática que utilizamos para comunicar instruções ao computador. Assim como no exemplo anterior com as pessoas 'A' e 'B', a precisão na escolha de palavras e na estrutura das frases é fundamental para que o computador interprete corretamente o que queremos que ele faça.

</br>
</br>

## Correção, design e estilo
+ Correção: _verificamos se o nosso código funciona corretamente, conforme planejado._ 

+ Design: _uma medida subjetiva de quão bem escrito nosso código é, com base em quão eficiente, elegante ou logicamente legível ele é, sem repetição desnecessária. Afinal, não queremos um software demandando mais recursos do que o necessário._

+ Estilo: _o quão esteticamente formatado nosso código é, em termos de indentação consistente e outra colocação de símbolos. As diferenças de estilo não afetam a exatidão ou o significado do nosso código, mas afetam o quão legível é visualmente. Um exemplo em javascript é que, caso a estrutura condicional `if` contenha apenas uma linha, podemos escolher não utilizar as chaves. Outro exemplo são os nomes que damos a nossas variáveis, eles precisam fazer sentido ao que a variável recebe. Se você irá criar uma variável referente ao saldo do usuário no seu site, o nome mais adequado a variável seria "saldo" ou "saldoUsuario"._

</br>
</br>

## Erros no código
Vamos desconsiderar a questão relacionada à máquina; vamos assumir que ela seja de excelente qualidade e capaz de executar qualquer software (jogos, editores de imagem/vídeo, modelagem 3D, etc.) tranquilamente. Você provavelmente já se questionou por que ocorrem bugs ou crashes em softwares, principalmente em jogos.
A resposta é bem simples: _certas ações não foram previstas. O algoritimo é falho._

Considere um algoritmo simplificado de um jogo 3d:
1. Pegar uma folha _(folha de uma agenda que pode conter números de pessoas)_.
2. Ligar para o primeiro número que você ver na folha.
> Observe que neste algoritmo há um pequeno erro: pode ou não haver um número na folha. No entanto, em nenhum momento foi indicado o que fazer no caso de __não__ haver um número, e isso pode levar a um erro em nosso algoritimo.

É claro que crashes, travamentos ou bugs não ocorrem apenas por causa do motivo mencionado acima. Algo que também pode causar travamentos ou crashes é quando o código é mal escrito, apresentando muita redundância. Portanto, mesmo com uma máquina extremamente potente, é possível ter problemas com alguns softwares devido a códigos mal elaborados, o que faz com que o software demande muito mais recursos do que o necessário.

</br>
</br>

## IDE (integrated development environment)
Uma IDE é um software que agrega uma variedade de ferramentas e recursos projetados para _auxiliar_ os desenvolvedores durante todo o ciclo de vida do desenvolvimento de software. Seu objetivo é proporcionar um ambiente centralizado e eficiente para escrever, testar, depurar e gerenciar código.

### Mais do que um Editor
Embora seja verdade que um simples editor de texto, como o Bloco de Notas, pode ser usado para escrever código, as IDEs oferecem muito mais. Realce de Sintaxe, Autocompletar e Correção Automática são apenas o começo. A IDE não apenas destaca erros, mas também oferece sugestões úteis para melhorar a qualidade do código.

### Extensões 
A verdadeira fortaleza das IDEs reside em suas extensões. Estas são complementos que ampliam as funcionalidades da IDE. Por exemplo, ao desenvolver em Python, você pode adicionar uma extensão que ofereça integração direta com o gerenciador de pacotes pip. Se estiver trabalhando com web design, existem extensões que facilitam a edição de HTML, CSS e JavaScript. Essa flexibilidade permite que você adapte a IDE às suas necessidades específicas.
Um exemplo disso é a extensão no Visual Studio Code que atualiza em tempo real as mudanças em arquivos .HTML. Quando você insere uma tag `<p>` em seu arquivo, as alterações são refletidas automaticamente na sua página, dispensando a necessidade de atualizar manualmente (dar F5) a página para ver as mudanças.


</br>
</br>


## Linguagem interpretada x compilada 
Conforme vimos antes, os computadores se comunicam essencialmente por meio da linguagem binária, aquela composta por zeros e uns. Quando se trata de criar programas de computador, temos dois principais jeitos de fazer isso: linguagens compiladas e linguagens interpretadas.

No universo das linguagens compiladas, como C, C++, Java e Go, os programadores escrevem o código usando uma linguagem mais _próxima_ da humana. Esse código passa por um programa chamado compilador, que transforma (compila) o código em uma linguagem binaria, da qual é compreendida pela máquina. O resultado final é um arquivo executável que o sistema operacional pode rodar diretamente. Essa etapa de compilação age como uma espécie de tradutor do idioma humano para o idioma das máquinas (binário).

Nas linguagens interpretadas, como JavaScript, PHP e Python, o processo é um pouco diferente. Ainda começamos escrevendo o código numa linguagem de alto nível, mas ao invés de ser convertido antecipadamente para linguagem binária, ele necessita de um intérprete. Esse intérprete, como o motor V8 usado no JavaScript, lê e executa o código linha por linha, transformando-o em tempo real em instruções compreensíveis para o hardware. Isso traz flexibilidade e agilidade no desenvolvimento, mas pode levar a um desempenho um pouco menor comparado às linguagens compiladas.


</br>
</br>


## Low-level & high-level
As linguagens de programação "low-level," também conhecidas como linguagens de baixo nível, não são amplamente adotadas devido a uma série de fatores. Primeiramente, elas exigem profissionais mais experientes, uma vez que estão mais próximas da linguagem de máquina e envolvem a manipulação direta dos recursos de hardware. Além disso, o processo de desenvolvimento nessas linguagens é mais lento e trabalhoso, uma vez que cada detalhe precisa ser especificado meticulosamente. Exemplo de uma linguagem de baixo nível é o Assembly.

Por outro lado, as linguagens de programação "high-level," ou de alto nível, estão mais próximas da linguagem humana, o que as torna mais acessíveis e fáceis de aprender e utilizar. Elas abstraem muitos detalhes de baixo nível e oferecem bibliotecas e frameworks que simplificam o desenvolvimento. Isso resulta em maior produtividade, uma vez que os programadores podem se concentrar mais na lógica do programa do que em questões técnicas. Exemplos de linguagens de alto nível incluem Python, Java e C++.

A razão pela qual muitos programas não são desenvolvidos em linguagens de baixo nível está relacionada à falta de suporte e às dificuldades mencionadas anteriormente. A ausência de bibliotecas e frameworks prontos para uso nessas linguagens pode aumentar significativamente o tempo necessário para desenvolver um programa. Em contraste, as linguagens de alto nível oferecem uma ampla gama de recursos e ferramentas que agilizam o processo de desenvolvimento e permitem que os programadores se concentrem na resolução de problemas.

Antigamente, o desenvolvimento em Assembly era comum; inclusive, muitos jogos foram escritos diretamente nessa linguagem. Isso se devia ao fato de que o Assembly trabalha muito próximo à linguagem binária, o que faz com que todo o código em Assembly seja rapidamente traduzido em zeros e uns, economizando assim muitos recursos dos computadores antigos.
É importante ressaltar que, no passado, o hardware era extremamente caro; meros megabytes de RAM custavam o olho da cara. Portanto, era essencial desenvolver software de forma otimizada para que ele pudesse ser executado eficientemente em componentes limitados.
Hoje em dia, a situação mudou. O que se tornou caro são os desenvolvedores; a hora do programador é valiosa. Portanto, é mais viável direcioná-los para trabalhar com linguagens de alto nível, uma vez que o processo de desenvolvimento é mais rápido e eficiente.

Também podemos abordar um assunto mais complexo: "dificilmente você será melhor do que um compilador". O objetivo dos softwares compiladores é exatamente compilar, ou seja, pegar o código fonte de determinada linguagem (C, C++, Go) e transformá-lo em zeros e uns. A realidade é que eles fazem isso MUITO bem, incrivelmente bem mesmo. Os compiladores são capazes de identificar erros e até mesmo transformar seu código bosta repetitivo em algo mais sofisticado.
Portanto, quando se trata de escolher entre desenvolver em Assembly ou em C e, em seguida, compilar, a escolha mais inteligente, geralmente, é escrever em C mesmo. Isso ocorre porque os compiladores são mestres em otimização e podem transformar seu código em algo eficiente e elegante, poupando você do trabalho árduo de lidar com a complexidade do Assembly.

Para simplificar a explicação, podemos imaginar a seguinte situação:

- Você está na Rússia.
- Você sabe falar russo, porém, seu vocabulário é limitado e sua pronúncia é péssima.
- Você possui um amigo cuja língua nativa é o russo, e ele fala português fluentemente.

Suponha que você deseje fazer uma pergunta ao dono de um mercadinho em Moscou. Para isso, você tem duas opções:
1. Falar diretamente com ele. No entanto, é provável que ele tenha dificuldades em entender você devido à sua pronúncia.
2. Falar em português com seu amigo russo, para que ele traduza sua pergunta para o russo e a transmita ao dono do mercado.

A escolha mais inteligente, sem dúvida, é a segunda opção, e podemos relacioná-la da seguinte maneira:
- Você representa a linguagem de programação C.
- Seu amigo atua como o compilador.
- O dono do mercado é o computador.

Assim como no exemplo, o compilador (seu amigo) desempenha um papel crucial na tradução das instruções que você fornece em C para uma linguagem que a máquina (dono do mercado) possa compreender e executar com precisão. 
Isso é mais eficaz porque o russo do seu amigo é excelente, garantindo uma comunicação clara e precisa com o dono do mercado.


____________________________________________________

### Recomendação de vídeos
<a href="https://youtu.be/SNyh-cubxaU">Linguagem Compilada vs Interpretada | Fabio Akita</a>