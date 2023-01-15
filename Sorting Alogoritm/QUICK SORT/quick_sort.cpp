#include<iostream>
using namespace std;
int partition(int ar[],int l,int pi){
    int i=-1,j=0;
    
    while(j<=pi){
    if(ar[j]<=ar[pi]){
        //swap between j and i
        int temp=ar[i+1];
        ar[i+1]=ar[j];
        ar[j]=temp;
        j++;
        i++;

    }else{j++;}
    }
    int temp = ar[pi];
    ar[pi] = ar[i + 1];
    ar[i + 1] = temp;
    return i;
}

void quickSort(int ar[],int l,int h){
    if(l<h){
        int pi=partition(ar,l,h);
        quickSort(ar,l,pi-1);
        quickSort(ar,pi+1,h);
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

    quickSort(arr, 0, len - 1); // MAINTING THROUG OUT BY INDEX

    printarray(arr, len);
    return 0;
}
