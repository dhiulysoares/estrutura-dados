#include <stdio.h>

void inicializaVet(int vet[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        vet[i] = 0;
    }
}

void imprimeVet(int vet[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        printf("%d %d\n", i, vet[i]);
    }
}

void incluiVet(int vet[], int tam) {
    int i;
    for (i=0; i< tam; i++) {
        int valor;
        scanf("%d", &valor);
        vet[i] = valor;
    }
}

void insereVet(int vet[], int val, int pos) {
    vet[pos] = val;
}

void removeVet(int vet[], int pos) {
    vet[pos] = 0;
}

int main() {
    int tamanho = 5;
    int vetor[tamanho];
    int paraInserir = 0;
    int posicaoInserir = 0;
    int posicaoRemover = 0;
    
    printf("Inicializando o Vetor:\n"); inicializaVet(vetor, tamanho);
    printf("Imprimindo Vetor:\n"); imprimeVet(vetor, tamanho);
    printf("Digite os componentes do Vetor:\n"); incluiVet(vetor, tamanho);
    printf("Imprimindo Vetor digitado:\n"); imprimeVet(vetor, tamanho);
    printf("Digite o item a ser inserido no Vetor:\n");
    
    scanf("%d", &paraInserir);
    printf("Posicao para Inserir:");
    scanf("%d", &posicaoInserir);
    insereVet(vetor, paraInserir, posicaoInserir);
    printf("Imprimindo Vetor Digitado:\n"); imprimeVet(vetor, tamanho);    
    
    printf("Remover item da posicao:");
    scanf("%d", &posicaoRemover);
    removeVet(vetor, posicaoRemover);
    printf("Imprimindo Vetor Digitado:\n"); imprimeVet(vetor, tamanho);    
}
