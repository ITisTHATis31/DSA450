#include <iostream>
using namespace std;
void selectionSort(int ar[], int l)
{
    for (int step = 0; step < l; step++)
    {
        int min = step; // JST STORE THE INDEX OF THE ELEMENT IN THE MIN VALUE
        for (int i = step + 1; i < l; i++)
        {
            if (ar[i] < ar[min])
            {
                min = i;
            }
        }
        // SWAP
        int temp = ar[min];
        ar[min] = ar[step];
        ar[step] = temp;
    }
}
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

    selectionSort(arr, len);

    printarray(arr, len);
}
