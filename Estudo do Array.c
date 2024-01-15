#include <stdio.h>
#include <stdlib.h>

//ESTUDO DO ARRAY

int main()
{
	
	system("Color A");
	
	float nota1 = 4;
	float nota2 = 6;
	float nota3 = 8;
	float nota4 = 9;
	
	//mostrando a variável da nota 3 sem Array
	printf("Sem Array\n");
	printf("\nNota 3: %.1f\n", nota3);
	
	//a linha abaixo cria um Array de tamanho 4
	printf("\n--------------------------\n");
	float notas[4] = {4,6,8,9};
	printf("Com Array\n");
	printf("\nNota 3: %.1f\n", notas[2]);
	
	//a linha abaixo modifica o conteúdo do Array
	printf("\n--------------------------\n");
	notas[2] = 2*2;
	printf("Array MODIFICADO\n\n");
	printf("Nota3: %.1f\n", notas[2]);
	//a linha abaixo cria um Array de duas dimensões, conforme boletim do aluno
	printf("\n--------------------------\n");
	float boletim[2][4] = {{2,4,5,8},{1,7,5,9}};
	//recuperando a nota de português do segundo bimestre
	printf("Array Multidimensional\n\n");
	printf("Nota: %.1f\n\n", boletim[1][0]);
	system("pause");
	
	return 0;
}
