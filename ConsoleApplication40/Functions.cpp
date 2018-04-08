#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void fillArrayWhile10(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
	{
		*(mas + i) = -50 + rand() % 100;
		if (*(mas + i) == 10)
		{
			printf("Встретилось число 10.\n");
			break;
		}
	}
}
void printArray(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
		printf("%d\t", *(mas + i));
	printf("\n");
}
void SummaOtrizElements(int *mas, int length)
{
	int sum = 0;
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) < 0)
		{
			sum += *(mas + i);
		}
	}
	printf("Сумма огтрицательных элементов составляет %d.\n", sum);
}
void printOnlyPositiv(int *mas, int length)
{
	int sum = 0;
	printf("Новый массив, составленный только из положительных элементов: \n");
	for (short int i = 0; i < length; i++)
		if (*(mas + i) >= 0)
		{
			printf("%d\t", *(mas + i));
			sum += *(mas + i);
		}
	printf("\n");
	printf("Сумма положительный элементов = %d.\n", sum);
	printf("\n");
}
void printOnlyNegativ(int *mas, int length)
{
	int sum = 0;
	printf("Новый массив, составленный только из отрицательных элементов: \n");
	for (short int i = 0; i < length; i++)
		if (*(mas + i) < 0)
		{
			printf("%d\t", *(mas + i));
			sum += *(mas + i);
		}
	printf("\n");
	printf("Сумма отрицательных элементов = %d.\n", sum);
	printf("\n");
}
void fillArray(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
		*(mas + i) = -50 + rand() % 100;
}
void printArrayBiggerThan10(int *mas, int length)
{
	printf("Элементы, которые по модулю больше 10: \n");
	for (short int i = 0; i < length; i++)
		if (abs(*(mas + i)) > 10)
			printf("%d\t", *(mas + i));
}
void SearchSortToBigger(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
		if (*(mas + i) < *(mas + i + 1))
			printf("Массив идёт по возрастающей.\n");
		else
			printf("Массив не идёт по возрастающей.\n");
}
void fillArrayWhileNegativ(int *mas, int length)
{
	printf("Массив, созданный до первого отрицательного элемента.\n");
	for (short int i = 0; i < length; i++)
		*(mas + i) = -50 + rand() % 100;
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) < 0)
		{
			printf("%d\t", *(mas + i));
			printf("\n");
			system("pause");
			break;
		}
	}
}
void printArrayOt3d07(int *mas, int length)
{
	int proizv = 1;
	printf("Новый массив, созданный из элементов без учета элементов с индексами от 3 до 7: \n");
	for (short int i = 0; i < length; i++)
	{
		if (i < 3 || i > 7)
		{
			printf("%d\t", *(mas + i));
			if (*(mas + i) < 0)
				proizv *= *(mas + i);
		}
	}
	printf("Произведение отрицательных элементов = %d.\n", proizv);
	printf("Больших чисел не бойтесь, всё правильно XD, я пересчитывал.\n");
}
void fillPrintArrayNOT5(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
	{
		*(mas + i) = -15 + rand() % 20;
		if (*(mas + i) % 5 != 0)
		{
			printf("%d\t", *(mas + i));
		}
	}
	printf("\n");
}
void fillArrayWhile33(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
	{
		*(mas + i) = -33 + rand() % 33;
		if (*(mas + i) != 33)
		{
			printf("%d\t", *(mas + i));
		}
	}
	printf("\n");
}
void SearchSortToLower(int *mas, int length)
{
	for (short int i = 0; i < length; i++)
		if (*(mas + i) > *(mas + i + 1))
			printf("Массив идёт по убывающей.\n");
		else
			printf("Массив идёт по возрастающей.\n");
}
void MaxElement(int *mas, int length)
{
	int max = *mas;
	for (short int i = 0; i < length; i++)
		if (max < *(mas + i))
			max = *(mas + i);
	printf("Максимальный элемент = %d.\n", max);
}
void fillArrayLowerThan12(int *mas, int length)
{
	printf("Элементы, которые по модулю меньше 12: \n");
	for (short int i = 0; i < length; i++)
		if (abs(*(mas + i)) < 12)
		{
			printf("%d\t", *(mas + i));
		}
	int max = *mas, min = 1000, temp;
	for (short int i = 0; i < length; i++)
	{
		if (min > *(mas + i))
			min = *(mas + i);
	}
	printf("Минимальный элемент = %d.\n", min);
	for (short int i = 0; i < length; i++)
		if (max < *(mas + i))
			max = *(mas + i);
	printf("Максимальный элемент = %d.\n", max);
	printf("Замена минимального и максимального элеметнов в массиве: \n");
	temp = max;
	max = min;
	printf("Max = %d & min = %d.\n", min, temp);
}
void SwitchMaxANDmin(int *mas, int length)
{
	int max = *mas, min = 1000, temp;
	for (short int i = 0; i < length; i++)
	{
		if (min > *(mas + i))
			min = *(mas + i);
	}
	printf("Минимальный элемент = %d.\n", min);
	for (short int i = 0; i < length; i++)
		if (max < *(mas + i))
			max = *(mas + i);
	printf("Максимальный элемент = %d.\n", max);
	printf("Замена минимального и максимального элеметнов в массиве: \n");
	temp = max;
	max = min;
	printf("Max = %d & min = %d.\n", min, temp);
}
void printArray2To13(int *mas, int length)
{
	int count = 0;
	printf("Новый массив, созданный из элементов с учетом элементов с индексами от 2 до 13: \n");
	for (short int i = 0; i < length; i++)
	{
		if (i > 2 && i < 13)
		{
			printf("%d\t", *(mas + i));
			if (*(mas + i) > 10)
				count++;
		}
	}
	printf("\n");
	printf("Количество элементов, больших 10 = %d.\n", count);
}