#include <iostream>
using namespace std;

int BinarySearch(int arr[], int target, int beginning, int end)
{
    while (beginning <= end)
    {
        int m = beginning + (end - beginning) / 2;
        if (arr[m] == target)
            return m;
        if (arr[m] < target)
            beginning = m + 1;
        else
            end = m - 1;
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 5, 6, 7, 8, 9, 10, 22};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 22;
    int beginning = 0;
    int end = n - 1;
    int result = BinarySearch(array, target, beginning, end);
    cout << result;
}
