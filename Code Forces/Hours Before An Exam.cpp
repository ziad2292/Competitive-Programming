#include <iostream>

using namespace std;

int main()
{
    int days, sumTime;
    int minTime[30], maxTime[30], output[30];

    cin >> days;
    cin >> sumTime;

    int totalTimeOutput = 0, totalMax = 0, targetTime = 0;
    for (int i = 0; i < days;i++) {
        cin >> minTime[i];
        cin >> maxTime[i];
        totalMax += maxTime[i];
        targetTime += minTime[i];
        totalTimeOutput += minTime[i];

        output[i] = minTime[i];
    }



    if (sumTime <= totalMax && sumTime >= targetTime) {

        while (totalTimeOutput != sumTime) {
            for (int i = 0; i < days; i++) {
                if (totalTimeOutput == sumTime) {
                    break;
                }
                if (output[i] + 1 <= maxTime[i]) {
                    output[i]++;
                    totalTimeOutput++;
                }
            }
        }

        cout << "YES" << endl;
        for (int i = 0; i < days; i++) {
            cout << output[i] << " ";
        }
    }
    else {
        cout << "NO";
    }
}










    /*if (sumTime <= actualTime && sumTime >= targetTime) {
        cout << "YES" << endl;
        for (int i = 0; i < days; i++) {
            if (maxTime[i] < minTime[i]) {
                cout << 0 << " ";
                continue;
            }
            if (maxTime[i] <= sumTime && sumTime/(days-i+1)>=minTime[i]) {
                cout << maxTime[i] << " ";
                sumTime -= maxTime[i];
            }
            else {
                maxTime[i]--;
                i--;
            }
        }


    }
    else {
        cout << "NO";
    }*/



