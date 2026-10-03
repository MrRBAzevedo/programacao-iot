#include <stdio.h>

void Somar10(int *ponteiro) {
    *ponteiro =+ 10;
}


int main() {
    int dez = 10;

    /* Em C, os ponteiros são variáveis que guardam o endereço na memória
    de outras variáveis. */

    // Declarando um ponteiro
    int *ponteiro;
    /* Para declarar um ponteiro, deve-se indicar o tipo que a variável
    para a qual aponta guarda, seu nome e utilizar o símbolo '*'. 
       A função do '*' é indicar ao computador que aquela variável
    que está sendo criada é um ponteiro. */

    // Inicializando um ponteiro
    ponteiro = &dez;
    /* Para inicializar um ponteiro, deve-se indicar o endereço de
    memória (variável) que ele irá armazenar. Para isso, utiliza-se
    o operador '&'. */
    int vinte = 20;
    int *ponteiro2 = &vinte;
    /* Assim como as demais variáveis, os ponteiros também podem ser
    inicializados no momento de sua declaração. */

    // Acessando variáveis com ponteiros
    int valor = *ponteiro;
    /* Para acessar o valor guardado pela variável para a qual um 
    ponteiro aponta, utiliza-se o '*'. */


    // Ponteiros em funções
    Somar10(&dez);
    /* O uso em funções é um dos mais importantes dos ponteiros. Nele,
    os ponteiros são utilizados para mandar como parâmetro a localização
    de uma variável na memória, permitindo que a função acesse-a diretamente. */
    Somar10(&vinte);
    Somar10(ponteiro2);
    /* Pode-se enviar diretamente o endereço de uma variável - utilizando-se 
    o operador '&' - ou um outro ponteiro que o guarde. */

    // Ponteiros e vetores
    int Vetor[10];
    /* Em C, o nome de um vetor é um ponteiro que guarda a localização do primeiro
    elemento desse vetor. Baseando-se no exemplo acima, *Vetor é o mesmo de Vetor[0] */



}