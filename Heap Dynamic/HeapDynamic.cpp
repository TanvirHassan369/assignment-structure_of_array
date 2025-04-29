

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> myArr;

    int size, i;
    cout << "Enter array size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int value;
        cout << "Enter value: ";
        cin >> value;
        myArr.push_back(value);
    }

    cout << "Array elements: ";
    for (int i = 0; i < myArr.size(); i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}