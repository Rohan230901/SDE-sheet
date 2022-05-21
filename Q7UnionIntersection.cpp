#include <iostream>
using namespace std;

void unionOfArray(int arr1[], int arr2[], int size1, int size2)
{

    int i = 0; // 1st index of arr1
    int j = 0; // 1st index of arr2

    while (i < size1 || j < size2)
    {
        if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
}

void intersectionOfArray(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0;
    int j = 0;
    while (i < size1 || j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    unionOfArray(arr1, arr2, 9, 5);
    intersectionOfArray(arr1, arr2, 9, 5);
}