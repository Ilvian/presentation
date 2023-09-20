#include <stdio.h>

int linearSearch(int array[], int size, int target)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == target)
			return i;
	}
	return -1;
}

int main()
{
	int array[] = {6, 2, 31, 15, 58};
	int size = sizeof(array) / sizeof(array[0]);
	int target = 58;
	int result = linearSearch(array, size, target);
	
	if (result != -1)
		printf("Element found at index %d\n", result);
	else
		printf("Element not found\n");
	return 0;
}
