#include<iostream>
#include<vector>

using namespace std;

void Selection_Sort(vector<int>&arr)
{
    int n = arr.size();
    for(int i =0 ; i<n-1;i++)
    {
        int index = i;
        for(int j =i+1;j<n;j++)
        {
            if(arr[index] > arr[j])
                index = j;
        }
        
        if(index!=i+1)
            swap(arr[i],arr[index]);


    }
}

int  main(){
    vector<int>arr = {1, 3, 5, 7,15,2,77,12, 9};
    Selection_Sort(arr);
    for(int i = 0; i<arr.size(); i++)
        cout<<arr[i]<<" ";

    return 0;
}