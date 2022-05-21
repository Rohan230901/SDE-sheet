#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
int main()
{
    int arr[] = {2, 1, 4, 3, 6, 5};
    swapAlternate(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}