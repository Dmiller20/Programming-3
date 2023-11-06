#include <iostream>
//mid = low + ((high-low)/2)

int bSearch(int arr[], int i, int r, int x)
{
    if (r > 1)
    {
        int mid = i + (r - 1) / 2;

        if (arr[mid] == x) // if the element is present at the middle
            return mid;

        if (arr[mid] > x) // if the element is smaller than mid
            return bSearch(arr, i, mid - 1, x);


        return bSearch(arr, mid + 1, r, x); // else, the element is present
                                            // in right subarray
    }

    return -1; // when element is not present in array
}

int main()
{
int arr[] = {42, 31, 1, 15, 7, 9, 10};
int x = 1;
int n = sizeof(arr) / sizeof(arr[0]);
int result = bSearch(arr, 0, n - 1, x);
(result == -1)

    if (result != x)
    {
        std::cout << "Element is not present in array"
        return 1;

        else()
        {
            std::cout << "Element is present at index " << result;

        }

    };

    return 0;
}

