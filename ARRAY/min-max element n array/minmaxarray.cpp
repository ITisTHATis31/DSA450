#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={12,3,21,94,15,66,84,51,32,4};
    //USING STL  min_element(arr,arr+n)......it will point an int* pointer

    int *x=min_element(arr,arr+10);
    int *y=max_element(arr,arr+10);
    cout<<"minimum:"<<*x<<endl;
    cout<<"maximum:"<<*y<<endl;
    int min=arr[0];

    for (int i = 1; i < 10; i++)
    {
        /* code */
        if(arr[i]<min){
            min=arr[i];
        };
    }
    cout<<"normal min"<<min;
    
    return 0;
}