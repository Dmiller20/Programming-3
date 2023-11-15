#include <iostream>

void merge(int arr[], int left, int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = left;
    int temp[7];

    while(i <= middle && j <= right)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
     else
     {
        temp[k] = arr[j];
        j++;
        k++;
     }
    }

    while(i <= middle)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= right)
    {
        temp[k] = arr[i];
        j++;
        k++;
    }

    for(int p = left; p<= right; p++)
    {
        arr[p] = temp[p];
    }
}


void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int middle = (left + right)/2;

        mergeSort(arr, left, middle);

        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);

    }

}

int main()
{
    int arr[7];
    for(int i = 0; i<7; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Before Merge Sort: " << std::endl;
    for(int i = 0; i<7; i++)
    {
        std::cout << arr[i] << " ";
    }

    mergeSort(arr, 0, 6);

    std::cout << std::endl;
    std::cout << "After Merge Sort: " << std::endl;
    for(int i = 0; i < 7; i++)
    {

        std::cout << arr[i] << " ";

    }


    return 0;
}
