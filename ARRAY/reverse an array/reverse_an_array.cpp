// 1) Initialize start and end indexes as start = 0, end = n-1

// 2) In a loop, swap arr[start] with arr[end] and change start and end as follows : start = start +1, end = end – 1
#include <bits/stdc++.h>
using namespace std;

void print(int arr[])
{
    int i = 0;
    while (i < 10)
    {
        cout << arr[i] << "--";
        i++;
    }
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    int start = 0;
    int end = 9;
    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // NORMAL METHAOD
    cout << "the reversed array is :" << endl;
    print(arr);

    // USING STL  reverse(0 to n-1) ie (arr,arr+n-1)
    reverse(arr + 0, arr + 10);
    cout << "the reversed using stl array is :" << endl;
    print(arr);
    return 0;
}