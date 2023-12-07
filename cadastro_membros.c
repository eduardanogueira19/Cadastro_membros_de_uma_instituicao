//programa para cadastrar membros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//dados da pessoa
struct cadastro{
	char nome[100];
	char cpf[15];
	char nascimento[20];
	char endereco[200];
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
	printf("Insira seu endereco: \n");
	fflush(stdin);
	gets(pessoa[qnt].endereco);
	qnt++;
	system("cls");
	
}
//função para listar todos os membros
void listarMembros(){
	int i;
	
	for(i=0; i<qnt; i++){
		printf("\t\t=================================================================\n");
		printf("\t\t|Nome: %s                                                        |\n", pessoa[i].nome);
		printf("\t\t|CPF: %s                                                         |\n", pessoa[i].cpf);
		printf("\t\t|Nascimento: %s                                                  |\n", pessoa[i].nascimento);
		printf("\t\t|Endereco: %s                                                    |\n", pessoa[i].endereco);
		printf("\t\t=================================================================\n");
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
				system("pause");
				system("cls");
				break;
			case 2:
				listarMembros();
				system("pause");
				system("cls");
				break;
			case 3: 
				printf("Saindo...\n");
				break;
			default: 
				printf("[!] Opcao invalida\n\n");
				system("pause");
				break;
		}
	}while(op != 3);
}