#include <iostream>
#include <vector>

using namespace std;



int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int numOfCriminals, crimeLevel, transferedCriminals;
	cin >> numOfCriminals >> crimeLevel >> transferedCriminals;


	vector<int> v;
	int temp, count = 0, total = 0;
	for (int i = 0; i < numOfCriminals; i++) {
		cin >> temp;
		v.push_back(temp);

		if (temp > crimeLevel) {
			count = 0;
		}
		else {
			count++;
			if (count >= transferedCriminals) {
				total++;
			}
		}

	}

	cout << total;








	return 0;
}
