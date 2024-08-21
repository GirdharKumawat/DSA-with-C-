// Binary Search using c++
#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>&arr,int key)
{
    int s = 0;
    int e = arr.size()-1;
    while(s<=e)
    {
        int mid = s+ (e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e= mid-1;
        else 
        s = mid+1;

    }
    return -1;
}


int main(){
    
    vector<int> arr;
    
    
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    
    int key = 5;
    int index_of_key = binary_search(arr,key);

    cout<<"index of key is : "<<index_of_key<<endl;
}