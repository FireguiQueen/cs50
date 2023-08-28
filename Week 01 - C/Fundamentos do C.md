# Declarações básicas de funções
Ao declarar uma função é esperado duas coisas: </br> 
Esta função vai retornar um valor __OU__ vai executar aquele bloco, realizando ações no programa.

</br>

### int _(integer)_
Ao usarmos `int`, esperamos que esta função retorne um valor inteiro. Observe que não é obrigatório fazer com que ela retorne algum valor.
```c
int retorneIdade(){
    return 17;
}
```
 
</br>

### void _(vazio)_
A declaração 'void' serve para funções que não retornam __nada__. Você pode ser perguntar: </br> mas caso a função não retorne nada, podemos usar o `int` também. Sim, isso é verdade, mas é uma _boa prática_ usar o `void` para funções que não retornam nada, apenas que executam ações.
```c
void frase(){
    printf("Hello, world! I'm learning C")
}
```



### void
Ao declarar uma função usando `void`, estamos especificando que a função _não_ irá retornar nada,
apenas fazer a execução das instruções.
```c
void digaOi(){

}
```


</br>

## Para que servem e como importar as bibliotecas




### Recomendação de vídeos
- <a href="https://youtu.be/vVLhdyte9PA">Para que servem as bibliotecas stdio.h e stdlib.h | toCode</a> 
