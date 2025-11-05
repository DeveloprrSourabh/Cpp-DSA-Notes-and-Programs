#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n = 5;
    int currentSum = 0;
    int arr[] = {1, -2, 3, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        currentSum += arr[st];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
            currentSum = 0;
    }
    cout << "max sub array sum is " << maxSum;

    return 0;
}