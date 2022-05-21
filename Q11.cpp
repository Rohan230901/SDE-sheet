#include <iostream>
using namespace std;
bool findTriplet(int arr[], int size, int sum)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "The triplets are : " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {12, 3, 4, 1, 6, 9};
    int ans = findTriplet(arr, 6, 24);
    return ans;
}