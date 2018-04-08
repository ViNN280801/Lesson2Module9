#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Header.h"
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int w;
	printf("������� �������: ");
	scanf("%hu", &w);
	switch (w)
	{
	case 1:
	{
		//1.������ ������������ �����. ������� ������ �� ���� �����, ���� �� ���������� ����� 10. ��������� ����� ������������� ��������� �������.
		int *mas = NULL, length;
		printf("������� ����� �������: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		fillArrayWhile10(mas, length);
		printArray(mas, length);
		SummaOtrizElements(mas, length);
		free(mas);
	}
	break;
	case 2:
	{
		//2.������ � StringGrid ������ �� 10 ����� �����. ������� ��� ����� ������� � �� 
		//������������� � ������������� ��������� ��������� �������. 
		//���������� ����� ��������� ������� �������.
		int *mas = NULL, length = 10;
		mas = (int*)malloc(length * sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		printOnlyNegativ(mas, length);
		printOnlyPositiv(mas, length);
		free(mas);
	}
	break;
	case 3:
	{
		//3.������ ������ �� 9 ������������ �����. ������� ����� ������ �� ��������� ���������, 
		//������� �� ������ ������ 10. ��������� ������� �������������� ��������� ������ �������
		int *mas = NULL, length = 9;
		mas = (int*)malloc(length * sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		printArrayBiggerThan10(mas, length);
		free(mas);
	}
	break;
	case 4:
	{
		//4.������ ������������ �����. ������� ������ �� ������������� �����. 
		//����������, �������� �� ������ ������������� �� �����������.
		int *mas = NULL, length;
		printf("������� ����� �������: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		SearchSortToBigger(mas, length);
		free(mas);
	}
	break;
	case 5:
	{
		//5.������ ����� �����. ������� ������ �� ���� ����� �� ������� �������������� �����.
		//����������, �������� �� ������ ������������� �� ��������.
		int *mas = NULL, length;
		printf("������� ����� �������: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		fillArrayWhileNegativ(mas, length);
		printArray(mas, length);
		SearchSortToLower(mas, length);
		free(mas);
	}
	break;
	case 6:
	{
		//6.������ ������ �� 15 ������������ �����. ������� ����� ������ �� ��������� ���������, � ������� �� �������� ��������, 
		//���������� � ����������(-3, 7). ���������� ������������ ������������� ��������� ������ �������.
		int *mas = NULL, length = 15;
		mas = (int*)malloc(length * sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		printf("\n");
		printArrayOt3d07(mas, length);
		free(mas);
	}
	break;
	case 7:
	{
		//7.������ ����� �����. ������� ������ �� �����, ������� �� ������� �� 5. ���������� ����������� ������� �������.
		int *mas = NULL, length;
		printf("������� ����� �������: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		printf("������, ��������� �� ���������, �� ������� 5: \n");
		fillPrintArrayNOT5(mas, length);
		free(mas);
	}
	break;
	case 8:
	{
		//8.������ ������������ �����. ������� ������ �� ���� �����, ���� ��
		//���������� ����� 33. ���������� ������������ ������� �������.
		int *mas = NULL, length;
		printf("������� ����� �������: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		printf("����� ������, � ������� ��� �������� 33: \n");
		fillArrayWhile33(mas, length);
		MaxElement(mas, length);
		free(mas);
	}
	break;
	case 9:
	{
		//9.������ ������ �� 9 ������������ �����. ������� ����� ������ �� ��������� ���������, 
		//������� �� ������ �� ������ 12. �������� ������� ����������� � ������������ �������� ������ �������.
		int *mas = NULL, length = 9;
		mas = (int*)malloc(length * sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		printf("\n");
		fillArrayLowerThan12(mas, length);
		printf("\n");
		free(mas);
	}
	break;
	case 10:
	{
		//10.������ ������������ �����. ������� ������ �� �����, ������� �������� � ��������[2, 13].
		//����������, ���� �� � ������� �����, ������� 10.
		int *mas = NULL, length = 15;
		mas = (int*)malloc(length * sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		printArray2To13(mas, length);
		free(mas);
	}
	break;
	}
}