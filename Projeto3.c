#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h> 
#include <string.h>

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo,"w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}

int consulta()
{
	setlocale(LC_ALL,"Portuguese");

	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Nao foi possivel abrir o arquivo, nao localizado.!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
{
		printf("\nEssas sao as informacoes do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
}
	
	system("pause");
}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n"); 
	system("pause");
}
int main()
	{
	int opcao=0; 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		setlocale(LC_ALL, "Portuguese");

		system("cls");
		
		printf("### Cart�rio da EBAC ###\n\n");
		printf("Escolha a op��o desejada do menu\n\r");
		printf("\t1 Registrar nomes\n");
		printf("\t2 Consultar nomes\n");
		printf("\t3 Deletar nomes\n\n");
		printf("\t4 Sair do sistema\n\n");
		printf("Op��o: ");

		scanf("%d", &opcao); 

		system("cls");
		
		switch (opcao) 
	{

		case 1:
		registro();
		break;

		case 2:
		consulta();
		break;

		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
		default:
		printf("Essa op��o n�o est� disponivel!\n"); 
		system("pause");
		break;
	}
	}
}
