#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mp;

    int counter = 0;

    string word;
    cin >> word;

    for (char i : word) {
        if (mp.count(i)) {
            mp[i]++;
        }
        else {
            mp.insert(pair<char, int>(i, 1));
        }
    }


    for (auto it : mp) { 
        if (it.second % 2 == 1) {
            counter++;
        }
    }
    
    if (counter > 1 && counter % 2 == 0) {
        cout << "Second";
    }
    else {
        cout << "First";
    }

}
