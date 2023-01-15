#include <iostream>
using namespace std;
//................................................................................................
void merge(int ar[], int l, int mid, int h)
{
    // NOW WE HAVE TO MAKE TWO ARRAYS AND REWRITE THE AR ARRRAY
    int m = mid - l + 1;
    int n = h - mid;

    int a1[m], a2[n];
    for (int i = 0; i < m; i++)
    {
        a1[i] = ar[l + i];
    }
    for (int i = 0; i < n; i++)
    {
        a2[i] = ar[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            ar[k++] = a1[i++];
        }
        else
        {
            ar[k++] = a2[j++];
        }
    }

    while (i < m)
    {
        ar[k] = a1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        ar[k] = a2[j];
        j++;
        k++;
    }
}

void mergeSort(int ar[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(ar, l, mid);
        mergeSort(ar, mid + 1, h);

        merge(ar, l, mid, h);
    }
}

//........................................................................................
void printarray(int ar[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {23, -1, -6, 67, 3, 11, 8, 3};

    // TO FIND LENGTH  OF ARRAY
    int len = sizeof(arr) / sizeof(arr[0]);

    printarray(arr, len);

    mergeSort(arr, 0, len - 1); // MAINTING THROUG OUT BY INDEX

    printarray(arr, len);
}