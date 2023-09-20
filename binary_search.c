#include <stdio.h>

int binarySearch(int array[], int left, int right, int target)
{
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
	int result = binarySearch(array, 0, size - 1, target);
	
	if (result != -1)
		printf("Element found at index %d\n", result);
	else
		printf("Element not found\n");
	return 0;
}

