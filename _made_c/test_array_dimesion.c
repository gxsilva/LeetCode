#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int arr_elem)
{
	int		i = 0;
	while(arr && i++ < arr_elem)
	{
		printf("[%d]: %d\n", arr_elem, *arr);
		arr++;
	}
}
int main(void)
{
	int	arr_elem = 40;
	int *arr = malloc(sizeof(int) * arr_elem);
	int arr2[] = {10 ,20 ,30 ,40 ,50 ,60};
	for(int i = 0; i < 10; i++)
		arr[i] = i * 10;
	printArray(arr, arr_elem);
	int	size = sizeof(arr) / sizeof(arr[0]);
	printf("array: %ld\n", sizeof(arr));
	printf("size of array: %d\n", size);

	// void *newpst = &arr2 + sizeof(arr2[0]);
	// arr2 + sizeof(arr2[0])
	printf("\nsize of differente type array: %d\n", *((&(arr2[0]))+ 1));
	return (0);
}