#pragma once
#include<vector>
#include<iostream>
using namespace std;
template<typename T>
void mySort(vector<T>& arr){
    int n=arr.size();
    for (int i=1;i<n;i++) {
        T key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j] > key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}