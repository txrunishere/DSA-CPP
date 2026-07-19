#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
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

    insertion_sort(arr, n);

    cout << endl;
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
