

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 2;
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
