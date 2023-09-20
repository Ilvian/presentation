#include <stdio.h>

int binarySearch(int array[], int size, int target)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (array[mid] == target)
			return mid;
		else if (array[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int size = sizeof(array) / sizeof(array[0]);
	int target = 3;
	int result = binarySearch(array, size, target);
	
	if (result != -1)
		printf("Element found at index %d\n", result);
	else
		printf("Element not found\n");
	return 0;
}

