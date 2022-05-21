#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int maxOfArray(int arr[], int n)
{

    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(arr[i], ans);
    }
    return ans;
}

int minOfArray(int arr[], int n)
{
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ans = min(arr[i], ans);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 3};
    int max = maxOfArray(arr, 5);
    int min = minOfArray(arr, 5);

    cout << "The max and min int he array are"
         << " Max = " << max << " "
         << "Min = " << min << endl;
}