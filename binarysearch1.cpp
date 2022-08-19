#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key)
{
    int start=0;
    int end =n-1;
    int mid=start +(end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {

            start=mid+1;
        }
        else if(arr[mid]>key)
        {

            end=mid-1;
        }
        mid =start+(end-start)/2;

    }
    return ans;
}
int lastocc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid =start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {

        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int main()
{

    int even[6]={0,3,3,3,3,5};
    cout<<"the first occurence ="<<firstocc(even,6,3)<<endl;
    cout<<"the second occurence ="<<lastocc(even,6,3)<<endl;
    /*int first=firstocc(even,6,3);
    int second=lastocc(even,6,3);
    int total_occurence;
    if(first==-1 && second==-1)
    {
        total_occurence=0;
    }
    else
    {
        total_occurence=(second-first)+1;
    }
    cout<<"the total occurence="<<total_occurence<<endl;
    */
    return 0;
}




