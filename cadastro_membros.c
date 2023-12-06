//programa para cadastrar membros da igreja
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//dados da pessoa
struct cadastro{
	char nome[100];
	char cpf[15];
	char nascimento[20];
};

struct cadastro pessoa[99];
qnt = 0;
//função para o cadastro dessa pessoa
void cadastro()
{
	printf("Insira seu nome: \n");
	fflush(stdin);
	gets(pessoa[qnt].nome);
	printf("Insira o CPF: \n");
	fflush(stdin);
	gets(pessoa[qnt].cpf);
	printf("Insira a data de nascimento: \n");
	fflush(stdin);
	gets(pessoa[qnt].nascimento);
	qnt++;
	system("cls");
	
}
//função para listar todos os membros
void listarMembros(){
	int i;
	
	for(i=0; i<qnt; i++){
		printf("Nome: %s \n", pessoa[i].nome);
		printf("CPF: %s \n", pessoa[i].cpf);
		printf("Nascimento: %s \n", pessoa[i].nascimento);
		printf("======================================\n");
	}
	
}



int main(){

	
	//variáveis
	int op;

	//menu principal
	do{
		printf("\t\t _________________________\n");
		printf("\t\t|Menu de Opcoes:          |\n");
		printf("\t\t|1 - Cadastrar membros    |\n");
		printf("\t\t|2 - Listar Membros       |\n");
		printf("\t\t|3 - Sair                 |\n");
		printf("\t\t|_________________________|\n");
		scanf("%d", &op);
		
		switch(op){
			case 1: 
				cadastro();
				system("cls");
				break;
			case 2:
				listarMembros();
				system("cls");
				break;
			default: 
				printf("Opcap invalida");
				break;
		}
	}while(op != 3);
}