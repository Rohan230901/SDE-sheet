#include <iostream>
#include <algorithm>
using namespace std;

// Approach no 1
int findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {

                return arr[i];
            }
        }
    }
    return -1;
}

// Approach number 2

// int duplicateInArr(int arr[], int size)
// {
//     int ans;
//     int sum1 = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum1 = sum1 + arr[i];
//     }

//     int sum2 = (size * (size - 1)) / 2;

//     ans = sum1 - sum2;
//     return ans;
// }

// Approach 3
int find(int arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 8, 4};

    // int ans = findDuplicate(arr, 7);
    // int ans = duplicateInArr(arr, 7);
    int ans = find(arr, 7);
    cout << "The duplicate element in the array is : " << ans;
    return 0;
}