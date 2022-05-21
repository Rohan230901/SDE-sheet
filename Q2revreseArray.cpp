#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}