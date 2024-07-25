#include <iostream>

using namespace std;

int main()
{

	int sets, carry;
	cin >> sets;
	cin >> carry;

	int arr[100];

	for (int i = 0; i < sets; i++) {
		cin >> arr[i];
	}

	for (int i = 1, j; i < sets; i++) {
		int temp = arr[i];
		for (j = i; j > 0 && temp < arr[j - 1]; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}

	int total = 0;
	for (int i = 0; i < carry && arr[i] <= 0;i++) {
		total += arr[i] * (-1);
	}
	cout << total;
}
