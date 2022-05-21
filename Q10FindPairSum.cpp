#include <iostream>
using namespace std;

int findPairSum(int arr[], int size, int target)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "The total number of pairs are : " << findPairSum(arr, 7, 7) << endl;
}