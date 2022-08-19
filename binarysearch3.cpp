#include<iostream>
#include<vector>
using namespace std;
int getpivot(vector<int>& arr,int n)
{
    int start=0;
    int end=n-1;
   int mid=start+(end-start)/2;
   while(start<end)
   {
       if(arr[mid]>=arr[0])
       {
           start=mid+1;
       }
       else
       {
           end=mid;
       }
       mid=start+(end-start)/2;
   }
   return start;
}
int binarysearch(vector<int>& arr,int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid =start+(end-start)/2;
    while(start<end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>=key)
        {

            end=mid-1;
        }
        else if(arr[mid]<=key)
        {
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
int pivot=getpivot(arr,n);
if(k>=arr[pivot] && k<=arr[n-1])
{
    return binarysearch(arr,pivot,n-1,k);
}
else{
    return binarysearch(arr,0,pivot-1,k);
}

}
