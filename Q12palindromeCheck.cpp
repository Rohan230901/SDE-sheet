#include <iostream>
using namespace std;

bool checkPalindrome(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1};

    if (checkPalindrome(arr, 7))
    {
        cout << "Array is palindrome" << endl;
    }
    else
    {
        cout << "Array is not a palindrome" << endl;
    }
    return 0;
}