

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size, i;
    cout << "Enter array size: ";
    cin >> size;

    int myArr[size];

    //  input
    for (i = 0; i < size; i++)
    {
        myArr[i] = i * 2;
    }

    // output
    for (i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}