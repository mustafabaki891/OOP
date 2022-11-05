#include <iostream>
using namespace std;

void sirala(int array[], int n) {
	int min;
	for (int i = 0; i <n; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (array[j] < array[min]) {
				min = j;
			}
		}

		int temp = array[min];
		array[min] = array[i];
		array[i] = temp;
	}
}

int main()
{
	int dizi[] = { 27,32,78,78,8,89,32,78,67,78 };
	int boyut = sizeof(dizi) / sizeof(int);
	sirala(dizi, boyut);
	for (int i = 0; i < boyut; i++) 
		cout << dizi[i] << "\t";
	return 0;
}