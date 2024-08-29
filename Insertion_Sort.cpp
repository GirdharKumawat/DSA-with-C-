#include<iostream>
#include<vector>

using namespace std;

void  insertion_sort(vector<int>&arr)
{
    for(int i = 1;i<arr.size();i++)
    {
        int j = i-1;
        int temp = arr[i];
       while(j>=0)
        {
            if(arr[j]>temp)         
                arr[j+1] = arr[j];
            else
                break;

            j--;
        }

        arr[j+1] = temp;

        
    }

}

int main()
{
    vector<int>arr = {1, 3, 5, 7,15,2,77,12, 9};
    insertion_sort(arr);
    for(int i = 0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
}