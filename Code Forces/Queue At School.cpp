#include <iostream>

using namespace std;

int main()
{
    int students, time;
    string order;

    cin >> students;
    cin >> time;
    cin >> order;

    for (int i = 0; i < time; i++) {
        for (int j = 1; j < students; j++) {
            if (order[j] == 'G' && order[j - 1] == 'B') {
                swap(order[j], order[j - 1]);
                j++;
            }
        }

    }
    cout << order;

    return 0;
}


