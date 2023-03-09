#include <stdio.h>

	void printarray(int array[], int size)

	{

	int i;

	for(i=0;i<size;i++)

	{

	printf("%d ", array[i]);

	}

	printf("\n");

	}

	void insertion_sort(int array[], int size)

	{

	int step;

	for (step = 1; step < size; step++)

	{

	int key = array[step];

	int j = step - 1;

	while (key < array[j] && j >= 0)

	{

	array[j + 1] = array[j];

	--j;

	}

	array[j + 1] = key;

	}

	}

	int main()

	{

	int a[25], i, n;

	printf("\nName : ***Aditya Panditrao*** ");

	printf("\n Enter the number of elements in an array: ");

	scanf("%d", &n);

	printf("\n Enter the elements of array: ");

	for(i = 0; i < n; i++)

	scanf("%d", &a[i]);

	insertion_sort(a, n);

	printf("Sorted array in ascending order:\n");

	printarray(a, n);

	}

