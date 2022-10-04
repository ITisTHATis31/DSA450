#include<iostream>
using namespace std;
int maxarr(int arr[],int n){
    int max=-1; //INT_MIN
    for(int i=0;i<n;i++){
        //maxi=max(maxi,a[i])
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minarr(int arr[],int n){
    int min=100000; //INT_MAX
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int a[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){  //even though the size of array is 100 we get input of the array till the size we want
        cin>>a[i];
    } 
    int maxx;
    int minn; 
    maxx=maxarr(a,size);
    cout<<"maximum element of the array"<<maxx<<endl; 
    minn=minarr(a,size);
    cout<<"maximum element of the array"<<minn; 

}