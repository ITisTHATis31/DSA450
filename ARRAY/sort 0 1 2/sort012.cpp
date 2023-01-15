#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 1, 1, 0, 0, 1, 2, 1};
    int m = 0;
    int mid=0;
    int n=10; // pointer of 1 which is next to 0
    for (int i = 0; i <=10; i++)
    {
        /* code */
        if(mid>n){
            break;
        }
        else if (arr[i] == 0)
        {
            swap(arr[m++],arr[mid++]);
        }
        else if
            (arr[i] == 1)
            {
                mid++;
            }
        else if
            (arr[i] == 2)
            {
                swap(arr[mid++],arr[n--]);
            }
    }
    for (int i = 0; i < 10; i++){cout<<arr[i];}

    return 0;
}