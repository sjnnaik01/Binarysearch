#include<iostream>
using namespace std;
int mountain(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
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

int main()
{
int even[6]={0,2,10,4,3,0};
cout<<"the mountain value="<<mountain(even,6)<<endl;
return 0;
}
