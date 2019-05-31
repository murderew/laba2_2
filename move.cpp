#include "move.h"
#include <iostream>

void Increase(int s, int mas[]) {
	int b, j;
	for (int i = 1; i < s; i++) {
		b = mas[i];
		j = i;
		while (j > 0 && mas[j - 1] > b)
		{
			mas[j] = mas[j - 1];
			j = j - 1;
		}
		mas[j] = b;
	}
	void descending(int s, int mas[]) 
	{
		int b, j;
		for (int i = 1; i < s; i++) {
			b = mas[i];
			j = i;
			while (j > 0 && mas[j - 1] < b)
			{
				mas[j] = mas[j - 1];
				j = j - 1;
			}
			mas[j] = b;
		}
	}

	void reverse(int s, int mas[]) {
		int swap;
		for (int i = 0; i < s / 2; i++)
		{
			swap = mas[i];
			mas[i] = mas[s - i - 1];
			mas[s - 1 - i] = swap;
		}

	}

	int sum(int s, int mas[])
	{

		int summa = 0;
		for (int i = 0; i < s; i++)
		{
			summa += mas[i];
		}
		return summa;
	}

	void(*Function(int s, int mas[]))(int, int[])
	{
		void(*minFunction)(int, int[]);
		int summa = sum(s, mas);
		if (summa == mas[0]) minFunction = reverse;
		if (summa > mas[0]) minFunction = descending;
		else minFunction = Increase;
		return minFunction;
	}