#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[]={32,12,45,6,4,84,54,11,49,36,5};
    sort(ar,ar+10);
    int k;
    cout<<"enter the k value ;";
    cin>>k;
    cout<<"kth samllest elem"<<ar[k-1];
    return 0;
}