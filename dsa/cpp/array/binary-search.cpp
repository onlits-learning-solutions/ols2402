#include <iostream>
using namespace std;
int main(void)
{
    int arr[] = {2, 15, 26, 32, 47, 59, 64, 77, 85, 91};
    int key, low = 0, high = (sizeof(arr) / sizeof(int)) - 1, mid, i = 0;
    cout << "Enter the value of search: ";
    cin >> key;
    while (low <= high)
    {
        i++;
        mid = (low + high) / 2;
        cout << low << endl;
        if (key == arr[mid])
        {
            cout << key << " found at index " << mid << endl;
            cout << i << " attempt(s)" << endl;
            return 0;
        }

        if (key < mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << key << " not found!" << endl;
    return 0;
}