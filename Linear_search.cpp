#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int>&arr,int n,int key)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr1 = {1, 3, 5, 7,5,2,77,12, 9};
    int key = 12;
    int n = arr1.size();
    int result = linear_search(arr1, n, key);
    result==-1?cout<<"Element not found":cout<<"Element found at index "<<result;
    
}