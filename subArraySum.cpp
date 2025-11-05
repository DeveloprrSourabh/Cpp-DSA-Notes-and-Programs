#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n; end++)
        {

            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << "max sub array sum is " << maxSum;

    return 0;
}