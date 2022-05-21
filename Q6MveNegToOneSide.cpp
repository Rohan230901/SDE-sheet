#include <iostream>
using namespace std;

void rearrange(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s < size && e > s)
    {
        if (arr[s] >= 0 && arr[e] < 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        else if (arr[s] < 0 && arr[e] >= 0)
        {
            e--;
            s++;
        }
        else if (arr[s] < 0 && arr[e] < 0)
        {
            s++;
        }
        else if (arr[s] >= 0 && arr[e] >= 0)
        {
            e--;
        }
    }
}

int main()
{
    int arr[] = {1, 3, -2, 4, -5, 6};
    rearrange(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}