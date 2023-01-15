#include <iostream>
using namespace std;

void bubbleSort(int ar[], int l)
{
    // TOTAL STEP OF ITERATION = LENGTH OF THE ARRAY
    int swapped = 0;
    for (int i = 0; i < l; i++)
    { // STEP LOOP TO ACCES EACH ARRAY ELEMENT
        for (int j = 0; j < l; j++)
        { // REAL SWAPPING BUBBLE SORT
            if (ar[j] > ar[j + 1])
            {
                // SWAPING
                int temp = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = temp;

                swapped = 1;
            }

            if (swapped == 0)
            {
                break;
            }
        }
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

    bubbleSort(arr, len);

    printarray(arr, len);
}

// NOTE
//  IF AN ARRAY IS SORTED IN MID OF ITERATION ITSELF THEN "SWAPPED " VARIABLE IS USED
// TO BERAK ITERATION WHEN ITS SORTED ....TO SAVE EXECUTION TIME
// OPTIMISED BUBBLE SORT.