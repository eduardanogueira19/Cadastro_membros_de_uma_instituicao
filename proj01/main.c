#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct dados{
    char nome[100];
    char cpf[15];
    int idade;
    int ano_nascimento;
};

struct dados pessoa[99];
int qnt =0;

//cadastro
void cadastro(){
    printf("Insira seu nome completo:\n");
    fflush(stdin);
    gets(pessoa[qnt].nome);
    printf("Insira seu CPF:\n");
    fflush(stdin);
    gets(pessoa[qnt].cpf);
    printf("Insira sua idade:\n");
    fflush(stdin);
    scanf("%d", &pessoa[qnt].idade);
    printf("Insira seu ano de nascimento:\n");
    fflush(stdin);
    scanf("%d", &pessoa[qnt].ano_nascimento);
    qnt++;
}

//Listar todos os cadastros
void lista(){
    int i;

    for (i=0; i < qnt; i++) {
        printf("Nome: %s\n", pessoa[i].nome);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("Nascimento: %d\n", pessoa[i].ano_nascimento);
        printf("__________________________________________________\n");
    }
}

//Listar por idade
void listar_idade(int tipoIdade){
    int opcao=0;
    int i=0;

    do{
        printf("Escolha a faixa etária que deseja listar:\n");
        printf("1 - Infantil\n");
        printf("2 - Jovem\n");
        printf("3 - Adulto\n");
        printf("4 - Idoso\n");
        scanf("%d", &opcao);
        switch(opcao){

            case 1://1 - Infantil
                printf("Cadastros de 0 a 10 anos:\n\n");
                for (i=0; i < qnt; i++) {
                    if(pessoa[i].idade <= 10){
                        printf("Nome: %s\n", pessoa[i].nome);
                        printf("CPF: %s\n", pessoa[i].cpf);
                        printf("Idade: %d\n", pessoa[i].idade);
                        printf("Nascimento: %d\n", pessoa[i].ano_nascimento);
                        printf("__________________________________________________\n");
                    }
                }
                break;

            case 2://2 - Jovem
                printf("Cadastros de 11 a 18 anos: \n\n");
                for (i=0; i < qnt; i++) {
                    if((pessoa[i].idade > 10) && (pessoa[i].idade <=18)){
                        printf("Nome: %s\n", pessoa[i].nome);
                        printf("CPF: %s\n", pessoa[i].cpf);
                        printf("Idade: %d\n", pessoa[i].idade);
                        printf("Nascimento: %d\n", pessoa[i].ano_nascimento);
                        printf("__________________________________________________\n");
                    }
                }
                break;

            case 3://3 - Adulto
                printf("Cadastros de 19 a 59 anos: \n\n");
                for (i=0; i < qnt; i++) {
                    if((pessoa[i].idade > 18) && (pessoa[i].idade <= 59)){
                        printf("Nome: %s\n", pessoa[i].nome);
                        printf("CPF: %s\n", pessoa[i].cpf);
                        printf("Idade: %d\n", pessoa[i].idade);
                        printf("Nascimento: %d\n", pessoa[i].ano_nascimento);
                        printf("__________________________________________________\n");
                    }
                }
                break;

            case 4://4 - Idoso
                printf("Cadastros acima de 60 anos: \n\n");
                for (i=0; i < qnt; i++) {
                    if(pessoa[i].idade >= 60){
                        printf("Nome: %s\n", pessoa[i].nome);
                        printf("CPF: %s\n", pessoa[i].cpf);
                        printf("Idade: %d\n", pessoa[i].idade);
                        printf("Nascimento: %d\n", pessoa[i].ano_nascimento);
                        printf("__________________________________________________\n");
                    }
                }
                break;

        }
    }while(opcao > 4 );

}

//Listar por ano de nascimento
void listar_nascimento(int tipoNascimento){
    int opcao=0;
    int i=0;
    int ano=0;

    printf("Digite o ano desejado:\n");
    scanf("%d", &ano);

    for (i=0; i < qnt; i++) {
        if(ano == pessoa[i].ano_nascimento){
            printf("Nome: %s\n", pessoa[i].nome);
            printf("CPF: %s\n", pessoa[i].cpf);
            printf("Idade: %d\n", pessoa[i].idade);
            printf("Nascimento: %d\n", pessoa[i].ano_nascimento);
            printf("__________________________________________________\n");
        }
    }

}
int main(){

    setlocale(LC_ALL, "");

    int op=0;
    while(op != 5){

        printf("BEM-VINDO AO SISTEMA\n");
        printf("Escolha uma opção:\n");
        printf("1 - Cadastro\n");
        printf("2 - Listar todos os Cadastros\n");
        printf("3 - Listar por classe de idade\n");
        printf("4 - Listar por ano de nascimento\n");
        printf("5 - Sair\n");
        scanf("%d", &op);
        system("cls");

        switch(op)
        {
            case 1:
                printf("Cadastro:\n\n");
                cadastro();
                system("pause");
                system("cls");
                break;
            case 2:
                printf("Listar Cadastros:\n\n");
                lista();
                system("pause");
                system("cls");
                break;
            case 3:
               printf("Listar por faixa etária:\n\n");
               int tipoIdade;
               listar_idade(tipoIdade);
               system("pause");
               system("cls");
               break;
            case 4:
                printf("Listar por ano de nascimento:\n\n");
                int tipoNascimento;
                listar_nascimento(tipoNascimento);
                system("pause");
                system("cls");
                break;
            case 5:
                printf("Saindo...\n\n");
                system("pause");
                system("cls");
                break;
            default:
                printf("[!] Opção Inválida!!\n\n");
                break;

        }
    }
    return 0;
}
