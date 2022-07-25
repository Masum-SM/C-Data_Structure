#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    char c;
    cout << "Do you want to search : (Y/N)";
    cin >> c;

    while (toupper(c) == 'Y')
    {
        int searching_value;
        cout << "Please enter the value you want to search : ";
        cin >> searching_value;
        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == searching_value)
            {
                flag = 1;
                cout << "Index no : " << i << " Position : " << i + 1 << endl;
            }
        }

        if (flag == 0)
        {
            cout << "NOT FOUND" <<endl;
        }

        cout << "Do you want to continue search : (Y/N)";
        cin >> c;
    }

    return 0;
}