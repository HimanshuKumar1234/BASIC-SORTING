#include <iostream>

#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    float kmin = INT_MIN*1.0; // Set to a very large negative number
    float kmax = INT_MAX*1.0;  // Set to a very large positive number

    for (int i = 0; i < n - 1; i++)
    {
        float mid = (arr[i] + arr[i + 1]) / 2.0; // Calculate the midpoint

        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin, ceil(mid));
        }
        else
        {
            kmax = min(kmax, floor(mid));
        }
    }

    if (kmin <= kmax)
    {
        cout << "Range: " << kmin << " to " << kmax << endl;
    }
    else
    {
        cout << "No valid range for k exists." << endl;
    }
}