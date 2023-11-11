/*
    Faça um vetor de tamanha 50 preenchido com o seguinte valor: (i + 5*i) % (i + 1), sendo i a posição do elemnto no vetor. Em seguida imprima o vetor na tela.
*/
#include <stdio.h>

int main()
{
    int tamanho = 50;
    int preencher_vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        preencher_vetor[i] = (i + 5*i) % (i + 1);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d -> %d", i, preencher_vetor[i]);
    }
    
    
}