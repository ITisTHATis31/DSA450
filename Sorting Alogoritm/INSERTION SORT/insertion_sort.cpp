#include<iostream>
using namespace std;
void insertionSort(int ar[],int l){
    for(int i=1;i<l;i++){
        int key =ar[i];
        int j=i-1;
        while(key<ar[j]&&j>=0){
            ar[j+1]=ar[j];
            --j;
        }
        ar[j+1]=key;
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

int main(){
        int arr[] = {23, -1, -6, 67, 3, 11, 8, 3};

    // TO FIND LENGTH  OF ARRAY
    int len = sizeof(arr) / sizeof(arr[0]);

    printarray(arr, len);

    insertionSort(arr, len);

    printarray(arr, len);
}