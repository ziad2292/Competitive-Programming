#include <iostream>

using namespace std;

int main()
{
    int x, remaining, total = 0, increment = 1;
    cin >> x;
    remaining = x - 2;

    if (x == 1) {
        cout << x;
    }
    else {
        total = x + 1;
        while (remaining > 0) {


            increment++;

            total += remaining * increment;
            remaining -= 1;
            total++;
        }
        cout << total;
    }



}
