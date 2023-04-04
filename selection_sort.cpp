//based on "find the smallest element in array and then swap with the correct position &again apply the same till the array is sorted
// Created by grove on 03-04-2023.
// Time complexity = O(n2)    ||    Space complexity = O(1)

#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[6]={5,3,4,2,1,6};
    for (int i=0;i<n-1;i++){       //we can do i<n also but n-1 make it more optimised (less time taking)
        int min=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<"Sorted array by SELECTION SORT is-:"<<endl;
    for (int ele:arr){cout<<ele<<" ";}
}