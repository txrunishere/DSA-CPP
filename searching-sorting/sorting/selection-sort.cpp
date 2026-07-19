#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
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

    selection_sort(arr, n);

    cout << endl;
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
