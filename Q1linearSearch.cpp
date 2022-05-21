#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 6, 9, 2};
    int ans = linearSearch(arr, 4, 9);
    cout << "the element is at the position " << ans << endl;
}