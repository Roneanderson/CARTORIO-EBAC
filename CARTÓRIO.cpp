#include <stdio.h> //biblioteca de comunica��o com usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�
#include <string.h> //biblioteca respons�vel cuidar da string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF  a ser cadastrado: ");
	scanf("%s", cpf);

	strcpy(arquivo, cpf); // respons�vel por copiar os valores
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); // cria o aquivo 
	fprintf(file,cpf); // salvo o valor da v�riavel
	fclose(file); // fecha o arquivo
	
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
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system ("pause");
	
	
	
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF  ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado: ");	
	}	
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system ("pause");

}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}
int main()	{
 		int opcao=0; //Definindo vari�veis
		int laco=1;
		char senhadigitada[10]="a";
		int comparacao;
		
		printf("#### Cart�rio da EBAC ###\n\n");
		printf("Login de administrador!\n\nDigite a sua senha:");
		scanf("%s",senhadigitada);
		
		comparacao = strcmp(senhadigitada, "admin");
		
		if(comparacao == 0 )
		{
			system ("cls");
			for(laco=1;laco=1;)	
			{ 	
	
				setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	
				printf("#### Cart�rio da EBAC ###\n\n"); //inicio do menu
				printf("Escolha a op��o desejada do menu:\n\n");
				printf("\t1 - Registrar nomes\n");
				printf("\t2 - Consultar nomes\n");
				printf("\t3 - Deletar nomes\n\n");
				printf("\t4 - Sair do sistema!\n\n");
				printf("op��o: "); //fim do menu
		
				scanf("%d", &opcao); //armazenamento a escolha do usu�rio

				system("cls");
	
				switch(opcao)
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
					printf("Obrigado por utilizar o sistema!");
					return 0;
					break;
		
					default:
					printf("Essa op��o n�o est� disponivel!\n");
					system("pause");
					break;
				} //Fim da sele��o
			}
		}
		
		else 
			printf("senha incorreta!\n");
		
	}
					
			

				

