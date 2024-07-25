#include <iostream>
#include <vector>

using namespace std;

bool arraySortedOrNot(int a[], int n)
{
	return a[n - 1] >= a[n - 2] &&
		arraySortedOrNot(a, n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int size;
	cin >> size;

	vector<int> v;

	bool sorted = true;
	int first = 0, second = 0;
	for (int i = 0; i < size; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		if (i > 0 && v[i] < v[i - 1] && first == 0) {
			sorted = false;
			first = i;
		}
	}
	if (sorted) {
		cout << "yes" << endl;
		cout << "1 1";
		return 0;
	}

	for (int i = first; i < size; i++) {
		if (v[i] > v[i - 1]) {
			second = i;
			break;
		}
	}
	if (second == 0) { second = size; }

	for (int i = first - 1; i < second - 2; i++) {
		if (v[i] < v[i + 1]) {
			cout << "no";
			return 0;
		}
	}



	for (int i = 0; i < first - 2;i++) {
		if (v[i] > v[i + 1]) {
			cout << "no";
			return 0;
		}
	}
	for (int i = second; i < size - 1;i++) {
		if (v[i] > v[i + 1]) {
			cout << "no";
			return 0;
		}
	}
	if (first > 1) {
		if (v[first - 2] > v[second - 1]) {
			cout << "no";
			return 0;
		}
	}
	if (second < size) {
		if (v[first - 1] > v[second]) {
			cout << "no";
			return 0;
		}
	}

	cout << "yes" << endl;
	cout << first << " " << second;







	return 0;
}
