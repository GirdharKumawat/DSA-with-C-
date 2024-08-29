#include<iostream>
#include<vector> 
using namespace std;

vector<int>merge(vector<int>arr1,vector<int>arr2)
    {
        vector<int>result;
        int i = 0,j =0;

        int size1 = arr1.size();
        int size2 = arr2.size();
        while(i<size1&&j<size2)
        {
        if(arr1[i]<arr2[j])
            result.push_back(arr1[i++]);
    
        else
            result.push_back(arr2[j++]);
      
        }
        while(i<size1)
          result.push_back(arr1[i++]);
        while(j<size2)
            result.push_back(arr2[j++]);
            
        return result;
    
    }


void merge_sort(vector<int>&arr)
{
    if(arr.size()<=1)
        return;
    int mid = arr.size()/2;
    vector<int>left;
    vector<int>right;
    for(int i = 0; i<mid; i++)
        left.push_back(arr[i]);
    
    for(int i = mid; i<arr.size(); i++)
        right.push_back(arr[i]);

     merge_sort(left);
     merge_sort(right);
    arr = merge(left, right);
    
}
int main()
{
    vector<int>arr1 = {1, 3, 5, 7,5,2,77,12, 9};
    merge_sort(arr1);
    for(int i = 0; i<arr1.size(); i++)
        cout<<arr1[i]<<" ";
}