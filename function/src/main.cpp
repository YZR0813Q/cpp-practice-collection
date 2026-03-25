#include "../include/function.h"
int main(){
    vector<int> arr = {5, 2, 13, 9, 33, 11, 5, 6};
    vector<char> str = {'a' ,'r','t','b','e','g'};
    mySort(arr);
    mySort(str);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    for (char c : str) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}