#include <stdio.h>
#include <stdlib.h>
#include "query.h"
int query(int a[], int n, int value);
int main()
{
	int* ptr, n, i, value;

	printf("Input the number of array elements:");
	scanf_s("%d", &n);
	if ((ptr = (int*)calloc(n, sizeof(int))) == NULL){
		printf("Not able to callocate memory");
		exit(1);
	}
	printf("Input array element:");
	for (i = 0; i < n; i++) {
		scanf_s("%d", ptr + i);
	}
	printf("value:");
	scanf_s("%d", &value);
	printf("number(value):%d", query(ptr, n, value));
	free(ptr);

	return 0;
}
