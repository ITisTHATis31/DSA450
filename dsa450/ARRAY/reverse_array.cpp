#include<iostream>
using namespace std;

void rev_arr(int arr[],int n){
    int start=0;
    int end=n-1;
    int temp;
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int ar[10]={-1,5,9,14,18,31,-7,4,13,2};
    int br[10]={21,18,65,19,3,9,-7,-5,9,45};
    cout<<"array BEFORE reversing"<<endl;
    printarr(ar,10);
    cout<<endl;
    printarr(br,10);
    cout<<endl;
    rev_arr(ar,10);
    rev_arr(br,10);
    //printarr(ar,10);
    cout<<"array AFTER reversing"<<endl;
        printarr(ar,10);
    cout<<endl;
    printarr(br,10);
    cout<<endl;
    return 0;
}