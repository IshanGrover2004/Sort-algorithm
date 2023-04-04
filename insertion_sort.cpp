//suppose u have a 6 random no. of cards, now u take 1 card from set and arrange them 1 by 1........here we take use of temp variable and shift any element. we do not swap values in insertion sort.
// Created by grove on 04-04-2023.
// Time complexity = O()    ||    Space complexity = O()

#include <iostream>
using namespace std;

int main(){
    int n=7;
    int arr[7]={10,1,7,4,8,2,11};

    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;

        for (;j>=0;j--){

            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{break;}
        }
        arr[j+1]=temp;             // j is declared outside of loop so j must defines out also for scope
    }

    cout<<"Sorted array by INSERTION SORT is-:"<<endl;
    for (int ele:arr){cout<<ele<<" ";}
}