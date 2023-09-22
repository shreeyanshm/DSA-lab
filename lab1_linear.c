#include <stdio.h>

int search(int arr[], int N, int x)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
	int N = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, N, x);
	if (result == -1){
		printf("Element is not present in array");
        }
    else{
        printf("Element is present at index %d", result);
    }
    printf("\nShreeyansh Mittal ");
	return 0;
}
