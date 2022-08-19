#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(mid<=key)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}
int main()
{

    int even[7]={2,4,6,8,12,16,18};
    int index=binarysearch(even,7,16);
    cout<<"the binarysearch of 16:"<<index<<endl;
    int odd[6]={3,7,9,11,13,17};
    int oddindex=binarysearch(odd,6,13);
    cout<<"the binary search of 13:"<<oddindex<<endl;
    return 0;
}
