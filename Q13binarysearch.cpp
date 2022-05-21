#include <iostream>
using namespace std;

int search(int arr[], int size, int k)
{

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int ans = search(arr, 8, 4);
    cout << "The element is at the index : " << ans << endl;
    return 0;
}