#include <stdio.h>
#include <stdlib.h>

void merge(int* arr, int left, int mid, int right)
{
	int* tmp = NULL;

	tmp = (int*)malloc(sizeof(int) * (right + 1));

	int i = left;
	int j = mid + 1;
	int z = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			tmp[z++] = arr[i++];

		}
		else tmp[z++] = arr[j++];


	}

	if (i > mid)
	{
		for (int l = j; l <= right; l++)
			tmp[z++] = arr[l];
	}

	else
	{
		for (int l = i; l <= mid; l++)
			tmp[z++] = arr[l];

	}

	for (int l = left; l <= right; l++)
	{
		arr[l] = tmp[l];
	}

	free(tmp);
}

void mergesort_me(int* arr, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		mergesort_me(arr, left, mid);
		mergesort_me(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}




int main() {

	int N = 0;

	scanf("%d", &N);
	
	int* arr = NULL;

	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	mergesort_me(arr, 0, N - 1);

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}

	free(arr);
	return 0;

}