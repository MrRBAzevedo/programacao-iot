#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[15];
    int matricula;
    int idade;
    float ira;
};

int main() {
    struct Aluno aluno01;

    printf("Digite o nome do aluno: ");
    fgets(aluno01.nome, sizeof(aluno01.nome), stdin);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno01.matricula);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno01.idade);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno01.ira);

    printf("\n");

    printf("Nome do aluno: %s", aluno01.nome);
    printf("Matrícula: %d\n", aluno01.matricula);
    printf("Idade: %d\n", aluno01.idade);
    printf("IRA: %.2f\n", aluno01.ira);

    return 0;
}
