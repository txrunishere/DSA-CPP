#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubble_sort_better(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    bool isSwap = false;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap) // return if array is already sorted
        {
            return;
        }
    }
}

int main()
{
    int n;
    cout << "Define the length of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter values for array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << endl;
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
