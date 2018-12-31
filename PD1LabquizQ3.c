#include<stdio.h>
#define SIZE 5

void sortingArray(int a[], int b[], int size) {
	int i, j, k=0;
	
	for(i=0; i<size; i++) {
		b[i] = a[i];
	}
	
	for(i=0; i<size; i++) {
		for(j=i+1; j<size; j++) {
			if(a[i] > a[j]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	printf("Sorted array: ");
	for(i=0; i<SIZE; i++) {
		printf("%d ",a[i]);
	}
	
	for(i=0; i<size; i++) {
		if(b[i] != a[i]) {
			k++;
		}
	}
	printf("\n%d elements have moved\n", k);	
}

int main() {
	
	int a[SIZE] = {1,9,5,7,3};
	int b[SIZE];
	int i;
	
	sortingArray(a, b, SIZE);
	
	return 0;

}
