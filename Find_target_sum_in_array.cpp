#include <bits/stdc++.h>
#include <set>
using namespace std;

bool findSum(int *arr, int n, int t) // time complexity O(n^2);
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                return true;
            }
        }
    }
    return false;
}

bool findSum1(int *arr, int n, int t) // time complexity O(n);
{
    unordered_set<int> seen;
    for (int i = 0; i < n; i++)
    {
        if (seen.count(t - arr[i]))
        {
            return true;
        }
        seen.insert(arr[i]);
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target element: ";
    cin >> target;

    if (findSum(arr, n, target))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    delete[] arr;
    return 0;
}