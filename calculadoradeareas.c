#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// Definir uma estrutura para armazenar os dados dos clientes
typedef struct
{
	float trapezio;
	float circulo;
	float triangulo;
	float retangulo;
	float *pi;
} Formas;

// Função para posicionar o cursor em um determinado ponto da tela
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = (short)x;
	coord.Y = (short)y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função para construir a tela padrão
void tela()
{
	int lin;
	int col;

	system("cls");

	for (lin = 1; lin < 25; lin++)
	{
		gotoxy(1, lin);
		printf("|");
		gotoxy(79, lin);
		printf("|");
	}

	for (col = 1; col < 80; col++)
	{
		gotoxy(col, 1);
		printf("-");
		gotoxy(col, 4);
		printf("-");
		gotoxy(col, 22);
		printf("-");
		gotoxy(col, 24);
		printf("-");
	}

	gotoxy(1, 1);
	printf("+");
	gotoxy(79, 1);
	printf("+");

	gotoxy(1, 4);
	printf("+");
	gotoxy(79, 4);
	printf("+");

	gotoxy(1, 22);
	printf("+");
	gotoxy(79, 22);
	printf("+");

	gotoxy(3, 2);
	printf("UNICV");
	gotoxy(60, 2);
	printf("ESTRUTURA DE DADOS | ");
	gotoxy(3, 3);
	printf("SISTEMA DE CALCULO DE AREAS");
	gotoxy(62, 3);
	printf("Matheus Moreira  | ");
	gotoxy(2, 23);
	printf("MSG");
}

// Programa principal
int main()
{
	int opcao;
	float raio;
	float *pi = 3;
	float altura;
	float lado;
	float base_maior;
	float base_menor;
	float base;

	system("color 4");

	do
	{
		tela();

		gotoxy(25, 10);
		printf("1 - Calculo da area do circulo");
		gotoxy(25, 12);
		printf("2 - Calculo da area do retangulo");
		gotoxy(25, 14);
		printf("3 - Calculo da area do trapezio");
		gotoxy(25, 16);
		printf("4 - Calculo da area do triangulo");
		gotoxy(25, 18);
		printf("5 - Sair");

		gotoxy(2, 23);
		printf("Digite sua opcao:");
		scanf("%d", &opcao);
		gotoxy(2, 23);
		printf("                        ");

		switch (opcao)
		{
		case 1: // Opção de calculo do circulo
			do
			{
				tela();
				gotoxy(7, 23);
				printf("Calculando...");

				// Limpa a mensagem de calculo
				gotoxy(2, 23);
				printf("                        ");

				// Mostra os dados a serem lidos na tela
				gotoxy(28, 10);
				printf("Digite o Raio...: ");
				gotoxy(28, 12);
				printf("A formula e.....: ");
				gotoxy(28, 14);
				printf("E o Resultado...: ");

				// leitura do raio
				gotoxy(46, 10);
				printf("     ");
				gotoxy(46, 10);
				scanf("%f", &raio);

				// leitura da formula
				gotoxy(46, 12);
				printf("Area = pi * raio*2 ");

				// leitura do resultado
				gotoxy(46, 14);
				printf("6  ");

				gotoxy(7, 23);
				printf("1 = Calcular outro | 2 = Voltar ao menu ");
				scanf("%d", &opcao);
			} while (opcao == 1);
			break;

		case 2: // Opção de Calculo do retangulo
			do
			{
				tela();
				gotoxy(7, 23);
				printf("Calculando...");

				// Limpa a mensagem de calculo
				gotoxy(2, 23);
				printf("                        ");

				// Mostra os dados a serem lidos na tela
				gotoxy(28, 10);
				printf("Digite o Lado.....: ");
				gotoxy(28, 12);
				printf("Digite a Altura...: ");
				gotoxy(28, 14);
				printf("A Formula e.......: ");
				gotoxy(28, 16);
				printf("E o Resultado.....: ");

				// leitura do lado
				gotoxy(48, 10);
				printf("     ");
				gotoxy(48, 10);
				scanf("%f", &lado);

				// leitura da altura
				gotoxy(48, 12);
				printf("		 ");
				gotoxy(48, 12);
				scanf("%f", &altura);

				// leitura da formula
				gotoxy(48, 14);
				printf("Area = Lado * Altura ");

				// leitura do resultado
				gotoxy(48, 16);
				printf("9 ");

				gotoxy(7, 23);
				printf("1 = Calcular outro | 2 = Voltar ao menu ");
				scanf("%d", &opcao);
			} while (opcao == 1);
			break;

		case 3: // Opção de Calculo do trapezio
			tela();
			gotoxy(7, 23);
			printf("Calculando...");

			// Limpa a mensagem de calculo
			gotoxy(2, 23);
			printf("                        ");

			// Mostra os dados a serem lidos na tela
			gotoxy(28, 10);
			printf("Digite a Base maior...: ");
			gotoxy(28, 12);
			printf("Digite a Basse menor..: ");
			gotoxy(28, 14);
			printf("Digite a Altura.......: ");
			gotoxy(28, 16);
			printf("A formula e...........: ");
			gotoxy(28, 18);
			printf("E o Resultado.........: ");

			// leitura da base maior
			gotoxy(52, 10);
			printf("     ");
			gotoxy(52, 10);
			scanf("%f", &base_maior);

			// leitura da base menor
			gotoxy(52, 12);
			printf("		 ");
			gotoxy(52, 12);
			scanf("%f", &base_menor);

			// leitura da altura

			gotoxy(52, 14);
			printf("		 ");
			gotoxy(52, 14);
			scanf("%f", &altura);

			// leitura da formula
			gotoxy(52, 16);
			printf("Area = Lado * Altura ");

			// leitura do resultado
			gotoxy(52, 18);
			printf("10 ");

			gotoxy(7, 23);
			printf("1 = Calcular outro | 2 = Voltar ao menu ");
			scanf("%d", &opcao);
			break;

		case 4: // Opção de Calculo do triangulo
			tela();
			gotoxy(7, 23);
			printf("Calculando...");

			// Limpa a mensagem de calculo
			gotoxy(2, 23);
			printf("                        ");

			// Mostra os dados a serem lidos na tela
			gotoxy(28, 10);
			printf("Digite a Base.....: ");
			gotoxy(28, 12);
			printf("Digite a Altura...: ");
			gotoxy(28, 14);
			printf("A formula e.......: ");
			gotoxy(28, 16);
			printf("E o Resultado.....: ");

			// leitura da bse
			gotoxy(48, 10);
			printf("     ");
			gotoxy(48, 10);
			scanf("%f", &base);

			// leitura da altura
			gotoxy(48, 12);
			printf("     ");
			gotoxy(48, 12);
			scanf("%f", &altura);

			// leitura da formula
			gotoxy(48, 14);
			printf("Area = (Base * Altura) / 2");

			// leitura do resultado
			gotoxy(48, 16);
			printf("52  ");

			gotoxy(7, 23);
			printf("1 = Calcular outro | 2 = Voltar ao menu ");
			scanf("%d", &opcao);
			break;

		case 5: // Sair do programa
			gotoxy(7, 23);
			printf("Saindo do programa...");
			getch();
			break;

		default: // Caso o usuário digite uma opção inválida
			gotoxy(7, 23);
			printf("Opcao Invalida. Tente Novamente.");
			getch();
			break;
		}
	} while (opcao != 5);

	return 0;
}