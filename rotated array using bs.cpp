#include<iostream>
using namespace std;
int rotated_array(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int nxt=(mid+1)%n;
    int prv=(mid-1)%n;
    while(start<=end)
    {
        if(arr[start]<=arr[end])
        {
            return start;
        }
        if(arr[mid]<=arr[nxt]&&arr[mid]<=prv)
        {
            return mid;
        }
        else if(arr[mid]<=arr[end])
        {

            end=mid-1;
        }
        else if(arr[mid]>=arr[start])
        {
            start=mid+1;
        }
    }
    return -1;

}
int main()
{
    int arr[]={8,9,10,2,5,6};//here it is rotated by 3 time as least value at index 3 such that it rotated three times
    int n=sizeof(arr)/sizeof(arr[0]);//1st rotation is [9,10,2,5,6],2nd rotation is[10,2,5,6,8,9],3rd is [2,5,6,8,9,10]
    int count=rotated_array(arr,n);
    cout<<count<<endl;
    return 0;
}
