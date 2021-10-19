#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 15

void print_arr(int arr[], int len);
void bubble_sort(int arr[], int size);

int main() {
	int size;
	int arr[MAX_SIZE];
	setlocale(LC_ALL, "Rus");
	printf("������� ������ �������(���� %d): ", MAX_SIZE);
	scanf("%d", &size);
	
	while (1) {
		if (size > 0 && size <= MAX_SIZE) break;
		if (size <= 0) {
			printf("������ ������ ���� �������������!\n������� ������ ������: ");
			scanf("%d", &size);
		}
		if (size > MAX_SIZE) {
			printf("������������ ������ %d!\n������� ������ ������: ", MAX_SIZE);
			scanf("%d", &size);
		}
	}

	for (int i = 0; i < size; i++) {
		printf("������� %d� �������: ", i + 1);
		scanf("%d", &arr[i]);
	}

	bubble_sort(arr, size);
	return 0;
}

void print_arr(int arr[], int len) { for (int i = 0; i < len; printf("%d ", arr[i++])); }

void bubble_sort(int arr[], int len) {
	int tmp;
	int end = len;
	while(end > 0){
		int swap = 0;
		for (int i = 1; i < end; i++) {
			if (arr[i] < arr[i - 1]) {
				swap = 1;
				tmp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = tmp;
				//printf("\n��������");
			}
		}
		if (!swap) end = 0;
		end--;
	}
	printf("\n\n��������������� ������ = ");
	print_arr(arr, len);
	printf("\n");
}