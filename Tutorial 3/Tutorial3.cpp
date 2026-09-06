#include <iostream>
using namespace std;
void read(int arr[], int n)
{
    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort(int arr[], int n)
{
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

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    read(arr, n);

    cout << "Array before sorting: ";
    display(arr, n);

    sort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);

    return 0;
}
