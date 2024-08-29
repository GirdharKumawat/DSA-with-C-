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

int main()
{
   
    vector<int>arr1 = {1, 3, 5, 7, 9};
    vector<int>arr2 = {2, 4, 6, 8, 10};
    
    vector<int>result = merge(arr1, arr2);
    for(int i = 0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}