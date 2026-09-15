#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {3, 5, 7, 1, 2};
    for (int i = n - 1; i > 0; i--)
    {

        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}