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
	printf("Введите задание: ");
	scanf("%hu", &w);
	switch (w)
	{
	case 1:
	{
		//1.Ввести вещественные числа. Создать массив из этих чисел, пока не встретится число 10. Вычислить сумму отрицательных элементов массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
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
		//2.Ввести в StringGrid массив из 10 целых чисел. Создать два новых массива – из 
		//положительных и отрицательных элементов исходного массива. 
		//Определить суммы элементов каждого массива.
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
		//3.Ввести массив из 9 вещественных чисел. Создать новый массив из элементов исходного, 
		//которые по модулю больше 10. Вычислить среднее арифметическое элементов нового массива
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
		//4.Ввести вещественные числа. Создать массив из положительных чисел. 
		//Определить, является ли массив упорядоченным по возрастанию.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
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
		//5.Ввести целые числа. Создать массив из этих чисел до первого отрицательного числа.
		//Определить, является ли массив упорядоченным по убыванию.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
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
		//6.Ввести массив из 15 вещественных чисел. Создать новый массив из элементов исходного, в который не включать элементы, 
		//попадающие в промежуток(-3, 7). Определить произведение отрицательных элементов нового массива.
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
		//7.Ввести целые числа. Создать массив из чисел, которые не делятся на 5. Определить минимальный элемент массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		printf("Массив, созданный из элементов, не кратных 5: \n");
		fillPrintArrayNOT5(mas, length);
		free(mas);
	}
	break;
	case 8:
	{
		//8.Ввести вещественные числа. Создать массив из этих чисел, пока не
		//встретится число 33. Определить максимальный элемент массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)malloc(length * sizeof(int));
		printf("Новый массив, в котором нет элемента 33: \n");
		fillArrayWhile33(mas, length);
		MaxElement(mas, length);
		free(mas);
	}
	break;
	case 9:
	{
		//9.Ввести массив из 9 вещественных чисел. Создать новый массив из элементов исходного, 
		//которые по модулю не больше 12. Поменять местами минимальный и максимальный элементы нового массива.
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
		//10.Ввести вещественные числа. Создать массив из чисел, которые попадают в интервал[2, 13].
		//Определить, есть ли в массиве числа, большие 10.
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