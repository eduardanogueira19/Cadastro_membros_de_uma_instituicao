//programa para cadastrar membros da igreja
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//dados da pessoa
/*struct cadastro{
	char nome[100];
	char cpf[15];
	int nascimento;
	int congregacao;
	char nomeCongregacao[50];
}*/


//função para o cadastro dessa pessoa
//void cadastro;
//função para listar todos os membros
//void listarMembros(){
//}

//int lerOpcao(){
//	int op;
//	mostrarMenuOpcao(); 
//	scanf("%d", &op);
//	return op;
//}



int main(){
	
	setlocale(LC_ALL, "");
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
	}while(op != 3);
}