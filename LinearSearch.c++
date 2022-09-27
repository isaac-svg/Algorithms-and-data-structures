#include <iostream>
using namespace std;

int Search(int arr[], int size, int target)
{
    int index = 0;
    bool found = false;
    while ((!found) && (index < size))

        if (target == arr[index])
            found = true;

        else

            index++;

    if (found)

        /* code */
        return 1;

    else

        return -1;
}

int main()
{
    int target = 25;
    int Arr[10] = {2, 4, 5, 6, 7, 8};
    int size = 10;
    int result = Search(Arr, size, target);
    cout << result << endl;
    return 0;
}