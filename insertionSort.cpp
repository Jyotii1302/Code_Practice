#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n;i++){
        int target= arr[i];
        int j= i-1;

        while(j>=0 && arr[j]> target){
            arr[j+1]= arr[j];
            j--;

        }
        arr[j+1]= target;   
    }
    cout<<endl;
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
