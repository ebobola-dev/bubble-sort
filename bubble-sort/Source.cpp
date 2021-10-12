#include <stdio.h>

#define SIZE 15

void print_arr(int arr[], int len);
void bubble_sort(int arr[], int size);

int main() {
	int arr[SIZE] = {
		771, 423, 68,
		96, -311, 382,
		-89, 393, 810,
		313, 263, -755,
		573, -249, 10
	};

	bubble_sort(arr, SIZE);
	return 0;
}

void print_arr(int arr[], int len) {
	for (int i = 0; i < len; printf("%d ", arr[i++]));
}

void bubble_sort(int arr[], int len) {
	int tmp;
	int end = len;
	printf("Original array  = ");
	print_arr(arr, len);
	while(end > 0){
		for (int i = 1; i < end; i++) {
			if (arr[i] < arr[i - 1]) {
				tmp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = tmp;
			}
		}
		end--;
	}
	printf("\nSorted array = ");
	print_arr(arr, len);
	printf("\n");
}