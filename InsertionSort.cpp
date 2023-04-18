#include<stdio.h>
void Insertion_sort(int a[], int n) {
	int index, new_number;
	for (int i = 1; i < n; i++){
		index = i;
		new_number = a[i];
		while (index > 0 && a[index - 1] > new_number){
			a[index] = a[index - 1];
			index--;
		}
		a[index] = new_number;
	}
}

int main()
{
	int a[6] = {41,23,4,14,56,1};
	Insertion_sort(a, 6);
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<6;i++){
		printf("%d\t",a[i]);
	}
}
