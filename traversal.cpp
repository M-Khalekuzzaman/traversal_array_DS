#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *arr)
{
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[50];
    int size;
    cin>>size;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Given array : ";
    printArray(size,arr);

    return 0;
}
